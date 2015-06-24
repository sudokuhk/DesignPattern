#include "Adapter.h"

int main(int argc, char * argv[])
{
    Target * pTarget = new Adapter();
    pTarget->Request();
    delete pTarget;
    
    Adaptee * pAdaptee = new Adaptee();
    pTarget = new AdapterCombo(pAdaptee);
    pTarget->Request();
    delete pTarget;
    
    return 0;
}