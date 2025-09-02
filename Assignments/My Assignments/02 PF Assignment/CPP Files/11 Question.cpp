// This program calculates the interest of the user according to terms and conditions
#include <iostream>
using namespace std;
int main()
{
//Variable declaration	
	double netBalance,d1,d2,payment,interest,monthlyinterestrate,averageDailyBalance;
//taking all input from the user	
	cout <<"Enter the net balance"<<endl;
	cin >> netBalance;
	cout << "Enter the payment"<<endl;
	cin >> payment;
	cout << "Enter the nummber of days in biling cycle "<<endl;
	cin >> d1;
	cout << "Enter number of days payment is made before billing cycle "<<endl;
	cin >> d2;
	cout << "Enter interest per month"<<endl;
	cin >> monthlyinterestrate ;
//logic of the program	
	averageDailyBalance = (netBalance * d1 - payment * d2)/d1;
	interest = averageDailyBalance *monthlyinterestrate ;
	cout <<"Interest is "<<interest <<endl;
	return 0;
	
	
}
