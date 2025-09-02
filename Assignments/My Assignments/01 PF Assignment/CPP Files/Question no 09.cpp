//This Program Calculates the overall expenses of an automobile shop monthly and annualy
#include <iostream>
using namespace std;
//Main Function
int main()
//Starting Point of Main function
{
//Variable Declaration
	int LoanPayment,Insurance,Gas,Oil,Tires,Maintenance,TotalMonthlyCost,TotalAnnualCost;
//Getting input by User Defined Method
	cout<< "Enter the Loan Paymnet of your Automobile Shop"<<endl;
	cin >> LoanPayment;
	cout<< "Enter the Insurance amount of your Automobile Shop"<<endl;
	cin >> Insurance;
	cout<< "Enter the Gas expeditures of your Automobile Shop"<<endl;
	cin >> Gas;
	cout << "Enter the oil expenditures of your Automobile Shop"<<endl;
	cin >> Oil;
	cout<< "Enter the Tire expeditures of your Automobile Shop"<<endl;
	cin >> Tires;
	cout<< "Enter the Maintenance expenditures of your Automobile Shop"<<endl;
	cin >> Maintenance;
//Logic of the Program
    TotalMonthlyCost=(LoanPayment+Insurance+Gas+Oil+Tires+Maintenance);
    TotalAnnualCost= (TotalMonthlyCost*12);
    cout << "The Total Monthly cost for all the expenses is= "<<TotalMonthlyCost <<endl;
    cout << "The Total Annual Cost for all expenses is= "<<TotalAnnualCost;
	return 0;
	
}
