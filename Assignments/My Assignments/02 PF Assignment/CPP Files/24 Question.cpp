// This program which display the sum of whole part and decimal part of a float number
# include <iostream>
using namespace std;
int main()
{
// Variable Declarations and initializations
	int sum, b ;
	float a ;
	cout << " Enter the number "<<endl;
	cin >> a ;
	b = a;
	cout << " Decimal part of your given number = "<< b <<endl;
// Logic of the program	
	a = a - b ;
	a = a * 100 ;
	cout << " Floating part of your given number = "<< a <<endl;
	sum = b + a ;
	cout << sum <<endl;
	return 0;
}
