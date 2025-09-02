// This program calculates the bonus on the salary
#include <iostream>
using namespace std;
int main()
{
// Variable Declarations
	int Salary,Grade,HighBonusSalary,LowBonusSalary;
// Taking inputs from the user
	cout <<"Enter your salary please"<<endl;
	cin >> Salary;
	cout <<"Enter your grade"<<endl;
	cin >>Grade;
// using if else statement
	if (Grade >=1 && Grade <= 15)
	{
	HighBonusSalary = Salary + Salary/2;
	cout << "Your salary is " << HighBonusSalary<<endl;
    }
    else 
    {
    	LowBonusSalary = Salary + Salary/4;
    	cout <<"Your salary is = "<<LowBonusSalary<<endl;
	}
	return 0;
}
