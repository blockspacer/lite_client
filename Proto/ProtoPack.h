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

#include "ProtoPackDef.h"

#ifndef __ProtoPack_H__ 
#define __ProtoPack_H__ 

#include "CProto_Common.h"

#include "CProto.h"



namespace CProto {
/* 测试结构体 */
struct stCSHead {
public:
    void Encode(unsigned char *buffer, unsigned int& buffersize) throw (EncodeError);
    void Decode(const unsigned char* buffer, unsigned int& bufferlen) throw (DecodeError);

    stCSHead();
    void SetDefault();

/* uin(不一定是QQ号) */
    unsigned int uin;
/* 命令字 */
    unsigned short command;
/* 序列号 */
    unsigned short sequence;
/* 时间戳 */
    unsigned int timestamp;
/* 时间戳 */
    uint64_t guid;

private:
    unsigned int arraysize;
};
/* 测试结构体 */
struct stSCHead {
public:
    void Encode(unsigned char *buffer, unsigned int& buffersize) throw (EncodeError);
    void Decode(const unsigned char* buffer, unsigned int& bufferlen) throw (DecodeError);

    stSCHead();
    void SetDefault();

/* uin(不一定是QQ号) */
    unsigned int uin;
/* 命令字 */
    unsigned short command;
/* 序列号 */
    unsigned short sequence;
/* 时间戳 */
    unsigned int timestamp;
/* 时间戳 */
    uint64_t guid;

private:
    unsigned int arraysize;
};
};


#endif

