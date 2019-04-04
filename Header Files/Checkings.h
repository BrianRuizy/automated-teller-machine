#ifndef CHECKINGS_H
#define CHECKINGS_H
#include "Account.h"



class Checkings : public Account //inheritence from base clas 'account'
{
private:
	double balance;
public:
	void setBalance(double depositt);
	double getBalance() const;
};
#endif

