#ifndef _C_LETTER_POLICE_H__
#define _C_LETTER_POLICE_H__

class ILetterProcess;

class CLetterPolice
{
public:
    CLetterPolice(void);
    ~CLetterPolice(void);
    
    bool CheckLetter(ILetterProcess * pLetterProcess);
};

#endif