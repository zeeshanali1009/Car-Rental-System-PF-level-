/*11. Write a program that initializes a 2-D array of 2 rows and 3 columns and then displays its values as:
Arr[0][0] = 1 Arr[0][1] = 2 Arr[0][3] = 3
Arr[1][0] = 4 Arr[1][1] = 5 Arr[1][2] = 6*/
#include <iostream>
using namespace std;
int main()
{
	int Array [2][3] ;
	for (int i=0 ; i < 2 ; i++)
	{
		for ( int j=0 ; j < 3 ; j++)
		{
			cout << "Enter the  value for index [ " << i << " ] [ "<< j << " ]"<< endl;
			cin >> Array [i][j] ;
		}
	}
	for ( int i=0 ; i < 2 ; i++)
	{
		for ( int j=0 ; j < 3 ; j++)
		{
			cout <<"  Arr [ "<<i <<" ] [ "<<j << " ] = " << Array [i][j] ;
		}
		cout << endl;
	}
}
