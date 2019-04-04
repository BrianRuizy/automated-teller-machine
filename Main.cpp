#include <iostream>
#include <string>
#include "Account.h"
#include "Checkings.h"
#include "Savings.h"

using namespace std; 


int mainMenu() {

	int choice = 0;

	cout << "\n-----------------------------" << endl;
	cout << "|What would you like to do?:|" << endl;
	cout << "-----------------------------" << endl;
	cout << "| 1. Deposit                 |" << endl;
	cout << "| 2. Withdraw                |" << endl;
	cout << "| 3. Check Balance           |" << endl;
	cout << "| 4. Account Transfer        |" << endl;
	cout << "| 5. [Exit]                  |" << endl;
	cout << "-----------------------------" << endl;

	cin >> choice;
	return choice; 
}


int main() 
{

	cout << "---------------------------" << endl;
	cout << "|   welcome 'name.'       |" << endl;
	cout << "---------------------------" << endl;

	//If creating more than 1 bank accounts, 
	//in this program we will only run with one account.
    /* Array on objects  
    int size = 10;
    string accNumber[10]; 
    Checkings Arr[size];
    Savings Arrr[size]; */

    //class objects instantiation
    Checkings checkObj; 
    Savings savObj; 

	bool isNotFinished = true;

	do {

		switch (mainMenu()) {

			case 1:
				break;

			case 2:
				break;

			case 3:
				break;

			case 4:
				break;

			case 5:
				cout << "Thank you for Choosing Chase Fargo of America." << endl;
				break;

			default:
				cout << "Invalid choice!" << endl;
				break;
		}

	} while (isNotFinished);


	system("pause");
	return 0;

}
