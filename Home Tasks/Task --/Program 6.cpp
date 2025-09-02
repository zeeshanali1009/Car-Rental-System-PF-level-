// This program finds the smallest number among given three numbers
#include <iostream>
using namespace std;
int main()
{
// variable declaration	
	int num1,num2,num3;
	cout << "Enter the first value"<<endl;
	cin >> num1;
	cout << "Enter the second value"<<endl;
	cin >> num2;
	cout << "Enter the third value"<<endl;
	cin >> num3;
// finding the smallest number by using nested if loop	
	if ( num1 < num2)
	{
		if ( num1 < num3 )
		{
			cout <<"\n"<< num1 << " is the smallest number among all "<< endl;
		}
	}
		if (num2 < num1)
	{
		if (num2 < num3)
		{
			cout <<"\n"<< num2 << " is the smallest number among all "<< endl;
		}
	}
		if ( num3 < num1)
	{
		if ( num3 < num2)
		{
			cout <<"\n"<< num3 << " is the smallest number among all "<< endl;
		}
	}
	return 0;
}
