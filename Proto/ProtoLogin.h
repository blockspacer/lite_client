/********************************************************************
 * This file is generated by program cap
 * Please do not change it directly
 * 
 * protocol name: CProto
 * protocol version: 1.0
 * protocol author:   
 * protocol desc: 仙剑卡牌客户端后台交互协议-控制协议
 *
 * history:
 * 2013-02-22 : 创建 (V1.0)
********************************************************************/

#include "ProtoLoginDef.h"

#ifndef __ProtoLogin_H__ 
#define __ProtoLogin_H__ 

#include "CProto_Common.h"

#include "CProto.h"



namespace CProto {
/* 客户端数据版本 */
struct stDataVersion {
public:
    void Encode(unsigned char *buffer, unsigned int& buffersize) throw (EncodeError);
    void Decode(const unsigned char* buffer, unsigned int& bufferlen) throw (DecodeError);

    stDataVersion();
    void SetDefault();

/* 数据版本 */
    unsigned short version_arraylen;	int version[DATA_TYPE_NUM];

private:
    unsigned int arraysize;
};
/* 大区信息 */
struct stPartInfo {
public:
    void Encode(unsigned char *buffer, unsigned int& buffersize) throw (EncodeError);
    void Decode(const unsigned char* buffer, unsigned int& bufferlen) throw (DecodeError);

    stPartInfo();
    void SetDefault();

/* 大区ID */
    short partid;
/* 大区名称 */
    unsigned short name_arraylen;	char name[MAX_LEN_SMALL];
/* 大区状态（ePartStatus） */
    char status;
/* 是否新区 */
    char newflag;
/* 是否推荐区 */
    char recommendflag;

private:
    unsigned int arraysize;
};
class XJCMD_CH2S_CLOSECS : public PackBody{
public:
    static int GetCommandID();
    void Encode(unsigned char *buffer,unsigned int& buffersize) throw (EncodeError);
    void Decode(const unsigned char* buffer,unsigned int& bufferlen) throw (DecodeError);
    int CommandID();

    XJCMD_CH2S_CLOSECS();
    void SetDefault();

    

private:
    unsigned int arraysize;
};
class XJCMD_S2CH_RESETSC : public PackBody{
public:
    static int GetCommandID();
    void Encode(unsigned char *buffer,unsigned int& buffersize) throw (EncodeError);
    void Decode(const unsigned char* buffer,unsigned int& bufferlen) throw (DecodeError);
    int CommandID();

    XJCMD_S2CH_RESETSC();
    void SetDefault();

    

private:
    unsigned int arraysize;
};
class XJCMD_S2CH_KICKSC : public PackBody{
public:
    static int GetCommandID();
    void Encode(unsigned char *buffer,unsigned int& buffersize) throw (EncodeError);
    void Decode(const unsigned char* buffer,unsigned int& bufferlen) throw (DecodeError);
    int CommandID();

    XJCMD_S2CH_KICKSC();
    void SetDefault();

    

private:
    unsigned int arraysize;
};
class XJCMD_CSC_VERSIONCS : public PackBody{
public:
    static int GetCommandID();
    void Encode(unsigned char *buffer,unsigned int& buffersize) throw (EncodeError);
    void Decode(const unsigned char* buffer,unsigned int& bufferlen) throw (DecodeError);
    int CommandID();

