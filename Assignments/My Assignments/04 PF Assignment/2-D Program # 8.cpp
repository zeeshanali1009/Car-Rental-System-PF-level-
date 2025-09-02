// 8 . Write a program in C++ to search for a specific element in a 2D matrix
#include <iostream>
using namespace std ; 
int main()
{
	int m , n ;
	cout << "Enter the number of rows "<<endl;
	cin >> m ;
	cout << "Enter the number of coloumns "<<endl;
	cin >> n ;
	int  user_choice , Number [m][n] ; 
	for ( int i=0 ; i < m ; i++)
	{
		for (int j =0 ; j < n ; j++)
		{
		cout << "Enter the element "<<endl;
		cin >> Number [i][j]; 
	    }
	}
	cout << "Enter the number you want to search "<<endl;
	cin >> user_choice ;
	for ( int i=0 ; i < m ; i++)
	{
		for (int j =0 ; j < n ; j++)
		{
		if ( user_choice == Number[i][j])
		{
			cout << "You have searched for = " << Number [i][j] <<endl;
			cout << "It is present in the array.Its index is [ "<< i << " ]"<<"[ "<<j <<" ]" <<endl;
		}
	    }
	}	
}
