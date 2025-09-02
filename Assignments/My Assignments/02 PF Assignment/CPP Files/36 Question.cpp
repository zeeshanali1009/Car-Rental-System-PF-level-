//write a program to check whether a number is divisible by 5 or 11.
#include <iostream>
using namespace std;
int main()
{
//Variable Declaration	
	int DesiredNumber;
	cout << "Enter your desired number " <<endl;
	cin >> DesiredNumber;
//using if else statement
	if ((DesiredNumber % 5 ==0)&&(DesiredNumber % 11 == 0))
	{
	cout <<"Your entered number "<< DesiredNumber <<" is divisible by both 5 and 11 "<<endl;
	} 
	else
	{
	cout << "Your entered number is neither divisible by 5 nor by 11 "<<endl;
	}
	return 0;
}
