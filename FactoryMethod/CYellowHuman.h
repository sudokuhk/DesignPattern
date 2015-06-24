#ifndef _C_YELLOW_HUMAN_H__
#define _C_YELLOW_HUMAN_H__

#include "IHuman.h"

class CYellowHuman : public IHuman
{
public:
    CYellowHuman(void);
    virtual ~CYellowHuman(void);
    
    virtual void Laught(void);
    virtual void Cry(void);
    virtual void Talk(void);
    
    virtual void ShowSkinColor(void);
};

#endif