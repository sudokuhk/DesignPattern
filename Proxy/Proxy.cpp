#include "CWangPo.h"
#include "CPanJinLian.h"
#include "CJiaShi.h"

#include <iostream>

#define SAFE_DEFINE_PTR(type, name)	\
    type * name = NULL

#define SAFE_DELETE(ptr)        \
    do {                        \
        if (ptr != NULL) {      \
            delete ptr;         \
            ptr = NULL;         \
        }                       \
    } while (0)

void DoPanJinLian(void)
{
    SAFE_DEFINE_PTR(CWangPo, pWangpo);
    
    pWangpo = new CWangPo(new CPanJinLian());
    pWangpo->MakeEyesWithMan();
    pWangpo->HappyWithMan();
    
    SAFE_DELETE(pWangpo);
}

void DoJiaShi(void)
{
    SAFE_DEFINE_PTR(CWangPo, pWangpo);
    
    pWangpo = new CWangPo(new CJiaShi());
    pWangpo->MakeEyesWithMan();
    pWangpo->HappyWithMan();
    
    SAFE_DELETE(pWangpo);
}

int main(int argc, char * argv[])
{
    DoPanJinLian();
    
    DoJiaShi();
    
    return 0;
}
