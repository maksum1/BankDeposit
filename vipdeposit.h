#ifndef VIPDEPOSIT_H
#define VIPDEPOSIT_H
#include "accruingdeposit.h"

class VIPDeposit:public AccruingDeposit
{
public:
    VIPDeposit(double Deposition,double Month,double Coefficient):AccruingDeposit(Deposition,Month,Coefficient){}
    void Refill(double AddValue,int Day,int Month,double Part);
    void Increment(double NewValue, double Particle);
    double Payout(double check);
protected:
    double Particle;
    bool Refil=false;

};

#endif // VIPDEPOSIT_H
