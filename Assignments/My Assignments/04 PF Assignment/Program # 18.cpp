//18. Write a program that gets five inputs from the user in an array and sorts the array in ascending orders.
#include <iostream>
using namespace std;
int main()
{
	int n ;
	cout << "Enter the size of array " <<endl;
	cin >> n ;
	int Max = 0 , Number [ n ]  ; 
	for ( int i =0 ; i < n ; i++)
	{
		cout << "Enter the value for index [ "<< i<< " ]"<<endl;
		cin >> Number [i] ;
	}
	for ( int i =0 ; i < n ; i++)
	{
		for (int j = i+1 ; j < n ; j++)
		{
		if ( Number [i] > Number[j] )
		{
			Max = Number [i] ;
			Number [i] = Number [j] ;
			Number [j] = Max ;
		}
	    }
	}
	cout << "\n" <<endl;
		for ( int i =0 ; i < n ; i++)
	{
	 cout << Number[i] <<endl;
	}

}
