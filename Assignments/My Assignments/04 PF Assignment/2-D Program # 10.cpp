/*10. Write a program that stores integer values in an array of 2 rows and 4 columns and display the values like:
1 2 3 4
5 6 7 8 */
#include <iostream>
using namespace std;
int main()
{
	int Array [2][4] ;
	for (int i=0 ; i < 2 ; i++)
	{
		for ( int j=0 ; j < 4 ; j++)
		{
			cout << "Enter the  value for index [ " << i << " ] [ "<< j << " ]"<< endl;
			cin >> Array [i][j] ;
		}
	}
	for ( int i=0 ; i < 2 ; i++)
	{
		for ( int j=0 ; j < 4 ; j++)
		{
			cout <<" " << Array [i][j] ;
		}
		cout << endl;
	}
}
