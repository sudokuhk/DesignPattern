#ifndef _I_LETTER_PROCESS_H__
#define _I_LETTER_PROCESS_H__

class ILetterProcess
{
public:
    ILetterProcess(void);
    virtual ~ILetterProcess(void);
    
    virtual void WriteContext(const char * context) = 0;
    virtual void FillEnvelope(const char * address) = 0;
    virtual void LetterIntoEnvelope() = 0;
    virtual void SendLetter() = 0;
};

#endif