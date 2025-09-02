//12. Write a program that initializes a 2-D array of 2 rows and 3 columns and then displays the minimum and maximum 
//number in the array.
#include <iostream>
using namespace std;
int main()
{
	int Max = 0 , Min = 0, Number [5][5]  ; 
	for ( int i =0 ; i < 5 ; i++)
	{
		for ( int j=0 ; j < 5 ; j++)
		{
			
		
		cout << "Enter the value for index [ "<< i<< " ] [ "<< j << " ]"<< endl;
		cin >> Number [i][j];
	    }
	}
	for ( int i = 0 ; i < 5 ; i++)
	{
		for ( int j=0 ; j < 5 ; j++)
		{
		if ( Number [i][j] > Max )
		{
			Max = Number [i][j] ;
		}
	    }
	}
    Min = Number [0][0] ;
	for ( int i =0 ; i < 5 ; i++)
	{
		for ( int j=0 ; j <5 ; j++)
		{
		if ( Number [i][j] <  Min)
		{
			Min = Number [i][j] ; 
		}
	    }
	}
	cout << "The largest number among the array is "<< Max <<endl;
	cout << "The smallest number among the array is "<< Min <<endl;
	
	
}
