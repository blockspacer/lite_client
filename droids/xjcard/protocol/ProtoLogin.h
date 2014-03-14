/********************************************************************
 * This file is generated by program cap
 * Please do not change it directly
 * 
 * protocol name: CProto
 * protocol version: 1.0
 * protocol author:   
 * protocol desc: �ɽ����ƿͻ��˺�̨����Э��-����Э��
 *
 * history:
 * 2013-02-22 : ���� (V1.0)
********************************************************************/

#include "ProtoLoginDef.h"

#ifndef __ProtoLogin_H__ 
#define __ProtoLogin_H__ 

#include "CProto_Common.h"

#include "CProto.h"



namespace CProto {
/* �ͻ������ݰ汾 */
struct stDataVersion {
public:
    void Encode(unsigned char *buffer, unsigned int& buffersize) throw (EncodeError);
    void Decode(const unsigned char* buffer, unsigned int& bufferlen) throw (DecodeError);

    stDataVersion();
    void SetDefault();

/* ���ݰ汾 */
    unsigned short version_arraylen;	int version[DATA_TYPE_NUM];

private:
    unsigned int arraysize;
};
/* ������Ϣ */
struct stPartInfo {
public:
    void Encode(unsigned char *buffer, unsigned int& buffersize) throw (EncodeError);
    void Decode(const unsigned char* buffer, unsigned int& bufferlen) throw (DecodeError);

    stPartInfo();
    void SetDefault();

/* ����ID */
    short partid;
/* �������� */
    unsigned short name_arraylen;	char name[MAX_LEN_SMALL];
/* ����״̬��ePartStatus�� */
    char status;
/* �Ƿ����� */
    char newflag;
/* �Ƿ��Ƽ��� */
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

    
/* ��¼�˺� */
    unsigned short user_arraylen;	char user[MAX_LEN_SMALL];
/* ��¼Ʊ�� */
    unsigned short sign_arraylen;	char sign[MAX_LEN_LARGE];
/* �豸Mac��ַ */
    unsigned short mac_arraylen;	char mac[MAX_LEN_SMALL];
/* �汾���� */
    unsigned short fullVer_arraylen;	char fullVer[MAX_LEN_SMALL];
/* �ַ�����ʽ�İ汾��1.0.0 */
    unsigned short ver_arraylen;	char ver[MAX_LEN_SMALL];
/* �ֻ����� */
    unsigned short platform_arraylen;	char platform[MAX_LEN_SMALL];
/* �ֱ������� */
    short key;
    short version;

/* ��������Ϣ */
    unsigned short channel_arraylen;	char channel[MAX_LEN_SMALL];
/* ͳ���õ�ChannelId */
    unsigned short statId_arraylen;	char statId[MAX_LEN_SMALL];
/* ͳ���õ�Channel */
    unsigned short statChannel_arraylen;	char statChannel[MAX_LEN_SMALL];
/* �ͻ��˻�������ݰ汾��Ϣ */
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

    
/* ��¼��֤״̬ */
    char loginstatus;
/* ��¼��ʾ */
    stQhtml loginmsg;
/* �ͻ��˸���״̬ */
    char updatestatus;
/* �ͻ��˸�����ʾ��Ϣ */
    stQhtml updatemsg;
/* uin(��һ����QQ��) */
    unsigned int uin;
/* ��ɫGuid��-1��ʾ�޽�ɫ */
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

    
/* �����ֶ� */
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

    
/* �����ֶ� */
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

    
/* ��¼�˺� */
    unsigned short user_arraylen;	char user[MAX_LEN_LARGE];
/* ��¼Ʊ�� */
    unsigned short sign_arraylen;	char sign[MAX_LEN_LARGE];
/* ��¼�˺����ͣ�qq|wechat�� */
    unsigned short type_arraylen;	char type[MAX_LEN_SMALL];
/* ������ʶ�ַ��������ܳ���|�ַ��� */
    unsigned short channel_arraylen;	char channel[MAX_LEN_SMALL];
/* ƽ̨��ʶ�ַ���(android|ios) */
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

    
/* ��¼��֤״̬ */
    char loginstatus;
/* ��¼��ʾ */
    stQhtml loginmsg;
/* ���ص�sid */
    unsigned short sid_arraylen;	char sid[MAX_LEN_SMALL];
/* uin(��һ����QQ��) */
    unsigned int uin;
/* ���صĴ����б� */
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

    
/* ��Ҫ�����partid */
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

    
/* ��¼��֤״̬ */
    char loginstatus;
/* ��¼��ʾ */
    stQhtml loginmsg;
/* �����GS��ʶ */
    short gid;
/* socket�����ַ���(ip or url:port) */
    unsigned short connect_arraylen;	char connect[MAX_LEN_SMALL];
/* ��ɫGUID */
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

    
/* ��¼�˺� */
    unsigned short user_arraylen;	char user[MAX_LEN_LARGE];
/* ��¼Ʊ�� */
    unsigned short sign_arraylen;	char sign[MAX_LEN_LARGE];
/* ��¼�˺����ͣ�qq|wechat�� */
    unsigned short type_arraylen;	char type[MAX_LEN_SMALL];
/* ������ʶ�ַ��������ܳ���|�ַ��� */
    unsigned short channel_arraylen;	char channel[MAX_LEN_SMALL];
/* ƽ̨��ʶ�ַ���(android|ios) */
    unsigned short platform_arraylen;	char platform[MAX_LEN_SMALL];
/* XJCMD_CSC_LOGIN���ص�sid */
    unsigned short sid_arraylen;	char sid[MAX_LEN_LARGE];
/* XJCMD_CSC_LOGIN���صĽ�ɫGUID */
    int64_t guid;
/* �ͻ��˻�������ݰ汾��Ϣ */
    stDataVersion dataversion;
/* ����������� 0 ������¼ 1 �������� */
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

    
/* ��¼��֤״̬ */
    char loginstatus;
/* ��¼��ʾ */
    stQhtml loginmsg;
/* ��ɫ�Ƿ��Ѿ����� 0 δ���� 1 �Ѵ��� */
    char haschar;
/* uin(��һ����QQ��) */
    unsigned int uin;

private:
    unsigned int arraysize;
};
};


#endif
