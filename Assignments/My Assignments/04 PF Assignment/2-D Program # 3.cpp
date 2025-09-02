//3. Write a program in C++ to find the sum of elements of each row in a 2D array.
#include <iostream>
using namespace std ;
int main()
{
	int m , n , Sum  ;
	cout << "Enter the number of rows of the array"<<endl;
	cin >> m ;
	cout << "Enter the number of coloumns of the array"<<endl;
	cin >> n ;
	int Number [m][n];
	for ( int i = 0 ; i < m ; i++)
	{
		for ( int j=0 ; j < n ; j++)
		{
			cout << "Enter the value for index [ " << i << " ] [ "<< j << " ]" <<endl;
			cin >> Number [i][j] ;
		}
	}
			for (int i=0 ; i < m ; i++)
	{
		for ( int j=0 ; j < n; j++)
		{
		      cout <<"[ " << Number[i][j] << " ] ";
		}
		cout << endl;
	}
		for ( int i = 0 ; i < m ; i++)
	{
		for ( int j=0 ; j < n ; j++)
		{
			Sum = Sum + Number [i][j] ;
		}
		cout << "Sum of " << i << "row is = "<< Sum <<endl;
		Sum =0 ;
	}
	
}
