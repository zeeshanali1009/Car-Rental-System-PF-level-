// This program displays the numbers in the form of diamond
#include <iostream>
using namespace std;
int main()
{
// variable Declaration	
	int i,j,k,a=1;
// Using for loop	
	for ( i=1 ; i <=5 ; i++)
	{
// adjusting the spaces		
		for ( j=5 ; j>=i ; j--)
		{
			cout << " " ;
		}
// Printing the numbers		
		for ( k=1 ; k<=i ; k++ )
		{
			cout << a << " ";
		}
		a++;
		cout << endl;
	}
}
