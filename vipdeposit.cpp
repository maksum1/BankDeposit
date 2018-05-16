#include "vipdeposit.h"
#include"qdebug.h"

void VIPDeposit::Refill(double AddValue, int Day, int Month,double Part)
{
    Refil=true;
    for(int i =0 ;i<Month+1;i++)
    {
        Capitalization(this->Value,this->Coefficient);

    }

    this->Value= this->Value+AddValue;


    Increment(AddValue,Part);

    for(int i=Month+1  ; i <this->Time;i++)
    {
        Capitalization(this->Value,this->Coefficient);
    }


}

void VIPDeposit::Increment(double NewValue, double Particle)
{
    Coefficient+=(NewValue/Particle)/100;
}

double VIPDeposit::Payout(double check)
{
    if(this->Refil==false)
    {
        for(int i =0 ;i<Time;i++)
        {
            Value=Value*(1+Coefficient);
        }
       return Value;
    }
    else
    {
        return this->Value;
    }
}


//Місяць           1
//Деп              1000
//Коеф             1.2
//Кожні 100грн     10
//Новий коеф       2.2
