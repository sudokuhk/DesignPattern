#ifndef _C_WHITE_HUMAN_FACTORY_H__
#define _C_WHITE_HUMAN_FACTORY_H__

#include "IHumanFactory.h"

class CWhiteHumanFactory : public IHumanFactory
{
public:
    CWhiteHumanFactory(void);
    
    virtual ~CWhiteHumanFactory(void);
    
    virtual IHuman * createHuman(void);
};

#endif