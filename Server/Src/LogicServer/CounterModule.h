﻿#ifndef __COUNTER_MODULE_H__
#define __COUNTER_MODULE_H__
#include "ModuleBase.h"
#include "../ServerData/CounterData.h"
struct CounterDataObject;
class CCounterModule  : public CModuleBase
{
public:
	CCounterModule(CPlayerObject* pOwner);

	~CCounterModule();

public:
	BOOL OnCreate(UINT64 u64RoleID);

	BOOL OnDestroy();

	BOOL OnLogin();

	BOOL OnLogout();

	BOOL OnNewDay();

	BOOL DispatchPacket(NetPacket* pNetPack);

	BOOL ReadFromDBLoginData(DBRoleLoginAck& Ack);

	BOOL SaveToClientLoginData(RoleLoginAck& Ack);

	BOOL NotifyChange();

	CounterDataObject* GetCounterData(UINT32 uID, UINT32 dwIndex);

	UINT64 GetCounterValue(UINT32 uID, UINT32 dwIndex = 0);

	BOOL   SetCounterValue(UINT32 uID, INT64 uValue, UINT32 dwIndex = 0);

	BOOL   AddCounterValue(UINT32 uID, INT64 uValue, UINT32 dwIndex = 0);

public:
	//*********************消息处理定义开始******************************

	//*********************消息处理定义结束******************************

public:
	std::map<UINT64, CounterDataObject*> m_mapCounterData;

};

#endif //__COUNTER_MODULE_H__
