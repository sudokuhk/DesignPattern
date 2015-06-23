#ifndef _C_GIVE_GREEN_LIGHT_H__
#define _C_GIVE_GREEN_LIGHT_H__

#include "IStrategy.h"

class CGivenGreenLight : public IStrategy
{
public:
    CGivenGreenLight(void);
    virtual ~CGivenGreenLight(void);
    
    virtual void Operate(void);
};

#endif