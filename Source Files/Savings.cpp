#include "Savings.h"
#include "iostream"


void Savings::setSavingsBalance(double deposit)
{
	s_balance = s_balance + deposit;
}


double Savings::getSavingsBalance() const
{
	return s_balance;
}

void Savings::setWithdraw()
{
	int wdraw = 0;
	cout << "Enter withdrawal amount: ";
	cin >> wdraw;

	if (s_balance >= wdraw) {
		s_balance = s_balance - wdraw;
		cout << "Your updated Checkings balance is: " << s_balance << endl;
	}
	else {
		cout << "Not able to withdraw $" << wdraw << " from account." << endl;
		cout << "Not enough funds..." << endl;
	}
}

void Savings::setDeposit()
{
	int dep = 0;
	cout << "Enter deposit amount: ";
	cin >> dep;
	s_balance = s_balance + dep;
	cout << "Your updated Savings balance is: " << getSavingsBalance() << endl;
}
