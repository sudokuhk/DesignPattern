#include <iostream>

#include "CContext.h"
#include "CBackDoor.h"
#include "CBlockEnemy.h"
#include "CGivenGreenLight.h"

int main(int argc, char * argv[])
{
    CContext * pContext = NULL;
    
    pContext = new CContext(new CBackDoor());
    pContext->Operate();
    SAFE_DELETE_PTR(pContext);
    
    pContext = new CContext(new CBlockEnemy());
    pContext->Operate();
    SAFE_DELETE_PTR(pContext);
    
    pContext = new CContext(new CGivenGreenLight());
    pContext->Operate();
    SAFE_DELETE_PTR(pContext);
    
    return 0;
}
