//This program shows the largest number among all
#include <iostream>
using namespace std;
int main()
{
//variable declaration	
	int num1,num2,num3;
	cout <<"Please Enter your number"<<endl;
	cin >> num1;
	cout <<"Please Enter your number"<<endl;
	cin >> num2;
	cout <<"Please Enter your number"<<endl;
	cin >> num3;
//using nested if 
	if (num1> num2)
	{
		if (num1 > num3 )
		{
			cout <<num1 <<"is the largest among all"<<endl;
		}
	}
		if (num2> num3)
	{
		if (num2 > num1 )
		{
			cout <<num2 <<"is the largest among all"<<endl;
		}
	}
		if (num3> num2)
	{
		if (num3 > num1 )
		{
			cout <<num3 <<"is the largest among all"<<endl;
		}
	}
	return 0;
}
