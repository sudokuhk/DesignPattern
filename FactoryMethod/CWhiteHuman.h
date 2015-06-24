#ifndef _C_WHITE_HUMAN_H__
#define _C_WHITE_HUMAN_H__

#include "IHuman.h"

class CWhiteHuman : public IHuman
{
public:
    CWhiteHuman(void);
    virtual ~CWhiteHuman(void);
    
    virtual void Laught(void);
    virtual void Cry(void);
    virtual void Talk(void);
    
    virtual void ShowSkinColor(void);
};

#endif