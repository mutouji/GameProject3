﻿#include "stdafx.h"
#include "DataPool.h"
#include "GlobalDataMgr.h"
#include "CounterModule.h"
#include "PlayerObject.h"

CCounterModule::CCounterModule(CPlayerObject* pOwner): CModuleBase(pOwner)
{

}

CCounterModule::~CCounterModule()
{

}

BOOL CCounterModule::OnCreate(UINT64 u64RoleID)
{

	return TRUE;
}


BOOL CCounterModule::OnDestroy()
{
	for(auto itor = m_mapCounterData.begin(); itor != m_mapCounterData.end(); itor++)
	{
		CounterDataObject* pObject = itor->second;

		pObject->Release();
	}

	m_mapCounterData.clear();

	return TRUE;
}

BOOL CCounterModule::OnLogin()
{
	return TRUE;
}

BOOL CCounterModule::OnLogout()
{
	return TRUE;
}

BOOL CCounterModule::OnNewDay()
{
	return TRUE;
}

BOOL CCounterModule::DispatchPacket(NetPacket* pNetPacket)
{
	return FALSE;
}

BOOL CCounterModule::ReadFromDBLoginData(DBRoleLoginAck& Ack)
{
	const DBCounterData& CounterData = Ack.counterdata();
	for(int i = 0; i < CounterData.counterlist_size(); i++)
	{
		const DBCounterItem& CounterItem = CounterData.counterlist(i);
		CounterDataObject* pObject = DataPool::CreateObject<CounterDataObject>(ESD_COUNTER, FALSE);
		pObject->m_uRoleID = CounterItem.roleid();
		pObject->m_dwIndex = CounterItem.index();
		pObject->m_uTime = CounterItem.time();
		pObject->m_uCounterID = CounterItem.counterid();
		pObject->m_uValue = CounterItem.value();
		UINT64 uKey = pObject->m_dwIndex;
		uKey = uKey << 32 | pObject->m_uCounterID;
		m_mapCounterData.insert(std::make_pair(uKey, pObject));
	}
	return TRUE;
}

BOOL CCounterModule::SaveToClientLoginData(RoleLoginAck& Ack)
{
	return TRUE;
}

BOOL CCounterModule::NotifyChange()
{
	return TRUE;
}


CounterDataObject* CCounterModule::GetCounterData(UINT32 uID, UINT32 dwIndex)
{
	UINT64 uKey = dwIndex;
	uKey = uKey << 32 | uID;
	auto itor = m_mapCounterData.find(uKey);
	if(itor == m_mapCounterData.end())
	{
		CounterDataObject* pTempObject = DataPool::CreateObject<CounterDataObject>(ESD_COUNTER, TRUE);
		pTempObject->m_uCounterID = uID;
		pTempObject->m_uRoleID = m_pOwnPlayer->GetObjectID();
		pTempObject->m_uValue = 0;
		pTempObject->m_dwIndex = dwIndex;
		m_mapCounterData.insert(std::make_pair(uKey, pTempObject));
		return pTempObject;
	}

	return itor->second;
}

UINT64 CCounterModule::GetCounterValue(UINT32 uID, UINT32 dwIndex /*= 0*/)
{
	CounterDataObject* pTempObject = GetCounterData(uID, dwIndex);
	if (pTempObject == NULL)
	{
		return 0;
	}

	return pTempObject->m_uValue;
}

BOOL CCounterModule::SetCounterValue(UINT32 uID, INT64 uValue, UINT32 dwIndex /*= 0*/)
{
	CounterDataObject* pTempObject = GetCounterData(uID, dwIndex);
	if (pTempObject == NULL)
	{
		return FALSE;
	}

	pTempObject->Lock();
	pTempObject->m_uValue = uValue;
	pTempObject->Unlock();

	return TRUE;
}

BOOL CCounterModule::AddCounterValue(UINT32 uID, INT64 uValue, UINT32 dwIndex /*= 0*/)
{
	CounterDataObject* pTempObject = GetCounterData(uID, dwIndex);
	if (pTempObject == NULL)
	{
		return FALSE;
	}

	pTempObject->Lock();
	pTempObject->m_uValue += uValue;
	pTempObject->Unlock();

	return TRUE;
}
