//This program calculates the electricity bill
#include <iostream>
using namespace std;
int main()
{
	//Variable declarations
	int Electricity_Units,ElectricityBill;
	cout << "Please Enter the units of electricity you consumed" <<endl;	
	cin >> Electricity_Units;
	// if else statement
	if (Electricity_Units<=300)
	{
	ElectricityBill = (Electricity_Units * 3);
	cout << "Your Electricity bill is "<< ElectricityBill <<endl;
    }
    else 
    {
    ElectricityBill = (Electricity_Units* 3.5);
    cout << "Your Electricity bill is "<< ElectricityBill <<endl;
	}
	return 0;
}
