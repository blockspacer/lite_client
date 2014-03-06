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


#ifndef __ProtoSyt_Def_H__
#define __ProtoSyt_Def_H__


namespace CProto {
enum SytEventTag { /* 事件标记 */
	SytEvNothing , /* 无事发生 */
	SytEvPveBoss , /* pve出口, boss战 */
	SytEvPve , /* pve战斗 */
	SytEvPvp , /* pvp战斗 */
	SytEvAdvanture , /* 奇遇 */
	SytEvTreasureChest , /* 宝箱 */
	SytEvRandAward , /* 随机奖励 */
	SytEvNum , /*  */
};

enum SytConst { /* 锁妖塔常量定义 */
	TOP_LEVEL = 11, /* 顶层, 一共10层, 到达11表示锁妖塔活动已经全部完成了 */
	MAX_NUM_PVE_PER_LEVEL = 15, /* pve一层中的关数, 15关, [1,15] */
	PVE_BOSS_IDX = 15, /* 哪一关是boss */
	PVE_BOSS_MIGHT_JUMPOUT_IDX = 10, /* 哪一关开始boss可以有几率出现 */
	DIALOG_LEN = 1024, /* 对话的字典key长度 */
	BOSS_DIALOG_CANDIDATE_NUM = 3, /* boss的候选对话数量 */
	MAX_NUM_ADV_CANDIDATE = 7, /* 奇遇的候选武将数量 */
	NUM_ADV_GP_CDD = 4, /* 奇遇猜头像候选人数量 */
	ADV_GN_NAMES_UTF8_BUFLEN = 256, /* 奇遇猜名字, 所有名字打乱后的utf8字符串缓冲长度 */
	MAX_NUM_EVENTS = 64, /* 一层中最多发生的事件数量 */
	MAX_NUM_EV_INT_PARAM = 10, /* 事件交互参数 */
	MAX_NUM_TC_AWARD_ITEM = 10, /* 宝箱奖励最多的物品数量 */
};

enum SytECode { /* 错误代码 */
	SYT_UNKNOWN = -1, /*  */
	SYT_GOOD , /*  */
	SYT_ALREADY_STARTED , /*  */
	SYT_INSUFFICIENT_SPACE , /*  */
	SYT_INVALID_PARAMETERS , /*  */
	SYT_ALL_LEVEL_FINISHED , /*  */
	SYT_RUN_OUT_OF_TIMES , /*  */
	SYT_FAILED_TO_GEN_SEQ , /*  */
	SYT_NOT_START_YET , /*  */
	SYT_LEVEL_FINISHED , /*  */
	SYT_EV_PROCESSING , /*  */
	SYT_NO_PROGRESS , /*  */
	SYT_ITEM_BAG_FULL , /*  */
	SYT_EQUIP_BAG_FULL , /*  */
	SYT_ADV_GUESS_WRONG , /*  */
	SYT_ADV_INVALID_GUESS , /*  */
	SYT_NOT_ALL_LEVEL_GET_3_STARS , /*  */
	SYT_UNSATISFACTORY_VIP_LEVEL , /*  */
	SYT_INSUFFICIENT_GOLD , /*  */
	PVE_BATTLE_LOST , /*  */
	ADD_TREASURE_FAIL , /*  */
	CURRENT_LEVEL_NOT_FINISH , /*  */
	CODE_NUM , /*  */
};

enum SytStartOpt { /* 开始活动的flag */
	SytStartNew , /*  */
	SytStartContinue , /*  */
};

enum SytJumpAwardConst { /* 跳层奖励的常数定义 */
	MAX_AWARD_ITEM_NUM = 10, /*  */
	MAX_AWARD_CARD_NUM = 10, /*  */
	MAX_AWARD_SKILL_NUM = 10, /*  */
};

};


#endif

