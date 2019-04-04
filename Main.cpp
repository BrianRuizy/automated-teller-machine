/* 
TEAM MEMBERS: 

Brian Ruiz 
Kaeleb Tekan
Sebastian Maya
*/


#include <iostream>
#include <string>
#include "Account.h"
#include "Checkings.h"
#include "Savings.h"
using namespace std; 
 
// ---function prototypes ---

int mainMenu() { //function for main menu interface

	int choice = 0;

	cout << "\n-----------------------------" << endl;
	cout << "|What would you like to do? |" << endl;
	cout << "-----------------------------" << endl;
	cout << "| 1. Deposit                |" << endl;
	cout << "| 2. Withdraw               |" << endl;
	cout << "| 3. Check Balance          |" << endl;
	cout << "| 4. Account Transfer       |" << endl;
	cout << "| 5. [Exit]                 |" << endl;
	cout << "-----------------------------" << endl;

	cin >> choice;
	return choice; 
}


int main() 
{
	//class-objects instantiation
	Account accObj;
	Checkings checkObj;
	Savings savObj;
	
	//accObj.login(); //call for login page

	accObj.setAccountName("Moiz", "Ahmed"); // Or whatever predefined name
	string fullName = accObj.getAccountName();

	cout << "-----------------------------" << endl;
	cout << "|    Welcome, " << fullName << "    |" << endl;
	cout << "-----------------------------" << endl;

	// if going to create x>1 number of bank accounts,
	// implement using an array of objects
 
	bool isNotFinished = true; //used to break do-while loop
	int accountChoice = -1; 

	//loop through menu until user hits exit
	do { 
		switch (mainMenu()) {

			case 1:
				cout << "-------------------------------------------------" << endl;
				cout << "| Which account would you like to deposit into? |" << endl;
				cout << "-------------------------------------------------" << endl;
				cout << "| 1. Checking                                   |" << endl;
				cout << "| 2. Savings                                    |" << endl;
				cout << "-------------------------------------------------" << endl;

				cin >> accountChoice; 
				switch (accountChoice) { //nested switch case to chose account type
					case 1:
						checkObj.setDeposit(); 
						break;
					case 2:
						savObj.setDeposit();
						break;
					default:
						cout << "Invalid choice!" << endl;
						break;
				}

				// call deposit function
				break;

			case 2:
				cout << "-------------------------------------------------" << endl;
				cout << "|       Which account to widthdrwaw from?       |" << endl;
				cout << "-------------------------------------------------" << endl;
				cout << "| 1. Checking                                   |" << endl;
				cout << "| 2. Savings                                    |" << endl;
				cout << "-------------------------------------------------" << endl;

				cin >> accountChoice;
				switch (accountChoice) { //nested switch case to chose account type
				case 1:
					checkObj.setWithdraw();
					break;
				case 2:
					savObj.setWithdraw();
					break;
				default:
					cout << "Invalid choice!" << endl;
					break;
				}
				// call widthdraw

			case 3:
				break;
				// call to check balance

			case 4:
				break;
				// call for transfer

			case 5:
				cout << "Thank you for Choosing Chase Fargo of America." << endl;
				isNotFinished = false;
				break;

			default:
				cout << "Invalid choice!" << endl;
				break;
		}

	} while (isNotFinished);


	system("pause");
	return 0;

}
