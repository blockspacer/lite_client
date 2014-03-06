#ifndef __CProto_COMMAND_H__ 
#define __CProto_COMMAND_H__ 

#include "CProto_Common.h"

namespace CProto {
	enum command {
		XJCMD_INVALID = -1, /* %Comment% */
		XJCMD_CH2S_CLOSE = 0, /* �ͻ��˶��ߺ�Channel֪ͨGameServer */
		XJCMD_S2CH_RESET = 1, /* GameServer������֪ͨChannel���� */
		XJCMD_S2CH_KICK = 2, /* GameServer֪ͨChannel�Ͽ��ͻ������� */
		XJCMD_S2CH_MAX = 99, /* �����������ֵ */
		XJCMD_SC_TEST = 100, /* �������� */
		XJCMD_CSC_VERSION = 101, /* �汾����¼���Э�� */
		XJCMD_CS_ENTERGAME_START = 102, /* ȡ����ʾ���º������ϷЭ�� */
		XJCMD_CREATECHAR = 103, /* ������ɫ */
		XJCMD_DELETECHAR = 104, /* ɾ����ɫ */
		XJCMD_GET_CHAR = 105, /* ��ȡ��ɫ */
		XJCMD_SC_ENTERGAME_FINISH = 106, /* ����ͬ����Ϻ������Ϸ���Э�� */
		XJCMD_CANCELDELETECHAR = 108, /* ȡ��ɾ����ɫ */
		XJCMD_CSC_LOGIN = 110, /* ������½Э�� */
		XJCMD_CSC_GSLOGIN = 111, /* ������¼GSЭ�� */
		XJCMD_CSC_GSDISPATCH = 112, /* ��������GS */
		XJCMD_CSC_USERINFO_SYN = 201, /* ����������Ϣ */
		XJCMD_CSC_CHANGEFACE = 202, /* ����ͷ�� */
		XJCMD_CSC_ENCHANTMENT_ARTIFICE = 203, /* ������� */
		XJCMD_CSC_ENCHANTMENT_LEVELUP = 204, /* ������� */
		XJCMD_SC_ACTIVITYS_SYN = 205, /* ������̬����ͬ�� */
		XJCMD_CSC_ACTIVITY_COMMAND = 206, /* ��������Э�� */
		XJCMD_SC_USERBAG_SYN = 301, /* ���Ǳ�����Ϣ */
		XJCMD_CSC_ITEM_OPER = 302, /* ��Ʒ����Э�� */
		XJCMD_SC_ITEMS_STATIC_SYN = 303, /* ��Ʒ���ñ����� */
		XJCMD_CSC_TITLE_ADD = 304, /* ʹ�óƺ� */
		XJCMD_SC_TITLE_STATE_LIST_SYN = 305, /* �ƺ�״̬�б� */
		XJCMD_CSC_TITLE_USE = 306, /* ʹ�óƺ� */
		XJCMD_CSC_ITEM_DETAIL = 307, /* ������Ʒ��̬���ݻ�ȡ */
		XJCMD_CSC_SKILL_DATA = 308, /* ���ܶ�̬���� */
		XJCMD_CSC_RESOURCE_SYN = 310, /* ��̬����ͬ�� */
		XJCMD_CS_ASK_SKILL_LEVELUP = 311, /* �������� */
		XJCMD_SC_RET_SKILL_LEVELUP = 312, /* ���������ظ� */
		XJCMD_CSC_ITEM_2_EXP = 313, /* ������� */
		XJCMD_SC_BATTLE = 401, /* ս���������а� */
		XJCMD_CSC_USEREXPLORE_SYN = 501, /* ��ɫ̽��ͬ������ */
		XJCMD_CSC_USEREXPLORE_FULLDATA = 502, /* ��ɫ̽��ȫ������ */
		XJCMD_CSC_USEREXPLORE_CHALLENGE = 503, /* ̽���ؿ���ս */
		XJCMD_CSC_USEREXPLORE_SYN_BATCH = 504, /* ̽���ؿ�����ͬ�� */
		XJCMD_CSC_USEREXPLORE_RES_SYN = 505, /* ��ɫ̽����̬��Դͬ������ */
		XJCMD_CSC_USEREXPLORE_CHALLENGE_BAT = 506, /* ̽���ؿ�ɨ�� */
		XJCMD_SC_USERGENERAL_FULLDATA = 600, /* ��ɫ�佫��Ϣ */
		XJCMD_SC_USERGENERAL_SYN = 601, /* ��ɫ�佫ͬ����Ϣ */
		XJCMD_CSC_SUMMON_GENERAL = 602, /* �ٻ��佫 */
		XJCMD_SC_USERGENERAL_BATTLEARRAY = 603, /* ��ɫ������Ϣ */
		XJCMD_SC_USERGENERAL_RES_SYN = 604, /* ��ɫ��̬����ͬ�� */
		XJCMD_CS_USERGENERAL_BATTLEARRAY_CHANGE = 605, /* ��ɫ���ݱ�� */
		XJCMD_SC_USERGENERAL_BATTLEARRAY_CHANGE_RET = 606, /* ��ɫ���ݱ���ظ� */
		XJCMD_CSC_GENERAL_PRACTICE = 607, /* �佫���� */
		XJCMD_CSC_GENERAL_PRACTICE_REBUILD = 608, /* �佫���� */
		XJCMD_CSC_GENERAL_ADD_ADDITION_FATE = 609, /* �佫��Ե */
		XJCMD_CS_SKILL_ON = 610, /* ����װ�� */
		XJCMD_CS_BATTLEARR_ASSITPOS_OPEN = 611, /* �佫����Ԯ��λ���� */
		XJCMD_CSC_SENARIO_ENTER = 612, /* ���볡�� */
		XJCMD_SC_SENARIO_SYN = 613, /* ͬ������ */
		XJCMD_CSC_TRAINING = 614, /* %Comment% */
		XJCMD_CSC_TRAINING_CONFIRM = 615, /* %Comment% */
		XJCMD_CSC_KUNGFU_TRANSMIT = 616, /* %Comment% */
		XJCMD_CSC_CARDLOTTERY_DRAW = 617, /* %Comment% */
		XJCMD_CSC_CARDLOTTERY_10_DRAW = 618, /* %Comment% */
		XJCMD_CSC_FRIENDINFO_LIST = 700, /* �����б� */
		XJCMD_CSC_FRIENDEVENT_LIST = 702, /* ���Ѷ�̬ */
		XJCMD_CSC_FRIEND_NEW = 703, /* ������ */
		XJCMD_CSC_FRIEND_PRESENTLIST = 704, /* �������� */
		XJCMD_CSC_FRIEND_OP = 705, /* �޸�������� */
		XJCMD_CSC_FRIEND_GET_PRESENT = 706, /* ��ȡ�������� */
		XJCMD_CSC_GENERALTRAVEL_DETAIL = 720, /* �佫�������� */
		XJCMD_CSC_GENERALTRAVEL_USEMONEY = 721, /* ʹ�ý�Ǯˢ�ɹ��� */
		XJCMD_CSC_GENERALTRAVEL_BEGIN = 722, /* ��ʼ���� */
		XJCMD_CSC_GENERALTRAVEL_GETREWARD = 723, /* ��ȡ���� */
		XJCMD_CSC_GENERALTRAVEL_FATELIST = 724, /* ��ȡ�佫Ե�б� */
		XJCMD_CSC_MAIL_LIST = 800, /* �ʼ��б� */
		XJCMD_CSC_MAIL_DETAIL = 801, /* �ʼ����� */
		XJCMD_CSC_MAIL_SEND = 802, /* �����ʼ� */
		XJCMD_CSC_MAIL_DELETE = 803, /* ɾ���ʼ� */
		XJCMD_CSC_MAIL_GET_ATTACH = 804, /* ��ȡ�ʼ����� */
		XJCMD_CSC_SYSTEM_NOTICE = 900, /* ���� */
		XJCMD_SC_SYSTEM_TIP = 901, /* ϵͳ��ʾ */
		XJCMD_SC_SYSTEM_DIALOG = 902, /* ϵͳ���� */
		XJCMD_CS_SYSTEM_RECYCLECHECK = 903, /* ϵͳ��������Ϣ͸�� */
		XJCMD_CSC_CHAT = 904, /* ���� */
		XJCMD_CSC_CARDTREE_REWARD = 905, /* ��������ȡ���� */
		XJCMD_SC_EQUIPS_DISCARD_SYN = 906, /* �������Ҳ��ڱ�����װ���б� */
		XJCMD_SC_AWARD_TIP = 907, /* ϵͳͨ�ý�����Ϣ */
		XJCMD_SC_HIGHLIGHT_TIP = 908, /* ϵͳ��Ŀ��ʾ��Ϣ */
		XJCMD_CS_LOG = 909, /* �ͻ�����־�ϱ� */
		XJCMD_CSC_CHAT_STORY = 930, /* �������Ľ��� */
		XJCMD_CSC_ASK_DATE = 931, /* ������Լ */
		XJCMD_SC_EMOTION_SYNC = 932, /* ���ϵͳͬ�� */
		XJCMD_CSC_GENERAL_PRESENT = 933, /* �������� */
		XJCMD_CSC_GENERAL_ADMIRE_LEVEL_UP = 934, /* �øж��������콱 */
		XJCMD_CSC_PRESENT_SHOP = 935, /* �̳ǹ����ƽ׵��� */
		XJCMD_CSC_PINJIAN_OPEN = 1000, /* Ʒ����������� */
		XJCMD_CSC_PINJIAN_FIGHT = 1001, /* Ʒ�������� */
		XJCMD_CSC_PINJIAN_TOPLIST = 1002, /* Ʒ�������� */
		XJCMD_QUERY_PROGRESS = 1100, /* ��ѯ���������� */
		XJCMD_LEVEL_START = 1101, /* ������������¼��б� */
		XJCMD_LEVEL_NEXT = 1102, /* ������������¼��б� */
		XJCMD_PROCESS_EVENT = 1103, /* ������ִ����һ���� */
		XJCMD_MAXSIZE = 2000, /* Э�����ֵ+1 */
	};
};


#endif

