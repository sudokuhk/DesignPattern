#ifndef _C_LETTER_PROCESS_IMPL_H__
#define _C_LETTER_PROCESS_IMPL_H__

#include "ILetterProcess.h"

class CLetterProcessImpl : public ILetterProcess
{
public:
    CLetterProcessImpl(void);
    virtual ~CLetterProcessImpl(void);
    
    virtual void WriteContext(const char * context);
    virtual void FillEnvelope(const char * address);
    virtual void LetterIntoEnvelope();
    virtual void SendLetter();
};

#endif