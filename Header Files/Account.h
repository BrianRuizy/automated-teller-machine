#pragma once
#include <string>
using namespace std;

class Account
{
	private:
		string firstName, lastName;
		int accNumber;

	public:
		void setAccountName(string firstname, string lastname);
		void setAccountNumber(int accno);
	
	
};

