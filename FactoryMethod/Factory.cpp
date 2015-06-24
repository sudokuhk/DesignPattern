#include "IHuman.h"
#include "CYellowHuman.h"
#include "CWhiteHuman.h"
#include "CBlackHuman.h"
#include "IHumanFactory.h"
#include "CYellowHumanFactory.h"
#include "CWhiteHumanFactory.h"
#include "CBlackHumanFactory.h"

#include <iostream>

void DoWhite(void)
{
    std::cout << __FUNCTION__ << ", begin." << std::endl;
    IHumanFactory * pHumanFactory = new CYellowHumanFactory();
    IHuman * pHuman = pHumanFactory->createHuman();
    
    pHuman->Cry();
    pHuman->Laught();
    pHuman->Talk();
    pHuman->ShowSkinColor();
    
    delete pHuman;
    delete pHumanFactory;
    
    std::cout << __FUNCTION__ << ", end." << std::endl;
}

int main(int argc, char * argv[])
{
    DoWhite();
    
    return 0;
}