// 5.	Write a program in C++ to search for a specific element in an array.
#include <iostream>
using namespace std ; 
int main()
{
	int  n, user_choice , Array [ n ] ; 
	cout << "Enter the size of your array "<<endl;
	cin >> n ;
	for ( int i=0 ; i < n ; i++)
	{
		cout << "Enter the element "<<endl;
		cin >> Array [i]; 
	}
	cout << "Enter the number you want to search "<<endl;
	cin >> user_choice ;
	for ( int i=0 ; i < n ; i++)
	{
		if ( user_choice == Array[i])
		{
			cout << "You have searched for = " << Array [i] <<endl;
			cout << "Its index is [ "<< i << " ]" <<endl;
		}
	}
	
}
