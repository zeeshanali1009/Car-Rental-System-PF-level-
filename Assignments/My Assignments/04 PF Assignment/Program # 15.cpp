//15. Write a program that inputs five numbers in an array and displays them in actual and reverse order.
#include <iostream>
using namespace std;
int main()
{
	int Number [5];
	for ( int i=0 ; i < 5 ; i++)
	{
		cout << "Enter the element for index [ " << i << " ] " << endl;
		cin >> Number [i] ;
	}
	cout << "Your array elements in the actual  order" <<endl;
	for (int i= 0; i < 5 ; i++)
	{
		cout << " " << Number [i] ; 
	}
		cout << "\nYour array elements in the reverse  order" <<endl;
	for (int i = 4; i >=  0 ; i--)
	{
		cout << " " << Number [i] ; 
	}
}
