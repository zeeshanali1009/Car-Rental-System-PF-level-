//Write a program which takes 4 different number from user as input and display them in 
//ascending and descending order. 
#include <iostream>
using namespace std;
int main()
{
//Variable declaration
	int num1,num2,num3;
	cout << "enter first number "<<endl;
	cin >> num1;
		cout << "enter second number "<<endl;
	cin >> num2;
		cout << "enter third number "<<endl;
	cin >> num3;
	cout << "ASCENDING NUMBER"<<endl;
//ascending order	
	if ( num1 < num2 && num2 < num3)
	{
		cout << num1 << "  "<< num2 << "  "<<num3<<endl;
	}
	else if ( num1 < num3 && num3 < num2)
	{
		cout << num1 << "  "<< num3 << "  "<<num2<<endl;
	}
	else if ( num2 < num1 && num1 < num3)
	{
		cout << num2 << "  "<< num1 << "  "<<num3<<endl;
	}
	else if ( num2 < num3 && num3 < num1)
	{
		cout << num2 << "  "<< num3 << " "<<num1<<endl;
	}
	else if ( num3 < num1 && num1 < num2)
	{
		cout << num3 << "  "<< num1 << "  "<<num2<<endl;
	}
	else if ( num3 < num2 && num2 < num1)
	{
		cout << num3 << "  "<< num2 << "  "<<num1<<endl;
	}
// Descending order	
	cout << "DESCENDING FORM"<<endl;
		if ( num1 > num2 && num2 > num3)
	{
		cout << num1 << "  "<< num2 << "  "<<num3<<endl;
	}
	else if ( num1 > num3 && num3 > num2)
	{
		cout << num1 << "  "<< num3 << "  "<<num2<<endl;
	}
	else if ( num2 > num1 && num1 > num3)
	{
		cout << num2 << "  "<< num1 << "  "<<num3<<endl;
	}
	else if ( num2 > num3 && num3 > num1)
	{
		cout << num2 << "  "<< num3 << "  "<<num1<<endl;
	}
	else if ( num3 > num1 && num1 > num2)
	{
		cout << num3 << "  "<< num1 << "  "<<num2<<endl;
	}
	else if ( num3 > num2 && num2 > num1)
	{
		cout << num3 << "  "<< num2 << "  "<<num1<<endl;
	}
	return 0;
}
