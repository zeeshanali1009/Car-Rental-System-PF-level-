/*11. Write a program that inputs current day and month from the user. It then calculates and displays the total number 
of days in the current year till the entered date.*/
#include <iostream>
using namespace std;
int main()
{
	int month , PassedDay , sum = 0 , day , Months[12] = { 31,28,31,30,31,30,31,31,30,31,30,31};
	cout << "Enter the month"<<endl;
	cin >> month ;
	cout << "Enter the day "<<endl;
	cin >> day ;
	for ( int i = 0 ; i < month-1 ; i ++)
	{
		sum = sum + Months[i] ;
	}
	PassedDay = sum + day ; 
	cout << "Total number of days passed in the current year are " << PassedDay << endl;
}



