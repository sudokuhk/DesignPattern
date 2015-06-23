#ifndef _I_STRATEGY_H__
#define _I_STRATEGY_H__

class IStrategy
{
public:
    IStrategy(void);
    virtual ~IStrategy(void);
    
    virtual void Operate(void) = 0;
};

#endif