#ifndef _C_CONTEXT_H__
#define _C_CONTEXT_H__

#include <iostream>

#define SAFE_DELETE_PTR(ptr)        \
    do {                            \
        if (ptr != NULL) {          \
            delete ptr;             \
            ptr = NULL;             \
        }                           \
    } while (0)

class IStrategy;

class CContext
{
public:
    CContext(IStrategy * pStrategy);
    ~CContext(void);
    
    void Operate(void);
    
private:
    IStrategy * pStrategy;
};

#endif