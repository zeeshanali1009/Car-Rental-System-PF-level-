//4. Write a program in C++ to find the transpose of a 2D array.
#include <iostream>
using namespace std ;
int main()
{
	int m , n ;
	cout << "Enter the Number of rows " <<endl;
	cin >> m ;
	cout << "Enter the Number of coloumn " <<endl;
	cin >> n ;
	int Array [m][n] ;
	for (int i=0 ; i < m ; i++)
	{
		for ( int j=0 ; j < n ; j++)
		{
			cout << "Enter value for index [ "<< i << " ] [ "<< j << " ]"<<endl;
			cin >> Array [i][j] ;
		}
	}
	cout << "Actual Array is "<<endl;
	for (int i=0 ; i < m ; i++)
	{
		for ( int j=0 ; j < n ; j++)
		{
		      cout <<"[ " << Array [i][j] << " ] ";
		}
		cout << endl;
	}
	cout << "\nArray in Transpose form" <<endl;
		for (int i=0 ; i < m ; i++)
	{
		for ( int j=0 ; j < n ; j++)
		{
		      cout <<"[ " << Array [j][i] << " ] ";
		}
		cout << endl;
	}
	
}
