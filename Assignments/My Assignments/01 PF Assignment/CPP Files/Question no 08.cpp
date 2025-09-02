// This Program calculates the calories consumed
#include <iostream>
using namespace std;
//Main Function
int main()
//Starting point of the main function
{
//Variable Declaration
	int Bag_holding_cookies=40,Servings_in_bag=10,One_Serving_contain_calories=300;
	int Cookies_taken,Total_Calories_Consumed;
//Getting input by user defined method
    cout <<"Enter the the Cookies you have taken"<<endl;
	cin >> Cookies_taken;
//Logic of the Program
	Total_Calories_Consumed=(300*Cookies_taken);
	cout <<"Total Calories you consumed in the form of calories= "<<Total_Calories_Consumed;
	return 0;
//Ending point of main Function
}