    XJCMD_CSC_VERSIONCS();
    void SetDefault();

    
/* 登录账号 */
    unsigned short user_arraylen;	char user[MAX_LEN_SMALL];
/* 登录票据 */
    unsigned short sign_arraylen;	char sign[MAX_LEN_LARGE];
/* 设备Mac地址 */
    unsigned short mac_arraylen;	char mac[MAX_LEN_SMALL];
/* 版本描述 */
    unsigned short fullVer_arraylen;	char fullVer[MAX_LEN_SMALL];
/* 字符串形式的版本号1.0.0 */
    unsigned short ver_arraylen;	char ver[MAX_LEN_SMALL];
/* 手机机型 */
    unsigned short platform_arraylen;	char platform[MAX_LEN_SMALL];
/* 分辨率类型 */
    short key;
    short version;

/* 渠道号信息 */
    unsigned short channel_arraylen;	char channel[MAX_LEN_SMALL];
/* 统计用的ChannelId */
    unsigned short statId_arraylen;	char statId[MAX_LEN_SMALL];
/* 统计用的Channel */
    unsigned short statChannel_arraylen;	char statChannel[MAX_LEN_SMALL];
/* 客户端缓存的数据版本信息 */
    stDataVersion dataversion;

private:
    unsigned int arraysize;
};
class XJCMD_CSC_VERSIONSC : public PackBody{
public:
    static int GetCommandID();
    void Encode(unsigned char *buffer,unsigned int& buffersize) throw (EncodeError);
    void Decode(const unsigned char* buffer,unsigned int& bufferlen) throw (DecodeError);
    int CommandID();

    XJCMD_CSC_VERSIONSC();
    void SetDefault();

    
/* 登录验证状态 */
    char loginstatus;
/* 登录提示 */
    stQhtml loginmsg;
/* 客户端更新状态 */
    char updatestatus;
/* 客户端更新提示信息 */
    stQhtml updatemsg;
/* uin(不一定是QQ号) */
    unsigned int uin;
/* 角色Guid，-1表示无角色 */
    uint64_t guid;

private:
    unsigned int arraysize;
};
class XJCMD_CS_ENTERGAME_STARTCS : public PackBody{
public:
    static int GetCommandID();
    void Encode(unsigned char *buffer,unsigned int& buffersize) throw (EncodeError);
    void Decode(const unsigned char* buffer,unsigned int& bufferlen) throw (DecodeError);
    int CommandID();

    XJCMD_CS_ENTERGAME_STARTCS();
    void SetDefault();

    
/* 保留字段 */
    unsigned char type;

private:
    unsigned int arraysize;
};
class XJCMD_SC_ENTERGAME_FINISHSC : public PackBody{
public:
    static int GetCommandID();
    void Encode(unsigned char *buffer,unsigned int& buffersize) throw (EncodeError);
    void Decode(const unsigned char* buffer,unsigned int& bufferlen) throw (DecodeError);
    int CommandID();

    XJCMD_SC_ENTERGAME_FINISHSC();
    void SetDefault();

    
/* 保留字段 */
    unsigned char type;

private:
    unsigned int arraysize;
};
class XJCMD_CSC_LOGINCS : public PackBody{
public:
    static int GetCommandID();
    void Encode(unsigned char *buffer,unsigned int& buffersize) throw (EncodeError);
    void Decode(const unsigned char* buffer,unsigned int& bufferlen) throw (DecodeError);
    int CommandID();

    XJCMD_CSC_LOGINCS();
    void SetDefault();

    
/* 登录账号 */
    unsigned short user_arraylen;	char user[MAX_LEN_LARGE];
/* 登录票据 */
    unsigned short sign_arraylen;	char sign[MAX_LEN_LARGE];
/* 登录账号类型（qq|wechat） */
    unsigned short type_arraylen;	char type[MAX_LEN_SMALL];
/* 渠道标识字符串（不能出现|字符） */
    unsigned short channel_arraylen;	char channel[MAX_LEN_SMALL];
/* 平台标识字符串(android|ios) */
    unsigned short platform_arraylen;	char platform[MAX_LEN_SMALL];

private:
    unsigned int arraysize;
};
class XJCMD_CSC_LOGINSC : public PackBody{
public:
    static int GetCommandID();
    void Encode(unsigned char *buffer,unsigned int& buffersize) throw (EncodeError);
    void Decode(const unsigned char* buffer,unsigned int& bufferlen) throw (DecodeError);
    int CommandID();

