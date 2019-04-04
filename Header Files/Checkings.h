#pragma once
#include "Account.h"

class Checkings : public Account //inheritence from base class 'account'
{
	private:
		double balance;
	public:
		void setBalance(double depositt);
		double getBalance() const;
};

