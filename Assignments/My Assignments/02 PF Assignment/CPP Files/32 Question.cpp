//Write a C++ program to check whether a triangle is Equilateral, Isosceles or Scalene.
#include <iostream>
using namespace std;
int main()
{
//Variable declaration
	int side_A,side_B,side_C;
	cout <<"Enter the value of side A "<<endl;
	cin >>side_A;
	cout <<"Enter the value of side A "<<endl;
	cin >>side_B;
	cout <<"Enter the value of side A "<<endl;
	cin >>side_C;
//using if else statement
	if (side_A==side_B &&side_B == side_C)
	{
	cout <<"Your triangle is equilateral "<<endl;
	}
	else if ( side_A == side_B || side_B == side_C || side_C == side_A)
	{
	cout <<"Your triangle is isosceles triangle "<<endl;
	}
	else 
	cout <<"Your triangle is scalene triangle "<<endl;
	return 0;
}
