#ifndef BANKDEPOSIT_H
#define BANKDEPOSIT_H

class BankDeposit
{
public:
   BankDeposit(double Deposition,int Month,double CoefficientDeposit)
    {
     Time=Month;
     Value=Deposition;
     Coefficient=CoefficientDeposit;
    }

    virtual double Payout() = 0;
   // virtual double Deposit() = 0;

protected:
    int Time;
    double Value;
    double Withdraw;
    double Coefficient;

};

#endif // BANKDEPOSIT_H
