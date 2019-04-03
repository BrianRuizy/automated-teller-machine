#include <iostream>
#include <string>
#include "Account.h"
#include "Checkings.h"
#include "Savings.h"

using namespace std; 

int main() 
{
    /* Array on objects 
    int size = 10;

    string accNumber[10]; 
    Checkings Arr[size];
    Savings Arrr[size]; */

    //class objects instantiation
    Checkings checkObj; 
    Savings savObj; 

    cout << "----------------------" << endl;
    cout << "welcome 'first_name.'" << endl;
    cout << "----------------------" << endl;

    int choice; 

    cout << "What would you like to do?: " << endl;
    cout << "1. Deposit" << endl; 
    cout << "2. Withdraw" << endl;
    cout << "3. Check Balance" << endl; 
    cout << "4. Account Transfer" << endl;

    cin >> choice;

    switch (choice){

    case 1:
    
        break; 

    case 2: 

        break;

    case 3:

        break;	
      
    case 4: 

        break;

    }

	return 0;

}
