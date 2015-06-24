#ifndef _C_MODERN_POST_OFFICE_H__
#define _C_MODERN_POST_OFFICE_H__

class ILetterProcess;
class CLetterPolice;

class CModernPostOffice
{
public:
    CModernPostOffice(void);
    ~CModernPostOffice(void);
    
    void SendLetter(const char * context, const char * address);
    
private:
    ILetterProcess * m_pLetterProcess;
    CLetterPolice * m_pLetterPolice;
};

#endif