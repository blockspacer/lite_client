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


#ifndef __ProtoDefine_Def_H__
#define __ProtoDefine_Def_H__


namespace CProto {
enum eQhtmlWordLibCmd { /* QHtml词条库词条命令 */
	WordLib_NULL = 0, /*  */
	WordLib_Player = 1, /* 玩家 */
	WordLib_Item = 2, /* 道具 */
	WordLib_Equip = 3, /* 装备 */
	WordLib_StoreItem = 6, /* 商城物品 */
	WordLib_Activity = 10, /* 活动 */
	WordLib_RecycleAsync = 13, /* 参数回传（异步） */
	WordLib_RecycleSync = 30, /* 参数回传（同步） */
	WordLib_ActivityCmd = 26, /* 活动指令 */
};

};


#endif

