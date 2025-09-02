//This program is usedfor opening two formulas: 
//(a+b)^2
//(a-b)^2
#include <iostream>
using namespace std;
int main()
{
//Variable Declaration
	int user_choice,Formula_1 ,Formula_2,a,b,result ;
	cout << "for (a+b)^2:\t Press 1 "<<endl;
	cout << "for (a-b)^2:\t Press 2 "<<endl;
	cout <<"Enter any option\n\n"<<endl;
	cin >> user_choice;
	cout << "Enter first operand"<<endl;
	cin >> a;
	cout << "Enter second operand"<<endl;
	cin >> b;
	Formula_1 = a*a +(2*a*b) + b*b;
	Formula_2 = a*a -(2*a*b) + b*b;
//Using if else staetement
	if (user_choice == 1)
	{
	cout << "(a+b)^2 = a^2 + b^2 +2ab \n" <<endl;
		result = Formula_1 ;
    	cout <<"result is = "<< result <<endl;
    }
    else if (user_choice == 2)
    {
    	cout << "(a-b)^2 = a^2 + b^2 -2ab \n" <<endl;
    	result = Formula_2 ;
    	cout <<"result is = " <<result <<endl;
	}
    return 0;
}
