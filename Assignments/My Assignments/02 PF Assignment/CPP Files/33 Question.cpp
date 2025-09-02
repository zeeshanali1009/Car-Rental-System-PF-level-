//This program checks whether a triangle can be formed by the given value for the angles
#include <iostream>
using namespace std;
int main()
{
//variable declaration
	int angle_A,angle_B,angle_C;
	cout << "Enter side A for your triangle"<<endl;
	cin >> angle_A;
	cout << "Enter side B for your triangle"<<endl;
	cin >> angle_B;
	cout << "Enter side C for your triangle"<<endl;
	cin >> angle_C;
//using if else statement
	if (angle_A + angle_B + angle_C == 180 )
	{
		cout << "Your given angles make a perfect triangle "<<endl;
	}
	else
	{
		cout <<"Your given angle does not make a triangle "<<endl;
	}
	return 0;
}
