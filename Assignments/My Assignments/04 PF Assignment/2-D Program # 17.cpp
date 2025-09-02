//17. Write a program that print the values of each element of 2-D array in tabular format with 3 rows and 3 columns. 
//Assume that the array was initialized with the declaration.
#include <iostream>
using namespace std ;
int main ()
{
	int Array [3][3]= { {1,2,3},{4,5,6},{7,8,9}} ;
	for ( int i =0 ; i < 3 ; i++)
	{
		for ( int j =0 ; j < 3 ; j++)
		{
			cout << " [ " << Array [i][j] << " ]";
		}
		cout << endl;
	}
	return 0 ;
}
