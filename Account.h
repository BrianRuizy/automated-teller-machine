#ifndef ACCOUNT_H
#define ACOUNT_H
#include <string>
using namespace std;

class Account
{
private:
	string firstName;
	string lastName;
	int accNumber;
	
public:
	void setAccountName(string firstname);
	void setAccountName(string lastname);

	void setAccountNumber(int accno);
	
	
};
#endif
