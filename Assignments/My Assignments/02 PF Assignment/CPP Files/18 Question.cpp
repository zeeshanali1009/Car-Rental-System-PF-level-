//This program that takes two numbers and an operation (+, -, *, /) as character from user 
//as input and displays the result by using if else statements
#include <iostream>
using namespace std;
int main()
{
//Variable declaration
	int a,b,addition,subtraction,multiplication,division;
	char chr;
	cout <<"Enter the first operand"<<endl;
	cin >> a;
	cout <<"Enter the relative function you want "<<endl;
	cin >> chr;
	cout <<"Enter the second operand"<<endl;
	cin >> b;
//using if else statement
	if (chr == '+')
	{
	cout <<"You have selected addition operater"<<endl;
	addition = a +b ;
	cout <<"Your result is = "<<addition<<endl;
	}
		if (chr == '-')
	{
	cout <<"You have selected addition operater"<<endl;
	subtraction = a - b ;
	cout <<"Your result is = "<<subtraction<<endl;
	}
		if (chr == '*')
	{
	cout <<"You have selected multiplication operater"<<endl;
	multiplication = a * b ;
	cout <<"Your result is = "<<multiplication<<endl;
	}
		if (chr == '/')
	{
	cout <<"You have selected division operater"<<endl;
	division = a / b ;
	cout <<"Your result is = "<<division<<endl;
	}
	else 
	{
		cout <<"You have entered a wrong operater "<<endl;
	}
	return 0;
}
