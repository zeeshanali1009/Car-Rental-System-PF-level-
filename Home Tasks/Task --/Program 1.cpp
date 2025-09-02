// This program takes the divisor and divident from the user and then displays the quotient and remainder
# include <iostream>
using namespace std;
int main()
{
// Variable Declarations	
	int divident,divisor,remainder,quotient;
// Taking divident and divisor	
	cout << "Enter the Divident"<<endl;
	cin >> divident ;
	cout << "Enter the Divisor"<<endl;
	cin >> divisor ;
// Logic of the program	
    quotient= divident / divisor ;
	cout << "Quotient is = "<< quotient <<endl;
	remainder = divident % divisor ;
	cout << "Remainder is = "<< remainder <<endl;
	return 0 ;
	
	
}

