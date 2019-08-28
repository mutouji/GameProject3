﻿#ifndef __GLOBAL_DATA_MGR_H__
#define __GLOBAL_DATA_MGR_H__
#include "DBInterface/CppMysql.h"

struct GlobalDataObject;
class CGlobalDataManager
{
	CGlobalDataManager();
	~CGlobalDataManager();
public:
	static CGlobalDataManager* GetInstancePtr();

	BOOL LoadGlobalData(CppMySQL3DB& tDBConnection);

	UINT64 MakeNewGuid();

	UINT32 GetMaxOnline();

public:
	GlobalDataObject*  m_pGlobalDataObject;
};
#endif //__GLOBAL_DATA_MGR_H__