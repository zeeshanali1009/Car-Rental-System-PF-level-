// This program checks whether the first number is the multiple of second one or not
#include <iostream>
using namespace std;
int main()
{
// Variable declarations	
	int value_1 ,value_2;
// Taking all the values from the user	
	cout << "Enter the first number "<<endl;
	cin >> value_1 ;
	cout << "Enter the second number "<<endl;
	cin >> value_2 ;
// checking multiplicity of first number with second one	
	if ( int multiple = value_1 % value_2 == 0 )                    // using if else statement
	{
	cout << "Yes Definetely, first number is the multiple of second one " <<endl;
	}
	else 
	{
	cout << "First number is not the multiple of second one"<<endl;
	}
	return 0;
}
