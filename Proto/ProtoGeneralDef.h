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


#ifndef __ProtoGeneral_Def_H__
#define __ProtoGeneral_Def_H__


namespace CProto {
enum { /* 数组或字符串最大长度定义 */
	MAX_BATTLEARRAY_GENERAL_NUM = 5, /* 阵法中上阵武将数量 */
	MAX_GENERAL_SKILL_NUM = 4, /* 武将技能数量 */
	MAX_GENERAL_FATE_FIX_NUM = 6, /* 武将固定源数量 */
	MAX_GENERAL_EQUIP_NUM = 4, /* 武将技能数量 */
	MAX_BATTLEMAP_NUM = 32, /* 阵型数 */
};

enum { /* 操作返回值 */
	GOR_SUCCESS = 0, /* 成功 */
	GOR_FAILED_UNKNOWN , /* 未知失败 */
	GOR_FAILED_HAVE_GENERAL , /* 武将已存在 */
	GOR_FAILED_NOT_ENOUGH_SOUL , /* 元神数量不足 */
	GOR_FAILED_GENERAL_TO_SOUL , /* 武将已存在转为元神 */
};

enum { /* 武将基础属性 */
	PROTO_GENERAL_FIGHT_BASIC_HEALTH = 0, /* 血 */
	PROTO_GENERAL_FIGHT_BASIC_ATTACK , /* 攻击 */
	PROTO_GENERAL_FIGHT_BASIC_DEFENCE , /* 防御 */
	PROTO_GENERAL_FIGHT_BASIC_SPIRIT , /* 灵力 */
	PROTO_GENERAL_FIGHT_BASIC_SPEED , /* 速度 */
	PROTO_GENERAL_FIGHT_BASIC_NUM , /*  */
};

enum { /* 武将元素属性 */
	PROTO_GENERAL_FIGHT_ELEMENT_STRENGTH = 0, /* 武 */
	PROTO_GENERAL_FIGHT_ELEMENT_THUNDER , /* 雷 */
	PROTO_GENERAL_FIGHT_ELEMENT_WIND , /* 风 */
	PROTO_GENERAL_FIGHT_ELEMENT_SOIL , /* 土 */
	PROTO_GENERAL_FIGHT_ELEMENT_WATER , /* 水 */
	PROTO_GENERAL_FIGHT_ELEMENT_FIRE , /* 火 */
	PROTO_GENERAL_FIGHT_ELEMENT_NUM , /*  */
};

enum { /* 武将特殊属性 */
	PROTO_GENERAL_FIGHT_SPEC_CRITICAL = 0, /* 暴击 */
	PROTO_GENERAL_FIGHT_SPEC_SPIRIT , /* 神击 */
	PROTO_GENERAL_FIGHT_SPEC_COMBO , /* 连击 */
	PROTO_GENERAL_FIGHT_SPEC_DODGE , /* 闪避 */
	PROTO_GENERAL_FIGHT_SPEC_BLOCK , /* 格挡 */
	PROTO_GENERAL_FIGHT_SPEC_COUNTER , /* 反击 */
	PROTO_GENERAL_FIGHT_SPEC_NUM , /*  */
};

enum { /* 阵法装备点定义 */
	PROTO_EP_WEAPON = 0, /* 武器 */
	PROTO_EP_CLOTHES , /* 衣服 */
	PROTO_EP_SHOE , /* 鞋子 */
	PROTO_EP_JEWELRY , /* 首饰 */
	PROTO_EP_NUM , /* 装备点数量 */
};

enum { /* 武将对白类型定义 */
	GENERAL_DIALOG_SUMMON = 0, /* 召唤 */
	GENERAL_DIALOG_DELETE , /* 删除 */
	GENERAL_DIALOG_COMMON , /* 日常 */
};

enum { /* 援护位置标记 */
	PROTO_ASSIT_CLOSE = -2, /* 援护位置未解锁 */
	PROTO_ASSIT_OPNE = -1, /* 援护位置解锁未装备武将 */
};

enum { /* 传功丹类型 */
	KFT_TYPE_NORMAL , /*  */
	KFT_TYPE_SUPER , /*  */
};

enum TrainingECode { /* 培养的错误代码 */
	Training_UNKNOWN = -1, /*  */
	Training_GOOD , /*  */
	Training_TIMEOUT , /*  */
	Training_GENERAL_NOT_OWNED , /*  */
	Training_NOT_ENOUGH_PILLS , /*  */
	Training_NOT_ENOUGH_SILVER , /*  */
	Training_NOT_ENOUGH_GOLD , /*  */
	Training_SN_FULL , /*  */
	Training_INSUFFICIENT_SPACE , /*  */
	Training_SM_ERROR , /*  */
	Training_USER_IS_OPERATING , /*  */
	Training_APPLY_ATTR_CHANGE_FAIL , /*  */
};

enum PracticeECode { /* 修炼错误代码 */
	Practice_UNKNOWN = -1, /* 未知错误 */
	Practice_GOOD , /* 成功 */
	Practice_REACH_MAX_LEVEL , /* 达到修炼上限 */
	Practice_NOT_ENOUGH_ITEM , /* 物品不够 */
	Practice_NOT_ENOUGH_SILVER , /* 银两不够 */
	Practice_NOT_ENOUGH_SOUL , /* 元神不够 */
	Practice_CONSUME_ITEM_FAILED , /* 物品消耗失败 */
	Practice_CONSUME_SILVER_FAILED , /* 银两消耗失败 */
	Practice_CONSUME_SOUL_FAILED , /* 元神消耗失败 */
	Practice_REACH_MAX_REBUILD_VAL , /* 达到当前修炼重级的重修上限 */
};

enum KungfuTransmitECode { /* 修炼错误代码 */
	KFT_UNKNOWN = -1, /*  */
	KFT_GOOD , /*  */
	KFT_INVALID_GID , /* 错误的武将id */
	KFT_TRANSMITTER_LOW_LEVEL , /* 散功者等级比被传功者低 */
	KFT_NOT_ENOUGH_ITEM , /* 传功丹不够 */
	KFT_BAG_FULL , /* 背包满了 */
	KFT_TRANSMITTER_TRAVELING , /* 散功者正在云游 */
	KFT_REACH_MAX_LEVEL , /* 被传功者达到等级上限了 */
	KFT_TOO_MUCH_EXP_TO_ACCEPT , /* 太多经验无法接受了 */
	KFT_RETURN_STUFF_ERROR , /* 归还物品有错误, 但是仍然继续执行 */
	KFT_CONSUMED_FAILED , /* 消耗失败 */
};

enum CardLotteryType { /* 抽卡类型 */
	CLT_NORMAL , /* 普通抽卡 */
	CLT_RARE , /* 高级抽卡 */
	CLT_EPIC , /* 特级抽卡 */
};

enum CardLotteryECode { /* 抽卡错误代码 */
	CLE_UNKNOWN = -1, /*  */
	CLE_GOOD , /*  */
	CLE_INVALID_LOTTERY_TYPE , /* 无效的抽卡类型 */
	CLE_NOT_ENOUGH_ITEM , /* 拜会贴不够 */
	CLE_CONSUMED_FAILED , /* 消耗失败 */
	CLE_NOT_ENOUGH_GOLD , /* 元宝不够 */
	CLE_DRAW_FAILED , /* 抽卡计算失败 */
	CLE_INVALID_GENERAL_ID , /* 无效的武将id */
	CLE_INVALID_GENERAL_CLASS , /* 无效的武将品质 */
	CLE_SOUL_CAPACITY_OUT , /* 元神的剩余容量不够了, 要求玩家整理 */
	CLE_ADD_GENERAL_FAILED , /* 加武将失败 */
};

};


#endif

