#include "CModernPostOffice.h"

#include "ILetterProcess.h"
#include "CLetterProcessImpl.h"
#include "CLetterPolice.h"

#include <iostream>

#define TAG "CModernPostOffice::"

CModernPostOffice::CModernPostOffice(void)
    : m_pLetterProcess(new CLetterProcessImpl())
    , m_pLetterPolice(new CLetterPolice())
{
    std::cout << TAG << __FUNCTION__ << std::endl;
}

CModernPostOffice::~CModernPostOffice(void)
{
    std::cout << TAG << __FUNCTION__ << std::endl;
    
    delete m_pLetterProcess;
    delete m_pLetterPolice;
    
    m_pLetterProcess = NULL;
    m_pLetterPolice  = NULL;
}

void CModernPostOffice::SendLetter(const char * context, const char * address)
{
    std::cout << TAG << __FUNCTION__ << std::endl;
    std::cout << TAG << "Letter, address(" << address
        << "), context(" << context << ")" << std::endl;
    
    m_pLetterProcess->WriteContext(context);
    m_pLetterProcess->FillEnvelope(address);
    
    bool check = m_pLetterPolice->CheckLetter(m_pLetterProcess);
    
    if (check) {
        m_pLetterProcess->LetterIntoEnvelope();
        m_pLetterProcess->SendLetter();
    }
}