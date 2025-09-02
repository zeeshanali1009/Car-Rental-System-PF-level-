// This program calculates how many bags are required to store rice 
#include <iostream>
using namespace std;
int main()
{
//variable declaration
	float One_Metric_ton , Amount_of_rice , Number_of_bags;
	float One_Metrice_ton = 2205;
// taking value  of the user	
	cout << "Enter your amount of rice in pounds "<<endl;
	cin >> Amount_of_rice;
//logic of the program	
	Number_of_bags = One_Metrice_ton  / Amount_of_rice ;
	cout << "Number of bags required to restore the rice = "<<Number_of_bags<<endl;
	return 0;
	
}
