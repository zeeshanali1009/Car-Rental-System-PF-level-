// This program displAys the age bracket between 50 - 60
#include <iostream>
using namespace std;
int main()
{
	int j=0, Age [3];
	for ( int i=0 ; i < 3 ; i++)
	{
		cout << "Enter your age "<< endl;
		cin >> Age [i];
	}
	for ( int i=0 ; i <= 2; i++)
	{
		if ( Age [i] > 50 && Age [i] < 60 )
		{
			j++ ;
		}
	}
	cout << " Persons between the age bracket of 50 - 60 are = "<< j << endl;
}
