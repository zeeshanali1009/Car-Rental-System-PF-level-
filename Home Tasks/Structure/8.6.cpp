/* This program calculates the gross pay of the employ using the structure */
#include <iostream>
using namespace std;
   struct EmployPay 
   {
   	 int EmployNumber ;
   	 char  EmployFirstName   ;
   	 char  EmploySecondName ;
   	 int PayRate , NumberOfHours , GrossPay ;
   }; 
int main()
{
	EmployPay Employee ;
	cout  << "Enter employ number " << endl;
	cin >> Employee.EmployNumber ;
	cout  << "Enter First name " << endl;
	cin >> Employee.EmployFirstName ;
	cout  << "Enter Second name " << endl;
	cin >> Employee.EmploySecondName ;
	cout  << "Enter number of hours " << endl;
	cin >> Employee.NumberOfHours  ;
	cout  << "Enter pay rate  " << endl;
	cin >> Employee.PayRate ;
	Employee.GrossPay =  Employee.NumberOfHours  *  Employee.PayRate ;
	cout << "Full details of the employees are" << endl;
	cout << "Name " <<  Employee.EmployFirstName << " " <<  Employee.EmploySecondName << endl;
	cout << "Number " << Employee.EmployNumber << endl;
	cout << "Number of hours worked " <<  Employee.NumberOfHours  << endl;
	cout << "Pay Rate  " <<  Employee.PayRate << endl;
	cout << "Gross Pay " << 	Employee.GrossPay << endl;
	return 0 ;
}
