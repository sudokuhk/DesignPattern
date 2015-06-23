#ifndef _C_WANGPO_H__
#define _C_WANGPO_H__

#include "IKindWomen.h"

class CWangPo : public IKindWomen
{
public:
    CWangPo(IKindWomen * pKindWomen);
    virtual ~CWangPo(void);
    
    void HappyWithMan(void);
    void MakeEyesWithMan(void);
    
private:
    IKindWomen * pKindWomen;
};

#endif