#include "CContext.h"

#include "IStrategy.h"

#include <iostream>

CContext::CContext(IStrategy * pStrategy)
{
    this->pStrategy = pStrategy;
    std::cout << __FUNCTION__ << std::endl;
}

CContext::~CContext(void)
{
    std::cout << __FUNCTION__ << std::endl;
    SAFE_DELETE_PTR(this->pStrategy);
}

void CContext::Operate(void)
{
    std::cout << __FUNCTION__ << std::endl;
    this->pStrategy->Operate();
}