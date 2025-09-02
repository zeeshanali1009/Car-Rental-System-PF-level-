//12. Write a program that prints the diamond like following. The number of rows in 
//diamond should be at least equal to 10 and use * to draw the shape.  
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
		for (i=1 ; i <= rows ; i++)
	{
		for(k=1 ; k<=i ; k++)
		{
			cout << " " ;
		}
		for (j=rows ; j>=i ; j--)
		{
			cout << ""<< chr << " ";
		}
		cout << endl;
	}
}
