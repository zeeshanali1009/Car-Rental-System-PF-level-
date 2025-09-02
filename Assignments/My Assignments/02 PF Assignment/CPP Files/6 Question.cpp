// This program adds two given fractions
#include <iostream>
using namespace std;
int main()
{
//Variable declaration
	char Chracter;
	int a,b,c,d,result_1,result_2,result;
	cout << "Enter the value of a "<<endl;
	cin >> a;
	cout << "Enter the function "<<endl;
	cin >> Chracter;
	cout << "Enter the value of b "<<endl;
	cin >> b;
	cout << "Enter the value of c "<<endl;
	cin >> c;
	cout <<"Enter the function"<<endl;
	cin >> Chracter;
	cout << "Enter the value of d "<<endl;
	cin >> d;
//Logic of the program
	result_1 = (a*d + b*c);
	result_2 = ( b*d );
	result = (result_1/result_2);
	cout <<"Sum of both fractions (a/b + c/d) is = "<<result <<endl;
}
