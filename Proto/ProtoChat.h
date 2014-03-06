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

#include "ProtoChatDef.h"

#ifndef __ProtoChat_H__ 
#define __ProtoChat_H__ 

#include "CProto_Common.h"

#include "CProto.h"



namespace CProto {
class XJCMD_CSC_CHATCS : public PackBody{
public:
    static int GetCommandID();
    void Encode(unsigned char *buffer,unsigned int& buffersize) throw (EncodeError);
    void Decode(const unsigned char* buffer,unsigned int& bufferlen) throw (DecodeError);
    int CommandID();

    XJCMD_CSC_CHATCS();
    void SetDefault();

    
/* 聊天类型 */
    eChatTypeEnum chatType;
/* guidTarg */
    uint64_t guid;
/* 聊天内容,最大条数 */
    unsigned short chatContent_arraylen;	char chatContent[MAX_CHAT_NUM];

private:
    unsigned int arraysize;
};
class XJCMD_CSC_CHATSC : public PackBody{
public:
    static int GetCommandID();
    void Encode(unsigned char *buffer,unsigned int& buffersize) throw (EncodeError);
    void Decode(const unsigned char* buffer,unsigned int& bufferlen) throw (DecodeError);
    int CommandID();

    XJCMD_CSC_CHATSC();
    void SetDefault();

    
/* 聊天类型 */
    eChatTypeEnum chatType;
/* 聊天内容,最大条数 */
    unsigned short chatContent_arraylen;	char chatContent[MAX_CHAT_NUM];
/* 聊天发起者名称 */
    unsigned short srcName_arraylen;	char srcName[MAX_NAME_LEN];
/* 聊天发起者ID，显示泡泡？ */
    unsigned short srcID;

private:
    unsigned int arraysize;
};
};


#endif

