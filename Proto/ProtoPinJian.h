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

#include "ProtoPinJianDef.h"

#ifndef __ProtoPinJian_H__ 
#define __ProtoPinJian_H__ 

#include "CProto_Common.h"

#include "CProto.h"



namespace CProto {
/* 挑战的玩家的武将信息 */
struct stFightUserGeneralInfo {
public:
    void Encode(unsigned char *buffer, unsigned int& buffersize) throw (EncodeError);
    void Decode(const unsigned char* buffer, unsigned int& bufferlen) throw (DecodeError);

    stFightUserGeneralInfo();
    void SetDefault();

/* 上阵武将id */
    short general_id;
/* 等级 */
    short level;
/* 战力 */
    int combat_power;

private:
    unsigned int arraysize;
};
/* 挑战的玩家信息 */
struct stFightUserInfo {
public:
    void Encode(unsigned char *buffer, unsigned int& buffersize) throw (EncodeError);
    void Decode(const unsigned char* buffer, unsigned int& bufferlen) throw (DecodeError);

    stFightUserInfo();
    void SetDefault();

/* 排名 */
    short rank;
/* 角色guid */
    uint64_t guid;
/* 头像 */
    int portait;
/* 昵称 */
    proto_string<0> name;
/* 等级 */
    short level;
/* 战力 */
    int combat_power;

private:
    unsigned int arraysize;
};
/* 展示榜上玩家信息 */
struct stTopUserInfo {
public:
    void Encode(unsigned char *buffer, unsigned int& buffersize) throw (EncodeError);
    void Decode(const unsigned char* buffer, unsigned int& bufferlen) throw (DecodeError);

    stTopUserInfo();
    void SetDefault();

/* 排名 */
    short rank;
/* 角色guid */
    uint64_t guid;
/* 头像 */
    int portait;
/* 昵称 */
    proto_string<0> name;
/* 等级 */
    short level;
/* 战力 */
    int combat_power;
/* 上阵武将id */
    proto_vector<short> generals_id;

private:
    unsigned int arraysize;
};
class XJCMD_CSC_PINJIAN_OPENCS : public PackBody{
public:
    static int GetCommandID();
    void Encode(unsigned char *buffer,unsigned int& buffersize) throw (EncodeError);
    void Decode(const unsigned char* buffer,unsigned int& bufferlen) throw (DecodeError);
    int CommandID();

    XJCMD_CSC_PINJIAN_OPENCS();
    void SetDefault();

    

private:
    unsigned int arraysize;
};
class XJCMD_CSC_PINJIAN_OPENSC : public PackBody{
public:
    static int GetCommandID();
    void Encode(unsigned char *buffer,unsigned int& buffersize) throw (EncodeError);
    void Decode(const unsigned char* buffer,unsigned int& bufferlen) throw (DecodeError);
    int CommandID();

    XJCMD_CSC_PINJIAN_OPENSC();
    void SetDefault();

    
/* 排名 */
    short rank;
/* 挑战的玩家信息 */
    proto_vector<stFightUserInfo> fight_users;

private:
    unsigned int arraysize;
};
class XJCMD_CSC_PINJIAN_FIGHTCS : public PackBody{
public:
    static int GetCommandID();
    void Encode(unsigned char *buffer,unsigned int& buffersize) throw (EncodeError);
    void Decode(const unsigned char* buffer,unsigned int& bufferlen) throw (DecodeError);
    int CommandID();

    XJCMD_CSC_PINJIAN_FIGHTCS();
    void SetDefault();

    
/* 我的排名 */
    short rank;
/* 对方角色guid */
    uint64_t target_guid;
/* 对方排名 */
    short target_rank;

private:
    unsigned int arraysize;
};
class XJCMD_CSC_PINJIAN_TOPLISTCS : public PackBody{
public:
    static int GetCommandID();
    void Encode(unsigned char *buffer,unsigned int& buffersize) throw (EncodeError);
    void Decode(const unsigned char* buffer,unsigned int& bufferlen) throw (DecodeError);
    int CommandID();

    XJCMD_CSC_PINJIAN_TOPLISTCS();
    void SetDefault();

    

private:
    unsigned int arraysize;
};
class XJCMD_CSC_PINJIAN_TOPLISTSC : public PackBody{
public:
    static int GetCommandID();
    void Encode(unsigned char *buffer,unsigned int& buffersize) throw (EncodeError);
    void Decode(const unsigned char* buffer,unsigned int& bufferlen) throw (DecodeError);
    int CommandID();

    XJCMD_CSC_PINJIAN_TOPLISTSC();
    void SetDefault();

    
/* 武榜玩家信息 */
    proto_vector<stTopUserInfo> top_user;

private:
    unsigned int arraysize;
};
};


#endif

