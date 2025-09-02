//Write a This program reads two integers and determines whether first is a multiple of second one or not
#include <iostream>
using namespace std;
int main()
{
//Variable declaration
	int num_1 ,num_2 ;
	cout <<"Enter first number"<<endl;
	cin >> num_1;
	cout <<"Enter first number"<<endl;
//using if else statement
	cin >> num_2;
	if ( num_1 % num_2 == 0)				// first is a multiple
	{
		cout <<"Your first number is a multiple of second one "<< endl;
	}
	else									// not the multiple
	{
		cout <<"Your first number is not the multiple of second one"<<endl;
	}
	return 0;
 }
