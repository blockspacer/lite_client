file(GLOB CORE_SOURCE
  *.h *.cc
  )

use_dlog(core CORE_SOURCE)

add_executable(core 
  ${CORE_SOURCE}
  ${CMAKE_SOURCE_DIR}/public/dlog.cc
  )

set_target_properties(core PROPERTIES 
  COMPILE_FLAGS ${cflags}
  LINK_FLAGS "-Wl,--no-as-need -lrt" # for linux at home :)
  )

target_link_libraries(core
  dl
  event
  expat
  )

install(TARGETS core 
  RUNTIME 
  DESTINATION .
  )
