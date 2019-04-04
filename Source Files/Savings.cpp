#include "Savings.h"



void Savings::setSavingsBalance(double depositt)
{
	balancee = balancee + depositt;
}


double Savings::getSavingsBalance() const
{
	return balancee;
}
