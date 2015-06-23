#include "IStrategy.h"

#include <iostream>

IStrategy::IStrategy(void)
{
    std::cout << __FUNCTION__ << std::endl;
}

IStrategy::~IStrategy(void)
{
    std::cout << __FUNCTION__ << std::endl;
}