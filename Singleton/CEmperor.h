#ifndef _C_EMPEROR_H__
#define _C_EMPEROR_H__

#include <pthread.h>

#include <iostream>
#include <string>

class CEmperor
{
public:
    static CEmperor * GetInstance(void);
    static void ReleaseInstance(void);
    
    void EmperorInfo(void);
    void SetEmperorTag(const char * tag);
    
private:
    CEmperor(void);
    CEmperor(const CEmperor &);
    CEmperor & operator=(const CEmperor &);
    ~CEmperor(void);
    
    static CEmperor * m_pEmperor;
    static pthread_mutex_t m_Mutex;
    
    std::string m_EmperorTag;
    
    class CGarbo
    {
    public:
        CGarbo(void)
        {
            std::cout << "CEmperor::CGarbo::CGarbo()" << std::endl;
        }
        
        ~CGarbo(void)
        {
            std::cout << "CEmperor::CGarbo::~CGarbo()" << std::endl;
            if (m_pEmperor != NULL)
            {
                pthread_mutex_lock(&m_Mutex);
                std::cout << "CEmperor::CGarbo::~CGarbo(step delete)" << std::endl;
                if (m_pEmperor != NULL)
                {
                    delete m_pEmperor;
                    m_pEmperor = NULL;
                }
                pthread_mutex_unlock(&m_Mutex);
            }
        }
    };
    
    static CGarbo m_Garbo;
};

#endif