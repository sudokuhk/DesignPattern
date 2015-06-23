#include "CWangPo.h"

CWangPo::CWangPo(IKindWomen * pKindWomen)
{
    this->pKindWomen = pKindWomen;
}

CWangPo::~CWangPo(void)
{
    delete this->pKindWomen;
}

void CWangPo::HappyWithMan(void)
{
    this->pKindWomen->HappyWithMan();
}

void CWangPo::MakeEyesWithMan(void)
{
    this->pKindWomen->MakeEyesWithMan();
}