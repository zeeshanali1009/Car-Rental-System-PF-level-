/*14. Write a program that inputs ten numbers from the user in an array and displays the maximum number and minimum 
numbers.*/
#include <iostream>
using namespace std;
int main()
{
	int Max = 0 , Min = 0, Number [ 10 ]  ; 
	for ( int i =0 ; i < 10 ; i++)
	{
		cout << "Enter the value for index [ "<< i<< " ]"<<endl;
		cin >> Number [i] ;
	}
	for ( int i =0 ; i < 10 ; i++)
	{
		if ( Number [i] > Max )
		{
			Max = Number [i] ;
		}
	}
    Min = Number [0] ;
	for ( int i =0 ; i < 10 ; i++)
	{
		if ( Number [i] <  Min)
		{
			Min = Number [i] ; 
		}
	}
	cout << "The largest number among the array is "<< Max <<endl;
	cout << "The smallest number among the array is "<< Min <<endl;
	
	
}
