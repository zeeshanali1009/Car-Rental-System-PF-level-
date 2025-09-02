// This program prints the reverse of a number 
#include <iostream>
using namespace std;
int main()
{
// array declaration and initialization	
	int Number [5];
	for ( int  i=0; i<5 ;i++)
	{
		cout << "Enter the value "<<endl;
		cin >> Number [i];
	}
	for ( int i =4;i>=0 ; i--)
	{
		cout <<Number [i];
	}
	
}
