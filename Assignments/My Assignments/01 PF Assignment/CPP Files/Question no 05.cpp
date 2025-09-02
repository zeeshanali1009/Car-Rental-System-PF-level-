//This Program calculate the gas mileage of a car
#include <iostream>
using namespace std;
//Main Function
int main()
//Starting point of main function
{
//Variable Declaration
	int Number_of_Galons_in_full_tank,Miles_per_Full_Tank,Number_of_miles_per_galon;
//Getting input in User Defined method
	cout <<"Enter the number of Galons of gas your car's tank can hold"<<endl;
	cin >> Number_of_Galons_in_full_tank;
	cout <<"Enter number of miles which your can travel on full tank"<<endl;
	cin >> Miles_per_Full_Tank;
//Logic of the program
	Number_of_miles_per_galon=(Miles_per_Full_Tank/Number_of_Galons_in_full_tank);
	cout<< "Gas Mileage of your car=" <<Number_of_miles_per_galon <<endl;
	return 0;
//Ending point of main function
}
