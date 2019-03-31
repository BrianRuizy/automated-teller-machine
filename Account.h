#pragma once

#include <iostream>
#include <string>
using namespace std;

class Account
{
private:
	string firstName;
	string lastName;
	int accNumber;
	double balance; 

public:
	Account();
	~Account();

	void getBalance(double bal);
	void setBalance(double bal);

	void deposit(double depAmount);
	void widthdraw(double widAmount);
};

