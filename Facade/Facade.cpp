#include "ILetterProcess.h"
#include "CLetterProcessImpl.h"
#include "CLetterPolice.h"
#include "CModernPostOffice.h"

#include <iostream>

void DoItByPostOffice(void)
{
    CModernPostOffice modernPostOffice;
    modernPostOffice.SendLetter("Hello, world!", "Wuyi Road No.1, Changsha City, Hunan, China");
}

void DoItYourself(void)
{
    ILetterProcess *pLetterProcess = new CLetterProcessImpl();
    pLetterProcess->WriteContext("Hello, heaven!");
    pLetterProcess->FillEnvelope("Wuyi Road No.1, Changsha City, Hunan, China");
    pLetterProcess->LetterIntoEnvelope();
    pLetterProcess->SendLetter();
    delete pLetterProcess;
}

int main(int argc, char * argv[])
{
    DoItByPostOffice();
    
    std::cout << "------------" << std::endl << std::endl;
    
    DoItYourself();
    
    return 0;
}