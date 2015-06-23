#ifndef _I_KIND_WOMEN_H__
#define _I_KIND_WOMEN_H__

class IKindWomen
{
public:
    IKindWomen(void);
    virtual ~IKindWomen(void);

    virtual void HappyWithMan(void) = 0;
    virtual void MakeEyesWithMan(void) = 0;
};

#endif