//This program determines whether character entered by the user from the keyboard  
//is an uppercase character, a lowercase character, a digit or a special symbol.
#include <iostream>
using namespace std;
int main()
   {
//Variable declaration
   	char Value;
   	cout <<"Enter some input"<<endl;
	cin >> Value;
//if else statement
	if (Value >='a' && Value <='z')    //for lower case
	{
		cout <<"Your entered value " << Value <<" is a lower case alphabet"<<endl;
	}
	else if (Value >='A' && Value <='Z')   //for upper case
	{
	cout <<"Your entered value " << Value <<" is a upper case alphabet"<<endl;
	}
	else if (Value >='0' && Value <= '9')    // for digit
	{
		cout <<"Your entered value is "<<Value <<" a digit "<<endl;
	}
	else                                       //for any special symbol
	{
		cout <<"Your entered value is "<<Value << " a special symbol"<<endl;
	}
	return 0;
   } 
