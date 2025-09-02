//11. Write a program that prints the pyramid like following. Ask the user to enter the 
//number of rows in a pyramid and the character to be shown in pyramid. 
#include <iostream>
using namespace std;
int main ()
{
	int i,j,k,rows;
	char chr ;
	cout << "Enter the chracter you want to print out " << endl;
	cin >> chr ;
	cout << "Enter Number of rows = " ;
	cin >> rows;
	for (i=1 ; i <= rows ; i++)
	{
		for(k=rows ; k>=i ; k--)
		{
			cout << " " ;
		}
		for (j=1 ; j<=i ; j++)
		{
			cout << ""<< chr << " ";
		}
		cout << endl;
	}
}
