#include "core.h"
#include "use_dlog.h"
#include "droid_holder.h"
#include "public/droid.h"
#include "public/interface/interface.h"

#include <expat.h>
#include <event2/event.h>
#include <event2/util.h>

#include <map>
#include <vector>
#include <csignal>
#include <algorithm>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <cstring>

struct TimerCtx {
  event* ev;
  TimerFunc real_cb;
  void *real_ctx;
};

typedef std::vector<DroidHolder*> DroidHolders;
typedef std::map<std::string, Interface*> InterfaceMap;
typedef std::map<event*, TimerCtx*> Timers;
typedef std::vector<std::pair<std::string, std::string> > DroidConfig;

struct Core::Impl {
  DroidHolders droid_holders_;
  InterfaceMap if_map_;
  event_base *evbase_;
  event *evsig_;
  Timers timers_;

  Impl(void)
    : evbase_(NULL)
      , evsig_(NULL)
  {}
};


static void signal_handler(evutil_socket_t, short, void*);
static void timer_cb(evutil_socket_t, short, void*);
static void free_timer(Timers::value_type& v);
static void free_droid(DroidHolder* holder);
static int parse_droid_paths(const char* config, DroidConfig& droid_config);
static void xml_starthandler(void *userData, const XML_Char *name, const XML_Char **atts);

#define droid_holders (pimpl_->droid_holders_)
#define if_map (pimpl_->if_map_)
#define evbase (pimpl_->evbase_)
#define evsig (pimpl_->evsig_)
#define timers (pimpl_->timers_)

Core::Core(LogSink log_sink) : pimpl_(new Core::Impl) {
  // initial log
  DLOG_SET("core", log_sink); 
  // initial base
  evbase = event_base_new();
  // set signal handler
  evsig = evsignal_new(evbase, SIGINT, signal_handler, evbase);
  evsignal_add(evsig, NULL);
}

Core::~Core(void) { 
  delete pimpl_; 
}

void* Core::Add(timeval* tv, TimerFunc cb, void *ctx, bool persist) {
  short flag = persist ? EV_PERSIST : 0;
  TimerCtx *timer_ctx = new TimerCtx;
  timer_ctx->real_cb = cb;
  timer_ctx->real_ctx = ctx;

  event *evtimer = event_new(evbase, -1, flag, timer_cb, timer_ctx);
  if (!evtimer) {
    DLOG("add timer failed");
    delete timer_ctx;
    return NULL;
  }

  timer_ctx->ev = evtimer;
  if (persist)
    timers[evtimer] = timer_ctx;
  evtimer_add(evtimer, tv);

  DLOG("add timer, handle{%p}, tv{%d, %d}, persist{%d}",
      evtimer, tv->tv_sec, tv->tv_usec, (int)persist);
  return evtimer;
}

void Core::Del(void* handle) {
  event *evtimer = (event*)handle;
  Timers::iterator it = timers.find(evtimer);
  if (it != timers.end()) {
    DLOG("del timer, handle{%p}", handle);
    TimerCtx *ctx = (*it).second;
    timers.erase(it);
    event_del(evtimer);
    delete ctx;
  }
}

Interface* Core::Get(const std::string& if_name) {
  InterfaceMap::iterator it = if_map.find(if_name);
  if (it != if_map.end()) {
    DLOG("get interface {%s}, ok", if_name.c_str());
    return (*it).second;
  } else {
    DLOG("get interface {%s}, not existed", if_name.c_str());
    return NULL;
  }
}

int Core::Add(const std::string& if_name, Interface *interface) {
  InterfaceMap::iterator it = if_map.find(if_name);
  if (it != if_map.end()) {
    DLOG("add interface {%s}, already existed", if_name.c_str());
    return -1;
  }

  if_map.insert(it, InterfaceMap::value_type(if_name, interface));
  DLOG("add interface {%s}, ok", if_name.c_str());
  return 0;
}

void Core::Del(const std::string& if_name) {
  if_map.erase(if_name);
  DLOG("del interface {%s}", if_name.c_str());
}

