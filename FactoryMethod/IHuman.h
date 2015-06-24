#ifndef _I_HUMAN_H__
#define _I_HUMAN_H__

#include <iostream>

class IHuman
{
public:
    IHuman(void)
    {
        std::cout << "IHuman::IHuman(void)" << std::endl;
    }
    
    virtual ~IHuman(void)
    {
        std::cout << "IHuman::~IHuman(void)" << std::endl;
    }
    
    virtual void Laught(void)   = 0;
    virtual void Cry(void)      = 0;
    virtual void Talk(void)     = 0;
    
    virtual void ShowSkinColor(void) = 0;
};

#endif