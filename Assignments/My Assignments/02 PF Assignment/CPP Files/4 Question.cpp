// Write a program that allows the user to enter a letter, and then displays either zero or 
//nonzero depending on whether a lowercase or uppercase letter was entered.
#include <iostream>
#include <CTYPE.H>
using namespace std;
int main()
{
//Variable Declarations
   char Letter;
   int desired_result;
   cout <<"Enter your desired chracter "<<endl;
   cin >> Letter;
//Logic of the program
   desired_result= islower(Letter);
   cout <<desired_result<<endl; 
	return 0;
}