event_base* Core::EventBase(void) {
  return evbase;
}

int Core::Run(std::vector<const char*>& argv) {
  DLOG("core start");

  int retcode;
  DroidConfig droid_config;
  if (0 != (retcode = parse_droid_paths(argv[0], droid_config))) {
    DLOG("parse_droid_paths error {%d}", retcode);
    return retcode; 
  }
  argv.erase(argv.begin());

  DroidUtil droid_util;
  droid_util.timer = this;
  droid_util.if_set = this;
  droid_util.event = this;

  DroidConfig::iterator it = droid_config.begin(), 
    end = droid_config.end();
  for (; it != end; ++it) {
    std::string& name = (*it).first;
    std::string& path = (*it).second;
    DLOG("droid loading, {%s} {%s}", name.c_str(), path.c_str());

    DroidHolder *holder = new DroidHolder(path);
    droid_util.dlog.Set(name.c_str(), g_core_dlog.sink());
    if (0 != (retcode = holder->Load(argv, &droid_util))) {
      DLOG("droid load error {%d}", retcode);
      return retcode;
    }

    droid_holders.push_back(holder);
    DLOG("* droid loaded success, {%s} {%s}", name.c_str(), path.c_str());
  }

  DLOG("core initialized, running...");
  event_base_loop(evbase, EVLOOP_NO_EXIT_ON_EMPTY);

  DLOG("cleanup everything");
  if_map.clear();

  std::for_each(droid_holders.begin(), droid_holders.end(), free_droid);
  droid_holders.clear();

  std::for_each(timers.begin(), timers.end(), free_timer); 
  timers.clear();

  event_free(evsig);
  event_base_free(evbase);

  DLOG("done, goodbye");
  return 0;
}

void timer_cb(evutil_socket_t, short, void *ctx) {
  TimerCtx *timer_ctx = (TimerCtx*)ctx;
  timer_ctx->real_cb(timer_ctx->real_ctx);
  if ((event_get_events(timer_ctx->ev) & EV_PERSIST) == 0) {
    event_free(timer_ctx->ev);
    delete timer_ctx;
  }
}

void signal_handler(evutil_socket_t, short, void* ctx) {
  DLOG("core receive SIGINT, terminate in 2 seconds");
  timeval tv = { 2, 0 };
  event_base_loopexit((event_base*)ctx, &tv);
}

void free_timer(Timers::value_type& v) {
  TimerCtx* ctx = v.second;
  event_free(ctx->ev);
  delete ctx;
}

void free_droid(DroidHolder* holder) {
  delete holder;
}

void xml_starthandler(void *userData, const XML_Char *name, const XML_Char **atts) {
  DroidConfig* droid_config = (DroidConfig*)userData;
  if (strcmp(name, "droid") == 0) {
    if ((atts[0] && strcmp(atts[0], "name") == 0) &&
        (atts[2] && strcmp(atts[2], "path") == 0)) {
      const char *name = atts[1];
      const char *file = atts[3];
      if (0 == access(file, R_OK | X_OK))
        droid_config->push_back(std::make_pair(name, file));
    }
  }
}

int parse_droid_paths(const char* config, DroidConfig& droid_config) {
  XML_Parser xml_parser = XML_ParserCreate("UTF-8");
  if (!xml_parser)
    return -1;

  XML_SetUserData(xml_parser, &droid_config);
  XML_SetStartElementHandler(xml_parser, xml_starthandler);

  int fd = open(config, O_RDONLY);
  if (-1 == fd)
    return -2;

  char file_buff[4096];
  bool done = false;
  while (!done) {
    ssize_t sz = read(fd, file_buff, 4096);
    if (-1 == sz)
      return -3;

    if (XML_STATUS_ERROR == XML_Parse(xml_parser, file_buff, sz, (done = (sz == 0))))
      return -4;
  }
  return 0;
}

#undef droid_loader
#undef if_map
#undef evbase
#undef evsig
#undef timers

