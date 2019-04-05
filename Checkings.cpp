#include "Checkings.h"
#include <iostream>
#include "Savings.h"


void Checkings::setBalance(double deposit)
{
	c_balance = c_balance + deposit;
	cout << "Your updated checking balance: $" << c_balance << endl;
}

double Checkings::getBalance() const
{
	return c_balance;
}

// Show Balance command
double  Checkings::dislpayCheckingsBalance() const
{
	return c_balance; 
}

void Checkings::setWithdraw()
{
	int wdraw = 0;
	cout << "Enter withdrawal amount: ";
	cin >> wdraw;

	if (c_balance >= wdraw) {
		c_balance = c_balance - wdraw;
		cout << "Your updated Checkings balance is: $" << c_balance << endl;
	}
	else {
		cout << "Not able to withdraw $" << wdraw << " from account.";
		cout << "Not enough funds..." << endl;
	}
}

void Checkings::setDeposit()
{
	int dep = 0;
	cout << "Enter deposit amount: ";
	cin >> dep;
	c_balance = c_balance + dep;
	cout << "Your updated Checkings balance is: $" << getBalance() << endl;
}

double Checkings::getTransfer() //returns transfer ammount
{
	int wdraw = 0;
	cout << "Enter transfer amount: ";
	cin >> wdraw;

	if (c_balance >= wdraw) {
		c_balance = c_balance - wdraw;
		cout << "Your updated Checkings balance is: $" << c_balance << endl;
		return wdraw;
	}
	else {
		cout << "Not able to withdraw $" << wdraw << " from account.";
		cout << "Not enough funds..." << endl;
		return 0.0;
	}
}