#ifndef _C_PANJINLIAN_H__
#define _C_PANJINLIAN_H__

#include "IKindWomen.h"

class CPanJinLian : public IKindWomen
{
public:
    CPanJinLian(void);
    virtual ~CPanJinLian(void);
    
    void HappyWithMan(void);
    void MakeEyesWithMan(void);
};

#endif