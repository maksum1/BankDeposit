#ifndef TIMELYDEPOSIT_H
#define TIMELYDEPOSIT_H
#include"bankdeposit.h"

class TimelyDeposit:public BankDeposit
{
public:
    TimelyDeposit(double Deposition,int Month,double CoefficientDeposit):BankDeposit(Deposition,Month,CoefficientDeposit){}
    double Payout();

};

#endif // TIMELYDEPOSIT_H
