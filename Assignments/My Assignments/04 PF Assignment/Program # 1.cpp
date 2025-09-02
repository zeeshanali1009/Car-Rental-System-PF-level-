//1.	Write a program in C++ to find the sum of elements in an array.
#include <iostream>
using namespace std;
int main()
{
	int Sum [5] , Array[ 5 ] , Addition = 0  ;
	for ( int i = 0 ; i < 5 ; i++ )
	{
		cout << "Enter the value for index [ " << i << " ]" <<endl;
		cin >> Array [i];
	}
	for ( int i=0 ; i < 5 ; i++)
	{
	    Sum[i] = Array[i] ; 
	}
	for ( int i =0 ; i < 5 ; i++)
	{
		Addition = Addition + Sum [i] ; 
	}
	cout << "Sum of elements of array elements = "<< Addition << endl;
}
