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

#include "ProtoUserDef.h"

#ifndef __ProtoUser_H__ 
#define __ProtoUser_H__ 

#include "CProto_Common.h"

#include "CProto.h"



namespace CProto {
/* 角色资源数据 */
struct stUserResData {
public:
    void Encode(unsigned char *buffer, unsigned int& buffersize) throw (EncodeError);
    void Decode(const unsigned char* buffer, unsigned int& bufferlen) throw (DecodeError);

    stUserResData();
    void SetDefault();

/* 经验最大值 */
    int maxexp;
/* 精最大值 */
    short maxenergy;
/* 神最大值 */
    short maxspirit;

private:
    unsigned int arraysize;
};
/* 卡牌谱动态资源 */
struct stCardTree {
public:
    void Encode(unsigned char *buffer, unsigned int& buffersize) throw (EncodeError);
    void Decode(const unsigned char* buffer, unsigned int& bufferlen) throw (DecodeError);

    stCardTree();
    void SetDefault();

/* 祖谱id */
    unsigned char treeid;
/* 子谱id */
    unsigned char subtreeid;
/* 需要凑齐的卡牌数 */
    short cardmaxnum;
/* 奖励类型 */
    unsigned char awardtype;
/* 奖励参数1 */
    int awardparam1;
/* 奖励参数2 */
    int awardparam2;

private:
    unsigned int arraysize;
};
/* 炼化数据 */
struct stArtifice {
public:
    void Encode(unsigned char *buffer, unsigned int& buffersize) throw (EncodeError);
    void Decode(const unsigned char* buffer, unsigned int& bufferlen) throw (DecodeError);

    stArtifice();
    void SetDefault();

/* 武将id */
    short general_id;
/* 是否是元神 */
    unsigned char is_soul;
/* 元神数量 */
    short soul_num;

private:
    unsigned int arraysize;
};
class XJCMD_CSC_USERINFO_SYNCS : public PackBody{
public:
    static int GetCommandID();
    void Encode(unsigned char *buffer,unsigned int& buffersize) throw (EncodeError);
    void Decode(const unsigned char* buffer,unsigned int& bufferlen) throw (DecodeError);
    int CommandID();

    XJCMD_CSC_USERINFO_SYNCS();
    void SetDefault();

    
/* 角色数据版本号 */
    char user_version;
/* 角色数据存储资源版本号 */
    int user_db_res_version;
/* 角色资源数据版本号 */
    int user_res_version;

private:
    unsigned int arraysize;
};
class XJCMD_CSC_USERINFO_SYNSC : public PackBody{
public:
    static int GetCommandID();
    void Encode(unsigned char *buffer,unsigned int& buffersize) throw (EncodeError);
    void Decode(const unsigned char* buffer,unsigned int& bufferlen) throw (DecodeError);
    int CommandID();

    XJCMD_CSC_USERINFO_SYNSC();
    void SetDefault();

    
/* 版本号 */
    char version;
/* 数据存储资源版本号 */
    int version_db_res;
/* 角色数据脏标记 */
    unsigned char dirtyflag_arraylen;	unsigned char dirtyflag[(1+(USER_ASC_NUM-1)/8)];
/* 昵称 */
    unsigned short name_arraylen;	char name[MAX_NAME_LEN];
/* 性别(0-女，1-男) */
    char sex;
/* 头像 */
    int faceid;
/* 等级 */
    short level;
/* 阅历 */
    int exp;
/* vip等级 */
    char viplevel;
/* 银两 */
    int silver;
/* 元宝 */
    int gold;
/* 晶玉 */
    int crystal;
/* 精 */
    short energy;
/* 精下次恢复时间 */
    short energy_recover_time;
/* 全部精恢复时间 */
    int all_energy_recover_time;
/* 神 */
    short spirit;
/* 神下次恢复时间 */
    short spirit_recover_time;
/* 全部神恢复时间 */
    int all_spirit_recover_time;
/* 结界层级 */
    proto_vector<short> enchantment_level;
/* 元气 */
    int yuanqi;
/* 资源数据 */
    stUserResData resdata;
/* 卡牌谱奖励信息 */
    unsigned char cardtree_arraylen;	stCardTree cardtree[PROTO_MAX_CARDTREE_NUM];
/* 战斗力 */
    int combat_power;
/* 高级抽卡时间戳 */
    uint64_t rare_draw_timestamp;
/* 特级抽卡时间戳 */
    uint64_t epic_draw_timestamp;
/* 声望 */
    int prestige;
/* 下次扫荡时间 */
    int next_explore_challenge_bat_time;

private:
    unsigned int arraysize;
};
class XJCMD_CSC_CHANGEFACECS : public PackBody{
public:
    static int GetCommandID();
    void Encode(unsigned char *buffer,unsigned int& buffersize) throw (EncodeError);
    void Decode(const unsigned char* buffer,unsigned int& bufferlen) throw (DecodeError);
    int CommandID();

