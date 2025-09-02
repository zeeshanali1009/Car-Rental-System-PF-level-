//This program takes input and confirms whether it is an alphabet,digit or special chracter
#include <iostream>
using namespace std;
int main()
   {
//Variable declaration
   	char Value;
   	cout <<"Enter some input"<<endl;
	cin >> Value;
//if else statement
	if ((Value >='a' && Value <='z')|| (Value >='A' && Value <='Z'))    //for all alphabets
	{
		cout <<"Your entered value " << Value <<" is an alphabet"<<endl;
	}
	else if (Value >='0' && Value <= '9')                                //for all digits
	{
		cout <<"Your entered value is "<<Value <<" a digit "<<endl;
	}
	else 																//for all special chracter
	{
		cout <<"Your entered value is "<<Value << " a special chracter"<<endl;
	}
	return 0;
   }
