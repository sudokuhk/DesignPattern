#include "CYellowHumanFactory.h"

#include "CYellowHuman.h"
#include <iostream>

#define TAG "CYellowHumanFactory::"


CYellowHumanFactory::CYellowHumanFactory(void)
{
    std::cout << TAG << __FUNCTION__ << std::endl;
}

CYellowHumanFactory::~CYellowHumanFactory(void)
{
    std::cout << TAG << __FUNCTION__ << std::endl;
}

IHuman * CYellowHumanFactory::createHuman(void)
{
    std::cout << TAG << __FUNCTION__ << std::endl;
    return new CYellowHuman();
}