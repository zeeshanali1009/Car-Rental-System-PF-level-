//Program which takes the number of gallons and convert them into cubicfeets
#include <iostream>
using namespace std;
int main()
{
//Variable Declarations
	float Gallons_in_1_cubicfeet = 7.481;
	float  Number_of_gallons,Number_of_gallons_into_cubicfeet;
	cout <<"Enter the number of gallons which you want to convert in cubicfeets"<<endl;
	cin >> Number_of_gallons;
//Logic
	Number_of_gallons_into_cubicfeet = (Number_of_gallons/7.481);
	cout <<"Number of gallos you entered in CUBICFEETS are "<< Number_of_gallons_into_cubicfeet<<endl;
	return 0;
}
