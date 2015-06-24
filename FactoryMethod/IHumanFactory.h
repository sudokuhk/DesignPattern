#ifndef _I_HUMAN_FACTORY_H__
#define _I_HUMAN_FACTORY_H__

#include <iostream>

class IHuman;

class IHumanFactory
{
public:
    IHumanFactory(void)
    {
        std::cout << "IHumanFactory::IHumanFactory(void)" << std::endl;
    }
    
    virtual ~IHumanFactory(void)
    {
        std::cout << "IHumanFactory::~IHumanFactory(void)" << std::endl;
    }
    
    virtual IHuman * createHuman(void) = 0;
};

#endif