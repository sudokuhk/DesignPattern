#ifndef _C_BLACK_HUMAN_FACTORY_H__
#define _C_BLACK_HUMAN_FACTORY_H__

#include "IHumanFactory.h"

class CBlackHumanFactory : public IHumanFactory
{
public:
    CBlackHumanFactory(void);
    
    virtual ~CBlackHumanFactory(void);
    
    virtual IHuman * createHuman(void);
};

#endif