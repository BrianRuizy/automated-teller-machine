#pragma once
#include "Account.h"

class Savings : public Account  //inheritence from base class 'account'
{
private:
	double s_balance = 0;

public:
	void setSavingsBalance(double Balance);
	double getSavingsBalance() const;
	void setWithdraw();
	void setDeposit();
	double getTransfer();

};
