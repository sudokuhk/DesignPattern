#ifndef _C_BLACK_HUMAN_H__
#define _C_BLACK_HUMAN_H__

#include "IHuman.h"

class CBlackHuman : public IHuman
{
public:
    CBlackHuman(void);
    virtual ~CBlackHuman(void);
    
    virtual void Laught(void);
    virtual void Cry(void);
    virtual void Talk(void);
    
    virtual void ShowSkinColor(void);
};

#endif