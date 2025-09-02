//12. Write a program that inputs the age of different persons and counts the number of persons in the age group 50 and 
//60
#include <iostream>
using namespace std;
int main()
{
	int Age [3] , counter = 0;
	for ( int i=0 ; i <3 ; i++)
	{
		cout << "Please enter your age"<<endl;
		cin >> Age[i];
	}
	for ( int i=0 ; i < 3 ; i++)
	{
		if ( Age [i] > 50 && Age[i] < 60)
		{
			counter ++ ; 
		}
	}
	cout << "The number of persons whose age is in the age bracket of 50-60 are = " << counter <<endl;
}
