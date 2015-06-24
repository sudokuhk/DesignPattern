#ifndef _C_YELLOW_HUMAN_FACTORY_H__
#define _C_YELLOW_HUMAN_FACTORY_H__

#include "IHumanFactory.h"

class CYellowHumanFactory : public IHumanFactory
{
public:
    CYellowHumanFactory(void);
    
    virtual ~CYellowHumanFactory(void);
    
    virtual IHuman * createHuman(void);
};

#endif