﻿#include "stdafx.h"
#include "DBWriterManager.h"

CDBWriterManager::CDBWriterManager()
{
    m_Stop = FALSE;
}

CDBWriterManager::~CDBWriterManager()
{

}

BOOL CDBWriterManager::Init()
{
    m_vtDataWriters.assign(ESD_END, NULL);
    m_vtDataWriters[ESD_ROLE]           = new DataWriter<RoleDataObject>(ESD_ROLE, 1024);
    m_vtDataWriters[ESD_GLOBAL]         = new DataWriter<GlobalDataObject>(ESD_GLOBAL, 1024);
    m_vtDataWriters[ESD_BAG]            = new DataWriter<BagDataObject>(ESD_BAG, 1024);
    m_vtDataWriters[ESD_COPY]           = new DataWriter<CopyDataObject>(ESD_COPY, 1024);
    m_vtDataWriters[ESD_CHAPTER]        = new DataWriter<ChapterDataObject>(ESD_CHAPTER, 1024);
    m_vtDataWriters[ESD_EQUIP]          = new DataWriter<EquipDataObject>(ESD_EQUIP, 1024);
    m_vtDataWriters[ESD_GEM]            = new DataWriter<GemDataObject>(ESD_GEM, 1024);
    m_vtDataWriters[ESD_PET]            = new DataWriter<PetDataObject>(ESD_PET, 1024);
    m_vtDataWriters[ESD_PARTNER]        = new DataWriter<PartnerDataObject>(ESD_PARTNER, 1024);
    m_vtDataWriters[ESD_GUILD]          = new DataWriter<GuildDataObject>(ESD_GUILD, 1024);
    m_vtDataWriters[ESD_GUILD_MEMBER]   = new DataWriter<MemberDataObject>(ESD_GUILD_MEMBER, 1024);
    m_vtDataWriters[ESD_TASK]           = new DataWriter<TaskDataObject>(ESD_TASK, 1024);
    m_vtDataWriters[ESD_MOUNT]          = new DataWriter<MountDataObject>(ESD_MOUNT, 1024);
    m_vtDataWriters[ESD_MAIL]           = new DataWriter<MailDataObject>(ESD_MAIL, 1024);
    m_vtDataWriters[ESD_GROUP_MAIL]     = new DataWriter<GroupMailDataObject>(ESD_GROUP_MAIL, 1024);
    m_vtDataWriters[ESD_ACTIVITY]       = new DataWriter<ActivityDataObject>(ESD_ACTIVITY, 1024);
    m_vtDataWriters[ESD_COUNTER]        = new DataWriter<CounterDataObject>(ESD_COUNTER, 1024);
    m_vtDataWriters[ESD_FRIEND]         = new DataWriter<FriendDataObject>(ESD_FRIEND, 1024);
    m_vtDataWriters[ESD_SKILL]          = new DataWriter<SkillDataObject>(ESD_SKILL, 1024);


    for (int i = ESD_ROLE; i < ESD_END; i++)
    {
        ERROR_RETURN_FALSE(m_vtDataWriters[i] != NULL);
    }
    std::string strHost = CConfigFile::GetInstancePtr()->GetStringValue("mysql_game_svr_ip");
    UINT32 nPort = CConfigFile::GetInstancePtr()->GetIntValue("mysql_game_svr_port");
    std::string strUser = CConfigFile::GetInstancePtr()->GetStringValue("mysql_game_svr_user");
    std::string strPwd = CConfigFile::GetInstancePtr()->GetStringValue("mysql_game_svr_pwd");
    std::string strDb = CConfigFile::GetInstancePtr()->GetStringValue("mysql_game_svr_db_name");

    m_DBConnection.SetConnectParam(strHost.c_str(), strUser.c_str(), strPwd.c_str(), strDb.c_str(), nPort);

    m_hWorkThread = CommonThreadFunc::CreateThread(_DBWriteThread, this);

    return TRUE;
}

BOOL CDBWriterManager::Uninit()
{
    m_Stop = TRUE;

    CommonThreadFunc::WaitThreadExit(m_hWorkThread);

    return TRUE;
}

BOOL CDBWriterManager::WriteDataToDB()
{
    for (int i = ESD_ROLE; i < ESD_END; i++)
    {
        if (m_vtDataWriters[i] != NULL)
        {
            m_vtDataWriters[i]->SaveModifyToDB(&m_DBConnection);
        }
    }

    return TRUE;
}

BOOL CDBWriterManager::IsStop()
{
    return m_Stop;
}

Th_RetName _DBWriteThread(void* pParam)
{
    CDBWriterManager* pDBWriterManager = (CDBWriterManager*)pParam;

    if (!pDBWriterManager->m_DBConnection.Init())
    {
        return Th_RetValue;
    }

    if (!pDBWriterManager->m_DBConnection.Reconnect())
    {
        return Th_RetValue;
    }

    while (!pDBWriterManager->IsStop())
    {
        if (!pDBWriterManager->m_DBConnection.Ping())
        {
            pDBWriterManager->m_DBConnection.Reconnect();
        }

        pDBWriterManager->WriteDataToDB();

        CommonFunc::Sleep(60000); //休息10秒
    }

    pDBWriterManager->Uninit();
    CommonThreadFunc::ExitThread();

    return Th_RetValue;
}