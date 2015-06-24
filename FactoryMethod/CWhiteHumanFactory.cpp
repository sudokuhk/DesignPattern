#include "CWhiteHumanFactory.h"

#include "CWhiteHuman.h"
#include <iostream>

#define TAG "CWhiteHumanFactory::"


CWhiteHumanFactory::CWhiteHumanFactory(void)
{
    std::cout << TAG << __FUNCTION__ << std::endl;
}

CWhiteHumanFactory::~CWhiteHumanFactory(void)
{
    std::cout << TAG << __FUNCTION__ << std::endl;
}

IHuman * CWhiteHumanFactory::createHuman(void)
{
    std::cout << TAG << __FUNCTION__ << std::endl;
    return new CWhiteHuman();
}