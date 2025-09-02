//Program which calculates how many seats are sold and how much income is generated
#include <iostream>
using namespace std;
//Main Function
int main()
//Starting body of the main function
{
//Variable Declaration
    int Class_A_Seat_Price$=15,Class_B_Seat_Price$=12,
	Class_C_Seat_Price$=9;
	int Class_A,Class_B,Class_C,TotalTicketNumbers,TotalIncome;
//Taking input by user defined method
	cout << "Enter Class A Tickets"<< endl;
	cin >> Class_A;
	cout << "Enter Class B Tickets"<<endl;
	cin >> Class_B;
	cout << "Enter Class C Tickets"<<endl;
	cin >> Class_C;
//Logic of the Program
	TotalTicketNumbers= Class_A+ Class_B + Class_C;
	cout <<"Total Number of Ticket sold ="<<TotalTicketNumbers<<endl;
	TotalIncome=(15*Class_A)+(12*Class_B)+(9*Class_C);
	cout << "Total amount of income generated from ticket sales ="<<TotalIncome;
	return 0;
//Closing body of the main function
}
