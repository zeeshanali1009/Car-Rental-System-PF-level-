// This program reverse the given numbers
#include <iostream>
using namespace std;
int main()
{
// Variable declarations	
	int Number,reverse,quotient ;
// taking all values from the user	
	cout << "Enter three digit numbers"<<endl;
	cin >> Number ;
// reversing first number	
	reverse = Number % 10 ;
	quotient = Number / 10 ;
	cout << reverse ;
// reversing second number	
	reverse = quotient % 10;
	quotient = quotient / 10;
	cout << reverse ;
// reversing second number	
	reverse = quotient % 10 ;
	cout << reverse ;
	return 0;
}
