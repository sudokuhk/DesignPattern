#ifndef _C_BACKDOOR_H__
#define _C_BACKDOOR_H__

#include "IStrategy.h"

class CBackDoor : public IStrategy
{
public:
    CBackDoor(void);
    virtual ~CBackDoor(void);
    
    virtual void Operate(void);
};

#endif