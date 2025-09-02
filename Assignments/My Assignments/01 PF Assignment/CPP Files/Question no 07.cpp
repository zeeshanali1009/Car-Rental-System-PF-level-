//This Program calculates the average rainfall for three months
#include<iostream>
using namespace std;
//Main Function
int main()
//Starting point of the body of main function
{
	//variable Declaration
    string FirstMonthName,SecondMonthName,ThirdMonthName;
	float Rain_In_First_Month,Rain_In_Second_Month,Rain_In_third_month,Average_Rainfall;
	//Getting input by user defined method
	cout << "Enter the name of first month"<<endl;
	cin >> FirstMonthName;
	cout << "Enter the name of second month"<<endl;
	cin >> SecondMonthName;	
	cout << "Enter the name of third month"<<endl;
	cin >> ThirdMonthName;
	cout << "Enter rain in inches in first month"<<endl;
	cin >> Rain_In_First_Month;
	cout << "Enter rain in inches in second month"<<endl;
	cin >> Rain_In_Second_Month;
	cout << "Enter rain in inches in third month"<<endl;
	cin >> Rain_In_third_month;
	//Average rainfall
	Average_Rainfall=(Rain_In_First_Month+Rain_In_Second_Month+Rain_In_third_month)/3;
	cout << "Average rainfall for three months is= "<<Average_Rainfall<<endl;
	return 0;
//Closing point of the body of main function
}
