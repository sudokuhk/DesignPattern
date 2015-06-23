#ifndef _C_BLOCKENEMY_H__
#define _C_BLOCKENEMY_H__

#include "IStrategy.h"

class CBlockEnemy : public IStrategy
{
public:
    CBlockEnemy(void);
    virtual ~CBlockEnemy(void);
    
    virtual void Operate(void);
};

#endif