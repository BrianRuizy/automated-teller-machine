#pragma once
#include <string>
using namespace std;

class Account
{
	private:
		string firstName, lastName;
		string accountName;
		int accNumber; //this accNumber may become redundant

		int accountNumber = 11223344; //for login
		int pinNumber = 1234;
		

	public:
		void setAccountName(string firstname, string lastname); 
		string getAccountName();
		void setAccountNumber(int accno);
		bool login();
	
};
