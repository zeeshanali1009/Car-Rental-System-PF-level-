//This program reads the age of a candidate and determine whether it is eligible for casting the vote
#include <iostream>
using namespace std;
int main()
{
//Variable Declaration
	int Age;
	cout <<"Enter your age"<<endl;
	cin >> Age;
//using if else statement
	if (Age >= 18)
	{
		cout <<"You are eligible for casting your vote"<<endl;
	}
	else
	{
		cout <<"You are not eligible"<<endl;
	}
	return 0;
} 
