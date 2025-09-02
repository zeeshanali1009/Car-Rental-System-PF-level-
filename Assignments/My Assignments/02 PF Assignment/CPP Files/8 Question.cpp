//This program calculates the force by the given formula
#include <iostream>
using namespace std;
int main()
{
//Variable declaration
	double Mass1,Mass2,distance,Force;
	double     k = 6.67e-8; //( e= *10^ )
	cout << "Enter the value of m1 "<<endl;
	cin >> Mass1;
	cout << "Enter the value of m2 "<<endl;
	cin >> Mass2;
	cout << "Enter the value of d "<<endl;
	cin >> distance;
//logic of the program
	Force = k*Mass1*Mass2/(distance *distance );
	cout <<"Force is = "<<Force;
	
	return 0;
	
}
