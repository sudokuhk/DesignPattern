#include "CBlackHumanFactory.h"

#include "CBlackHuman.h"
#include <iostream>

#define TAG "CBlackHumanFactory::"


CBlackHumanFactory::CBlackHumanFactory(void)
{
    std::cout << TAG << __FUNCTION__ << std::endl;
}

CBlackHumanFactory::~CBlackHumanFactory(void)
{
    std::cout << TAG << __FUNCTION__ << std::endl;
}
    
IHuman * CBlackHumanFactory::createHuman(void)
{
    std::cout << TAG << __FUNCTION__ << std::endl;
    return new CBlackHuman();
}