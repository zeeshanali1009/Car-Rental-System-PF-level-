//This program checks whether a character is an alphabet or not
#include <iostream>
using namespace std;
int main()
{
//Variable Declarations
	char Value;
	cout << "Enter the value"<<endl;
	cin >> Value;
//using if else statement
	if ((Value >='a' && Value <='z' || Value >='A' && Value <='Z' ))
	cout <<"Your given value is an alphabet"<<endl;
	else
	{
	cout << "Your given value is not an alphabet"<<endl;
	}
	return 0;
}
