#include <iostream>
using namespace std;
int main()
{
// variable declarations	
	int value_1,value_2,value_3;
// taking all the values from the user	
	cout <<"Enter the first number "<<endl;
	cin >> value_1 ;
	cout <<"Enter the second number "<<endl;
	cin >> value_2 ;
	cout <<"Enter the third number "<<endl;
	cin >> value_3 ;
// checking the equality of numbers among each other	
	if ( value_1 == value_2 )
	{
	    if(value_2== value_3 )
	    {
	    cout << " All numbers are equal to each other"<<endl;
		}	
	}
	else 
	{
	cout << "Numbers are not equal"<<endl;
	}
}
