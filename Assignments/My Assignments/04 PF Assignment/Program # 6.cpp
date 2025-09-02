// 6.	Write a program in C++ to find the second largest element in an array.
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

cout << "The second largest number is " << Number [n-2]<< endl;
}