    XJCMD_CSC_CHANGEFACECS();
    void SetDefault();

    
/* 新头像id */
    short newfaceid;

private:
    unsigned int arraysize;
};
class XJCMD_CSC_CHANGEFACESC : public PackBody{
public:
    static int GetCommandID();
    void Encode(unsigned char *buffer,unsigned int& buffersize) throw (EncodeError);
    void Decode(const unsigned char* buffer,unsigned int& bufferlen) throw (DecodeError);
    int CommandID();

    XJCMD_CSC_CHANGEFACESC();
    void SetDefault();

    
/* 新头像id */
    short newfaceid;

private:
    unsigned int arraysize;
};
class XJCMD_CSC_ENCHANTMENT_ARTIFICECS : public PackBody{
public:
    static int GetCommandID();
    void Encode(unsigned char *buffer,unsigned int& buffersize) throw (EncodeError);
    void Decode(const unsigned char* buffer,unsigned int& bufferlen) throw (DecodeError);
    int CommandID();

    XJCMD_CSC_ENCHANTMENT_ARTIFICECS();
    void SetDefault();

    
/* 炼化数据列表 */
    unsigned short data_arraylen;	stArtifice data[MAX_USERGENERAL_NUM];

private:
    unsigned int arraysize;
};
class XJCMD_CSC_ENCHANTMENT_ARTIFICESC : public PackBody{
public:
    static int GetCommandID();
    void Encode(unsigned char *buffer,unsigned int& buffersize) throw (EncodeError);
    void Decode(const unsigned char* buffer,unsigned int& bufferlen) throw (DecodeError);
    int CommandID();

    XJCMD_CSC_ENCHANTMENT_ARTIFICESC();
    void SetDefault();

    
/* 错误代码 */
    EnchantmentECode retcode;

private:
    unsigned int arraysize;
};
class XJCMD_CSC_ENCHANTMENT_LEVELUPCS : public PackBody{
public:
    static int GetCommandID();
    void Encode(unsigned char *buffer,unsigned int& buffersize) throw (EncodeError);
    void Decode(const unsigned char* buffer,unsigned int& bufferlen) throw (DecodeError);
    int CommandID();

    XJCMD_CSC_ENCHANTMENT_LEVELUPCS();
    void SetDefault();

    
/* 结界索引 */
    unsigned char enchantment_index;

private:
    unsigned int arraysize;
};
class XJCMD_CSC_ENCHANTMENT_LEVELUPSC : public PackBody{
public:
    static int GetCommandID();
    void Encode(unsigned char *buffer,unsigned int& buffersize) throw (EncodeError);
    void Decode(const unsigned char* buffer,unsigned int& bufferlen) throw (DecodeError);
    int CommandID();

    XJCMD_CSC_ENCHANTMENT_LEVELUPSC();
    void SetDefault();

    
/* 错误代码 */
    EnchantmentECode retcode;

private:
    unsigned int arraysize;
};
};


#endif

