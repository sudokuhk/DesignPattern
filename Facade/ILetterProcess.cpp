#include "ILetterProcess.h"

#include <iostream>

#define TAG "ILetterProcess::"

ILetterProcess::ILetterProcess(void)
{
    std::cout << TAG << __FUNCTION__ << std::endl;
}

ILetterProcess::~ILetterProcess(void)
{
    std::cout << TAG << __FUNCTION__ << std::endl;
}
