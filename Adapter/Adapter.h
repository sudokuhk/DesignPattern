#ifndef _C_ADAPTER_H__
#define _C_ADAPTER_H__

/*
 * reference:http://www.cnblogs.com/jiese/p/3166396.html
 */

class Target
{
public:
    Target(void);
    virtual ~Target(void);
    
    virtual void Request(void) = 0;
};

class Adaptee
{
public:
    Adaptee(void);
    ~Adaptee(void);
    
    void SpecificRequest(void);
};

class Adapter
    : public Target
    , private Adaptee
{
public:
    Adapter(void);
    ~Adapter(void);
    
    virtual void Request(void);
};

class AdapterCombo : public Target
{
public:
    AdapterCombo(Adaptee * pAdaptee);
    virtual ~AdapterCombo(void);
    
    virtual void Request(void);
    
private:
    Adaptee * m_pAdaptee;
};

#endif