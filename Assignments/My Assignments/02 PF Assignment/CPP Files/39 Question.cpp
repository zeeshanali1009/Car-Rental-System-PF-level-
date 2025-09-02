//Write a This program will calculate the salary of an employ and detect 5% tax if its more 
#include <iostream>
using namespace std;
int main()
{
//Variable declarations
	int Employ_Salary,SalaryAfterDeduction;
	cout <<"Enter your monthly pay "<<endl;
	cin >> Employ_Salary;
//if else statement
	if (Employ_Salary>50000)
	{
	SalaryAfterDeduction = (5*Employ_Salary)/100 ;
	cout << "5% tax from your salary is "<< SalaryAfterDeduction<<endl;
	}
	else
	{
	cout <<"Your don't have to pay any sort of tax " <<endl;
	}
    return 0;	
}

