#include "CLetterProcessImpl.h"

#include <iostream>

#define TAG "CLetterProcessImpl::"

CLetterProcessImpl::CLetterProcessImpl(void)
{
    std::cout << TAG << __FUNCTION__ << std::endl;
}

CLetterProcessImpl::~CLetterProcessImpl(void)
{
    std::cout << TAG << __FUNCTION__ << std::endl;
}

void CLetterProcessImpl::WriteContext(const char * context)
{
    std::cout << TAG << __FUNCTION__ << std::endl;
    std::cout << TAG << "context:" << context << std::endl;
}

void CLetterProcessImpl::FillEnvelope(const char * address)
{
    std::cout << TAG << __FUNCTION__ << std::endl;
    std::cout << TAG << "address:" << address << std::endl;
}

void CLetterProcessImpl::LetterIntoEnvelope()
{
    std::cout << TAG << __FUNCTION__ << std::endl;
}

void CLetterProcessImpl::SendLetter()
{
    std::cout << TAG << __FUNCTION__ << std::endl;
}