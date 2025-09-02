// 2.	Write program to read five numbers, find their sum, and print the numbers in reverse order.
#include <iostream>
using namespace std;
int main()
{
// Array and variable declaration	
	int Addition = 0 , Number[ 5 ] ;
// Taking all the values from the user	
	for ( int i =0 ; i < 5 ; i++ )
	{
		cout << "Enter the value for index [ " << i << " ]" <<endl;
		cin >> Number [i];
	}
// Adding all the elements of the Array	
	for ( int i=0 ; i < 5 ; i++)
	{
		Addition = Addition + Number[i] ; 
	}
	cout << "Sum of elements of array elements = "<< Addition << endl;
// Reversing the order of the numbers	
	cout  << "Your number in reverse order " << endl;
	for ( int i =4 ; i >=  0 ; i--)
	{
		cout << Number[i];
	}
}
