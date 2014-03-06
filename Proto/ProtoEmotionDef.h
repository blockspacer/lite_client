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


#ifndef __ProtoEmotion_Def_H__
#define __ProtoEmotion_Def_H__


namespace CProto {
enum eEmotion { /* 角色需要同步到客户端的属性 */
	PROTO_MAX_ADMIRE_GENERAL_NUM = 100, /* 最多100个可产生好感的武将 */
	PROTO_MAX_ADMIRE_GENERAL_LEVEL = 20, /* 最多20个好感度等级 */
	PROTO_MAX_ADMIRE_PRESENT = 30, /* 最多30个可赠送礼品 */
	PROTO_MAX_ADMIRE_SENARIO = 26, /* 一期最多26个场景 */
};

enum USER_EMOTION_SYN_CLIENT { /* 角色需要同步到客户端的属性 */
	EMOTION_ASC_ADMIRE = 0, /* 好感度 */
	EMOTION_ASC_JEALOUS , /* 吃醋 */
	EMOTION_ASC_CHATTED , /* 已聊 */
	EMOTION_ASC_DATING , /* 约会中 */
	EMOTION_ASC_DATED , /* 已约 */
	EMOTION_ASC_PRESENT , /* 赠送列表 */
	EMOTION_ASC_SHOP_PRESENT , /* 购买赠送 */
	EMOTION_ASC_NUM , /* 角色属性总数 */
};

enum USER_EMOTION_PRESENT_TYPE { /* 礼物赠送类型 */
	PRESENT_TYPE_INVALID = 0, /* 无效 */
	PRESENT_TYPE_NORMAL , /* 普通礼物 */
	PRESENT_TYPE_FASION , /* 时装 */
	PRESENT_TYPE_BREAK_LEVEL , /* 进阶 */
};

};


#endif

