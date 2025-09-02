/*20. Write a program that inputs ten integers in an array. It then sorts the array using any sort method (of your own 
choice) and displays the number of occurrences of each number in the array as:
“1” is stored 4 times in the array
“2” is stored 2 times in the array */
#include <iostream>
using namespace std ; 
int main()
{
	int  n, user_choice ,counter = 0 , Number [ n ] ; 
	cout << "Enter the size of your array "<<endl;
	cin >> n ;
	for ( int i=0 ; i < n ; i++)
	{
		cout << "Enter the element "<<endl;
		cin >> Number [i]; 
	}
	cout << "Enter the number you want to search "<<endl;
	cin >> user_choice ;
	for ( int i=0 ; i < n ; i++)
	{
		if ( user_choice == Number[i])
		{
			counter ++ ;
		}

	}
	cout <<"\n "  << user_choice << " is present for " << counter  << " times in the array "<< endl;	
}

