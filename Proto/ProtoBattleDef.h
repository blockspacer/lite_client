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


#ifndef __ProtoBattle_Def_H__
#define __ProtoBattle_Def_H__


namespace CProto {
enum eProtoBattleCamp { /* 阵营类型 */
	PROTO_BATTLE_CAMP_INVALID = -1, /* 无效阵营 */
	PROTO_BATTLE_CAMP_BOTTOM = 0, /* 下方阵营 */
	PROTO_BATTLE_CAMP_TOP , /* 上方阵营 */
	PROTO_BATTLE_CAMP_NUM , /* 阵营数量 */
};

enum { /* 数组或字符串最大长度定义 */
	PROTO_MAX_BATTLE_WHEEL_NUM = 10, /* 一场战斗车轮战的最大数量 */
	PROTO_MAX_BATTLE_ROUND_NUM = 2, /* 一车轮战斗轮数 */
	PROTO_MAX_BATTLE_TURN_NUM = 4, /* 一轮的攻击回合数量 */
	PROTO_MAX_BATTLE_TOTAL_ROUND_NUM = PROTO_MAX_BATTLE_WHEEL_NUM*PROTO_MAX_BATTLE_ROUND_NUM, /* 一场战斗总的攻击轮数 */
	PROTO_MAX_BATTLE_TOTAL_TURN_NUM = PROTO_MAX_BATTLE_WHEEL_NUM*PROTO_MAX_BATTLE_ROUND_NUM*PROTO_MAX_BATTLE_TURN_NUM, /* 一场战斗总的攻击回合数 */
	PROTO_MAX_BATTLE_CAMP_GENERAL_NUM = 5, /* 每个阵营武将数量 */
	PROTO_MAX_BATTLE_FIGHT_GENERAL_NUM = PROTO_MAX_BATTLE_CAMP_GENERAL_NUM*PROTO_BATTLE_CAMP_NUM, /* 同时参与战斗武将数量 */
	PROTO_MAX_BATTLE_GENERAL_IMPACT_NUM = 2, /* 战斗中每个武将可触发效果数量 */
};

enum { /* 战斗序列数组长度定义 */
	PROTO_MAX_BATTLE_TOTAL_FIGHT_INFO = PROTO_MAX_BATTLE_WHEEL_NUM, /* 整场战斗所有车轮信息数量 */
	PROTO_MAX_BATTLE_TOTAL_ROUND_INFO = PROTO_MAX_BATTLE_TOTAL_ROUND_NUM, /* 整场战斗所有的轮信息数量 */
	PROTO_MAX_BATTLE_TOTAL_TURN_INFO = PROTO_MAX_BATTLE_TOTAL_TURN_NUM, /* 整场战斗所有的回合信息数量 */
	PROTO_MAX_BATTLE_TOTAL_GENERAL_NUM = PROTO_MAX_BATTLE_FIGHT_GENERAL_NUM+PROTO_MAX_BATTLE_TOTAL_TURN_NUM*PROTO_MAX_BATTLE_CAMP_GENERAL_NUM, /* 一场战斗可能出现的武将数量 */
	PROTO_MAX_BATTLE_TOTAL_SKILL_NUM = PROTO_MAX_BATTLE_TOTAL_TURN_NUM*PROTO_MAX_BATTLE_FIGHT_GENERAL_NUM+PROTO_MAX_BATTLE_TOTAL_TURN_NUM, /* 一场战斗总的攻击次数 */
	PROTO_MAX_BATTLE_TOTAL_ATTACK_ORDER = PROTO_MAX_BATTLE_TOTAL_SKILL_NUM, /* 一场战斗总的攻击顺序改变次数 */
	PROTO_MAX_BATTLE_TOTAL_JOINTATTACK_INFO = PROTO_MAX_BATTLE_WHEEL_NUM, /* 整场战斗所有合击信息数量 */
	PROTO_MAX_BATTLE_SEQUENCE = PROTO_MAX_BATTLE_TOTAL_FIGHT_INFO+PROTO_MAX_BATTLE_TOTAL_ROUND_INFO+PROTO_MAX_BATTLE_TOTAL_TURN_INFO+PROTO_MAX_BATTLE_TOTAL_SKILL_NUM+PROTO_MAX_BATTLE_TOTAL_GENERAL_NUM+PROTO_MAX_BATTLE_TOTAL_ATTACK_ORDER, /* 整场战斗所有的攻击序列数量 */
};

enum eProtoBattleFieldFlag { /* 战场标志 */
	PROTO_BATTLEFIELD_SKIP = 0, /* 能否跳过 */
	PROTO_BATTLEFIELD_RAID , /* 偷袭 */
	PROTO_BATTLEFIELD_WHEEL , /* 是否播放车轮战动画 */
	PROTO_BATTLEFIELD_FLAG_NUM , /* 最大值 */
};

enum eProtoBattleAttackState { /* 攻击者攻击状态定义 */
	PROTO_BATTLE_ATTACK_STATE_SPEC_COMBO = 0, /* 连击 */
	PROTO_BATTLE_ATTACK_STATE_SPEC_CRITICAL , /* 暴击 */
	PROTO_BATTLE_ATTACK_STATE_SPEC_SPIRIT , /* 神击 */
	PROTO_BATTLE_ATTACK_STATE_DEAD , /* 是否死亡 */
	PROTO_BATTLE_ATTACK_STATE_CHAOS , /* 混乱 */
	PROTO_BATTLE_ATTACK_STATE_ASSIST , /* 是否是援护攻击 */
	PROTO_BATTLE_ATTACK_STATE_NUM , /* 最大值 */
};

enum eProtoBattleDefendState { /* 被攻击者防御状态定义 */
	PROTO_BATTLE_DEFEND_STATE_DODGE = 0, /* 闪避 */
	PROTO_BATTLE_DEFEND_STATE_BLOCK , /* 格挡 */
	PROTO_BATTLE_DEFEND_STATE_COUNTER , /* 反击 */
	PROTO_BATTLE_DEFEND_STATE_DEAD , /* 是否死亡 */
	PROTO_BATTLE_DEFEND_STATE_NUM , /* 最大值 */
};

enum eProtoBattleImpactState { /* 触发效果者效果状态定义 */
	PROTO_BATTLE_IMPACT_STATE_DEAD , /* 是否死亡 */
	PROTO_BATTLE_IMPACT_STATE_NUM , /* 最大值 */
};

enum eProtoBattleImpactOpType { /* Impact触发类型 */
	PROTO_BATTLE_IMPACT_ADD = 0, /* 添加 */
	PROTO_BATTLE_IMPACT_REMOVE , /* 移除 */
	PROTO_BATTLE_IMPACT_TRIGGER_BEFORE_ATTACK , /* 攻击前触发 */
	PROTO_BATTLE_IMPACT_TRIGGER_AFTER_ATTACK , /* 战斗后触发 */
	PROTO_BATTLE_IMPACT_MUTEX , /* Impact互斥 */
};

enum eProtoBattleFightNodeType { /* 战斗序列节点数据类型 */
	PROTO_BATTLE_FIGHT_NODE_FIGHT = 0, /* 车轮战每轮战斗信息 */
	PROTO_BATTLE_FIGHT_NODE_ADD_GENERAL , /* 武将上场 */
	PROTO_BATTLE_FIGHT_NODE_SKILL , /* 技能攻击 */
	PROTO_BATTLE_FIGHT_NODE_ROUND , /* 轮信息 */
	PROTO_BATTLE_FIGHT_NODE_TURN , /* 回合信息 */
	PROTO_BATTLE_FIGHT_NODE_ATTACK_ORDER , /* 出手次序信息 */
	PROTO_BATTLE_FIGHT_NODE_JOINT_ATTACK , /* 合击信息 */
	PROTO_BATTLE_FIGHT_NODE_NUM , /* 最大值 */
};

};


#endif

