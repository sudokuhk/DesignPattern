#include "CLetterPolice.h"

#include "ILetterProcess.h"
#include <iostream>

#define TAG "CLetterPolice::"

CLetterPolice::CLetterPolice(void)
{
    std::cout << TAG << __FUNCTION__ << std::endl;
}

CLetterPolice::~CLetterPolice(void)
{
    std::cout << TAG << __FUNCTION__ << std::endl;
}

bool CLetterPolice::CheckLetter(ILetterProcess * pLetterProcess)
{
    std::cout << TAG << __FUNCTION__ << std::endl;
    return true;
}