    XJCMD_CSC_LOGINSC();
    void SetDefault();

    
/* 登录验证状态 */
    char loginstatus;
/* 登录提示 */
    stQhtml loginmsg;
/* 返回的sid */
    unsigned short sid_arraylen;	char sid[MAX_LEN_SMALL];
/* uin(不一定是QQ号) */
    unsigned int uin;
/* 返回的大区列表 */
    unsigned short partlist_arraylen;	stPartInfo partlist[MAX_LEN_SMALL];

private:
    unsigned int arraysize;
};
class XJCMD_CSC_GSDISPATCHCS : public PackBody{
public:
    static int GetCommandID();
    void Encode(unsigned char *buffer,unsigned int& buffersize) throw (EncodeError);
    void Decode(const unsigned char* buffer,unsigned int& bufferlen) throw (DecodeError);
    int CommandID();

    XJCMD_CSC_GSDISPATCHCS();
    void SetDefault();

    
/* 需要进入的partid */
    short partid;

private:
    unsigned int arraysize;
};
class XJCMD_CSC_GSDISPATCHSC : public PackBody{
public:
    static int GetCommandID();
    void Encode(unsigned char *buffer,unsigned int& buffersize) throw (EncodeError);
    void Decode(const unsigned char* buffer,unsigned int& bufferlen) throw (DecodeError);
    int CommandID();

    XJCMD_CSC_GSDISPATCHSC();
    void SetDefault();

    
/* 登录验证状态 */
    char loginstatus;
/* 登录提示 */
    stQhtml loginmsg;
/* 分配的GS标识 */
    short gid;
/* socket连接字符串(ip or url:port) */
    unsigned short connect_arraylen;	char connect[MAX_LEN_SMALL];
/* 角色GUID */
    int64_t guid;

private:
    unsigned int arraysize;
};
class XJCMD_CSC_GSLOGINCS : public PackBody{
public:
    static int GetCommandID();
    void Encode(unsigned char *buffer,unsigned int& buffersize) throw (EncodeError);
    void Decode(const unsigned char* buffer,unsigned int& bufferlen) throw (DecodeError);
    int CommandID();

    XJCMD_CSC_GSLOGINCS();
    void SetDefault();

    
/* 登录账号 */
    unsigned short user_arraylen;	char user[MAX_LEN_LARGE];
/* 登录票据 */
    unsigned short sign_arraylen;	char sign[MAX_LEN_LARGE];
/* 登录账号类型（qq|wechat） */
    unsigned short type_arraylen;	char type[MAX_LEN_SMALL];
/* 渠道标识字符串（不能出现|字符） */
    unsigned short channel_arraylen;	char channel[MAX_LEN_SMALL];
/* 平台标识字符串(android|ios) */
    unsigned short platform_arraylen;	char platform[MAX_LEN_SMALL];
/* XJCMD_CSC_LOGIN返回的sid */
    unsigned short sid_arraylen;	char sid[MAX_LEN_LARGE];
/* XJCMD_CSC_LOGIN返回的角色GUID */
    int64_t guid;
/* 客户端缓存的数据版本信息 */
    stDataVersion dataversion;
/* 断线重连标记 0 正常登录 1 断线重连 */
    char checkflag;

private:
    unsigned int arraysize;
};
class XJCMD_CSC_GSLOGINSC : public PackBody{
public:
    static int GetCommandID();
    void Encode(unsigned char *buffer,unsigned int& buffersize) throw (EncodeError);
    void Decode(const unsigned char* buffer,unsigned int& bufferlen) throw (DecodeError);
    int CommandID();

    XJCMD_CSC_GSLOGINSC();
    void SetDefault();

    
/* 登录验证状态 */
    char loginstatus;
/* 登录提示 */
    stQhtml loginmsg;
/* 角色是否已经创建 0 未创建 1 已创建 */
    char haschar;
/* uin(不一定是QQ号) */
    unsigned int uin;

private:
    unsigned int arraysize;
};
};


#endif

