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


#ifndef __ProtoSystemDialog_Def_H__
#define __ProtoSystemDialog_Def_H__


namespace CProto {
enum eSystemDlgTypeEnum { /* ϵͳ����ʽ���� */
	DAILOG_TYPE_NORMAL = -1, /* �첽��ͨ��ʽ */
	DAILOG_TYPE_NORMAL_SYNC = 1, /* ͬ����ͨ��ʽ */
};

enum eSystemDlgRecycleKeyEnum { /* ϵͳ��ش�key���ͣ�ǰ��̨Լ��ռ�õ�����key */
	Recycle_TYPE_INVALID = -1, /*  */
	Recycle_TYPE_STRING = 0, /* ��Ҫ�����ַ��� */
	Recycle_TYPE_MAIN = 1, /* ��ת��ҳ�� */
	Recycle_TYPE_ACTIVITY = 2, /* ���ͻ������ת�ҳ�� */
	Recycle_TYPE_SHOP = 3, /* ��ת�̳�ҳ�� */
	Recycle_TYPE_CONTAINER = 4, /* ��ת���������棬KeyBuffer��4,�������ͣ�ITEM_CONTAINER_TYPEװ�������ߣ����ܣ� */
	Recycle_TYPE_SOUL = 5, /* ��ת���佫Ԫ����棬KeyBuffer��5,0 */
	Recycle_TYPE_SERVERSTART = 100, /* 100�Ժ�ͻ��������⴦����ֱ��͸����̨ */
};

enum eSystemDlgRecycleParamIndexEnum { /* ϵͳ��ش���ͬ����Index���� */
	Recycle_PARAM_KEY = 0, /* key���� */
	Recycle_PARAM_ACTIVITY_ID = 1, /* ���ID */
	Recycle_PARAM_ACTIVITY_GUIDL = 2, /* ���guid low */
	Recycle_PARAM_ACTIVITY_GUIDH = 3, /* ���guid high */
	Recycle_PARAM_CONTAINER_TYPE = 1, /* �������ͣ�ITEM_CONTAINER_TYPE�� */
	Recycle_PARAM_MAX = 20, /* ��ඨ��20���ش����� */
};

};


#endif
