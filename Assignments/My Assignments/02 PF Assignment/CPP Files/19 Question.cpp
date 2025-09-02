//Write a This program inputs an integer as an argument and returns Even if an even number and Odd if it is odd
#include <iostream>
using namespace std;
int main()
{
//variable declaration
	int value;
	cout << "Enter your value or number "<<endl;
	cin >> value;
//Using if else statement 
	if ( value % 2 == 0 )
	{
	cout <<"Your given number is an even number "<<endl;
    }
    else
	{
	cout <<"Your given number is an odd number "<<endl;
	}
return 0;
}
