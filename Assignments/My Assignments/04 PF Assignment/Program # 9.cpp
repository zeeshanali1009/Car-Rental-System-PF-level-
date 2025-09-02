/*9.	Write a program that inputs five integers from the user and stores them in an array.
 It then displays all values in the array using loops.*/
#include <iostream>
using namespace std;
int main()
{
	int Array [5];
	for (int i=0; i < 5 ; i++)
	{
		cout << "Enter the value for [ "<< i << " ]"<<endl;
		cin >> Array [i] ;
	}
	for ( int i=0 ; i < 5 ; i++)
	{
		cout << "Your value for index [ "<< i << " ] "<< " is " << Array [i] << endl;
	}
	return 0 ;
}
