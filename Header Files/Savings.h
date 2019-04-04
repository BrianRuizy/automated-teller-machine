#pragma once
#include "Account.h"

class Savings : public Account
{
	double balancee;

public:
	void setSavingsBalance(double Balance);
	double getSavingsBalance() const;
};





