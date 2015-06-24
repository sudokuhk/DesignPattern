#include "Adapter.h"

#include <iostream>

#ifdef TAG
#undef TAG
#endif
#define TAG "Target::"

Target::Target(void)
{
    std::cout << TAG << __FUNCTION__ << std::endl;
}

Target::~Target(void)
{
    std::cout << TAG << __FUNCTION__ << std::endl;
}

#ifdef TAG
#undef TAG
#endif
#define TAG "Adaptee::"

Adaptee::Adaptee(void)
{
    std::cout << TAG << __FUNCTION__ << std::endl;
}

Adaptee::~Adaptee(void)
{
    std::cout << TAG << __FUNCTION__ << std::endl;
}

void Adaptee::SpecificRequest(void)
{
    std::cout << TAG << __FUNCTION__ << std::endl;
}

#ifdef TAG
#undef TAG
#endif
#define TAG "Adapter::"

Adapter::Adapter(void) : Target(), Adaptee()
{
    std::cout << TAG << __FUNCTION__ << std::endl;
}

Adapter::~Adapter(void)
{
    std::cout << TAG << __FUNCTION__ << std::endl;
}

void Adapter::Request(void)
{
    std::cout << TAG << __FUNCTION__ << std::endl;
    this->SpecificRequest();
}

#ifdef TAG
#undef TAG
#endif
#define TAG "AdapterCombo::"

AdapterCombo::AdapterCombo(Adaptee * pAdaptee) : Target(), m_pAdaptee(pAdaptee)
{
    std::cout << TAG << __FUNCTION__ << std::endl;
}

AdapterCombo::~AdapterCombo(void)
{
    std::cout << TAG << __FUNCTION__ << std::endl;
    if (m_pAdaptee != NULL) {
        delete m_pAdaptee;
        m_pAdaptee = NULL;
    }
}

void AdapterCombo::Request(void)
{
    std::cout << TAG << __FUNCTION__ << std::endl;
    if (m_pAdaptee != NULL) {
        m_pAdaptee->SpecificRequest();
    } else {
        std::cout << "NULL Adaptee" << std::endl;
    }
}
#ifdef TAG
#undef TAG
#endif