// Gets account information
#include "Account.h"
#include <string>
#include <iostream>

using namespace std; ;

void  Account::setAccountName(string firstname, string lastname)
{
	firstName = firstname;
	lastName = lastname;
}

string Account::getAccountName()
{
	accountName = firstName + " " + lastName;
	return(accountName);
}

void Account::setAccountNumber(int accno)
{
	accNumber = accno;
}

bool Account::login() //loging verification with predefined credentials
{
	int givenAccountNumber = -1;
	int givenPinNumber = -1;
	bool isAccountInvalid = true;
	bool isPinInvalid = true;

	cout << "-----------------------------" << endl;
	cout << "|          Welcome!         |" << endl;
	cout << "-----------------------------" << endl;

	while (isAccountInvalid) {

		cout << "Please enter your account number: ";
		cin >> givenAccountNumber;

		if (givenAccountNumber == accountNumber) {
			isAccountInvalid = false;
		}
		else {
			cout << "Invalid account number! Try again." << endl;
		}
	}

	while (isPinInvalid) {

		cout << "\nEnter your PIN: ";
		cin >> givenPinNumber;

		if (givenPinNumber == pinNumber) {
			isPinInvalid = false;
		}
		else {
			cout << "Invalid PIN number! Try again." << endl;
		}
	}

	return true;

}
