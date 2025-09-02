//1.	Write a program in C++ to find the sum of elements of an array.
#include <iostream>
using namespace std;
int main()
{
	int Sum =0 , Array[ 5 ] ;
	for ( int i =0 ; i < 5 ; i++ )
	{
		cout << "Enter the value for index [ " << i << " ]" <<endl;
		cin >> Array [i];
	}
	for ( int i=0 ; i < 5 ; i++)
	{
		Sum = Sum + Array[i] ; 
	}
	cout << "Sum of elements of array elements = "<<Sum << endl;
}
