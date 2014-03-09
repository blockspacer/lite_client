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


#ifndef __ProtoGeneralTravel_Def_H__
#define __ProtoGeneralTravel_Def_H__


namespace CProto {
enum eMoneyType { /* 金钱 */
	ENUM_MONEY_TYPE_INVALID = 0, /* 无效类型 */
	ENUM_MONEY_TYPE_YINLIANG = 1, /* 银两 */
	ENUM_MONEY_TYPE_YUANBAO = 2, /* 元宝 */
	ENUM_MONEY_TYPE_PVP = 3, /* pvp */
};

enum eStateDetailType { /* 云游详情相关状态 */
	STATE_TYPE_INVALID = -1, /* 无效类型 */
	STATE_TYPE_FREE = 0, /* 空闲 */
	STATE_TYPE_TRAVELLING = 1, /* 云游中 */
	STATE_TYPE_REWARD = 2, /* 可领奖 */
};

enum eStateRetType { /* 返回状态 */
	STATE_TYPE_RET_SUCC = 0, /* 成功 */
	STATE_TYPE_RET_FAIL = 1, /* 失败，后期可领取 */
};

};


#endif

