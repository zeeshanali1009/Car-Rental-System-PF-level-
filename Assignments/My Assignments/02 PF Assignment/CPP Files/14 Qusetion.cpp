// This program claculates the interest and then displays the remaining amount to the user
#include <iostream>
using namespace std;
int main()
{
	    int accountNumber;
    float minimumBalance, currentBalance;
    char accountType;
    
    const float SAVINGS_SERVICE_CHARGE = 10.00;
    const float CHECKING_SERVICE_CHARGE = 25.00;
    const float SAVINGS_INTEREST_RATE = 0.04;
    const float CHECKING_LOW_INTEREST_RATE = 0.03;
    const float CHECKING_DEFAULT_INTEREST_RATE = 0.05;
    
    cout << "Please enter the account number: "<<endl;
    cin >> accountNumber ; 
    cout << "Please enter the account type: "<<endl;
    cin >> accountType;
    cout << "Please enter the minimum balance: "<<endl;
    cin >> minimumBalance ;
    cout << "Please enter the current balance: "<<endl;
    cin  >> currentBalance;
    switch (accountType) 
	{
        case '1':
            cout << "Account Number: " << accountNumber << endl;
            cout << "Account Type: Savings" << endl;
            cout << "Minimum Balance: $" << minimumBalance << endl;
            cout << "Current Balance: $" << currentBalance << endl;
            
            if (currentBalance < minimumBalance) 
			{
                cout << "Service Fee: $" << SAVINGS_SERVICE_CHARGE << endl;
                cout << "Interest Earned: $" << currentBalance * SAVINGS_INTEREST_RATE<< endl;
            }
            break;
		case '2':
        	{
            cout << "Account Number: " << accountNumber << endl;
            cout << "Account Type: Checking" << endl;
            cout << "Minimum Balance: $" << minimumBalance << endl;
            cout << "Current Balance: $" << currentBalance << endl;
            
            if (currentBalance < minimumBalance) 
			{
                cout << "Service Fee: $" << CHECKING_SERVICE_CHARGE << endl;
                 cout << "Interest Earned: $" << currentBalance * CHECKING_SERVICE_CHARGE<< endl;
            }
		}
            return 0;
}}
