//This Program converts Celsius Scale's floating number in Fahrenhite Scale's floating number 
#include <iostream>
using namespace std;
//Main Function
int main()
//Starting the body of main function 
{
//Variable Declaration
	float Celsius_Scale;
	float Fahrenhite_Scale;
//Giving input in User Defined method
	cout <<"Enter your floating number in Celsius Scale"<<endl;
	cin >>Celsius_Scale;
//Logic of the Program
	Fahrenhite_Scale=(Celsius_Scale*9/5)+32;
	cout<< "Your floating number in Fahrenhite Scale is ="<<Fahrenhite_Scale<<endl;
	return 0;
//Closing the body of main function
}

