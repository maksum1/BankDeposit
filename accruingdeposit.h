#ifndef ACCRUINGDEPOSIT_H
#define ACCRUINGDEPOSIT_H
#include"bankdeposit.h"

class AccruingDeposit:public BankDeposit
{
public:
    AccruingDeposit(double Deposition,int Month,double CoefficientDeposit):BankDeposit(Deposition,Month,CoefficientDeposit){}
    void Capitalization(double Value,double Coefficient);
    double Payout();


};

#endif // ACCRUINGDEPOSIT_H
