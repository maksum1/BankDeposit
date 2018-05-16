#include "accruingdeposit.h"

void AccruingDeposit::Capitalization(double Value, double Coefficient)
{
    this->Value=this->Value*(1+Coefficient);
}

double AccruingDeposit::Payout()
{
    for(int i =0 ;i<Time;i++)
    {
     Capitalization(Value,Coefficient);
    }
    Withdraw=Value;
}

// Місяць     1  1   2      3
// Виплата    1200   1440   1720
// Коеф 1.2
// Деп 1000
