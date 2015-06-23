#include "CEmperor.h"

CEmperor * CEmperor::m_pEmperor = NULL;
pthread_mutex_t CEmperor::m_Mutex = PTHREAD_MUTEX_INITIALIZER;
CEmperor::CGarbo CEmperor::m_Garbo;

CEmperor::CEmperor(void)
{
    std::cout << "CEmperor::CEmperor(void)" << std::endl;
}

CEmperor::~CEmperor(void)
{
    std::cout << "CEmperor::~CEmperor(void)" << std::endl;
}

void CEmperor::EmperorInfo(void)
{
    std::string toshow(m_EmperorTag);
    std::cout << "CEmperor::EmperorInfo, (" << toshow << ")" << std::endl;
}

void CEmperor::SetEmperorTag(const char * tag)
{
    m_EmperorTag = tag;
}

CEmperor * CEmperor::GetInstance(void)
{
    if (m_pEmperor == NULL)
    {
        pthread_mutex_lock(&m_Mutex);
        if (m_pEmperor == NULL)
        {
            m_pEmperor = new CEmperor();
        }
        pthread_mutex_unlock(&m_Mutex);
    }
    return m_pEmperor;
}

void CEmperor::ReleaseInstance(void)
{
    if (m_pEmperor != NULL)
    {
        pthread_mutex_lock(&m_Mutex);
        if (m_pEmperor != NULL)
        {
            delete m_pEmperor;
            m_pEmperor = NULL;
        }
        pthread_mutex_unlock(&m_Mutex);
    }
}