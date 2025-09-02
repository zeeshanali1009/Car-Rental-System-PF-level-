// This program finds the sum of the square of integers
#include <iostream>
using namespace std;
int main()
{
// Variable declarations
    int limit,i ;
// taking value from the user		
	cout << "Enter the limit to which you want to print the sum of square of integers"<<endl;
	cin >> limit ;
// using the for loop
	for ( i == 0 ; i <= limit ; i=i+2 )
	{
	    int sum = 0 ;
	    sum = sum + i*i ;
	    cout <<"\n"<< sum <<endl;
	}
	return 0;
}
