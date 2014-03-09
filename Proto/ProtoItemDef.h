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


#ifndef __ProtoItem_Def_H__
#define __ProtoItem_Def_H__


namespace CProto {
enum ITEM_OPER_TYPE { /* 物品操作类型 */
	IOT_USE = 0, /* 使用 */
	IOT_DISCARD = 1, /* 丢弃 */
	IOT_PUTON = 2, /* 更换 */
	IOT_SIGN = 3, /* 贴符 */
	IOT_SOLID = 4, /* 强化 */
	IOT_UPGRADE = 5, /* 炼器 */
	IOT_SOLD = 6, /* 出售 */
};

enum ITEM_SOLID_TYPE { /* 物品强化类型 */
	IST_NORMAL = 0, /* 普通强化 */
	IST_AUTO = 1, /* 自动强化 */
};

enum ITEM_CONTAINER_TYPE { /* 物品操作容器类型 */
	ICT_BAG_ITEM = 0, /* 角色道具背包 */
	ICT_BAG_EQUIP = 1, /* 角色装备背包 */
	ICT_BAG_BOOK = 2, /* 角色技能书背包 */
};

enum ITEM_OPER_ERROR { /* 物品操作错误码返回 */
	IOE_ERROR = -1, /* 通用失败码 */
	IOE_NO_ERROR = 0, /* 通用成功码 */
	IOE_UPGRADE_LEVEL_UNCHANGE = 1, /* 装备升阶时成功增加炼化度但阶没有升 */
};

};


#endif

