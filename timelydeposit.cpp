#include "timelydeposit.h"


double TimelyDeposit::Payout()
{
   return Withdraw = Value*(1+Coefficient*Time);
}

