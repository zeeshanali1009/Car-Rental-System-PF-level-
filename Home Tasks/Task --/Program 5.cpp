// This program prints the table of the user desired number
#include <iostream>
using namespace std;
int main()
{
// Variable declarations	
	int num1,num2;
	cout << "Enter the number which you want to see in the form of the table"<<endl;
	cin >> num1;
	cout << "Enter the limit to which you want to print the given number"<<endl;
	cin >> num2;
// using for loop for printing the table	
	for ( int i= 1 ; i <= num2 ; i++)
	{
		cout << num1 << " * " << i << " = " << num1 * i << endl;
	}
	return 0;
}
