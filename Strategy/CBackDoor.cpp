#include "CBackDoor.h"

#include <iostream>

CBackDoor::CBackDoor(void)
{
    std::cout << __FUNCTION__ << std::endl;
}

CBackDoor::~CBackDoor(void)
{
    std::cout << __FUNCTION__ << std::endl;
}

void CBackDoor::Operate(void)
{
    std::cout << __FUNCTION__ << std::endl;
}