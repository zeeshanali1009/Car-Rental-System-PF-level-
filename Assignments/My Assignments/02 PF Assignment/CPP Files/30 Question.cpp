//This program reads roll no, name and marks of three subjects and calculate the total, percentage and division.
#include <iostream>
using namespace std;
int main()
{
	int roll_no,Physics,Computer,Chemistry,Total;
	float Percentage;
	string name;
	cout << "Enter your roll no"<<endl;
	cin >> roll_no;
	cout <<"Enter your name"<<endl;
	cin >> name;
	cout <<"Enter your marks in physics"<<endl;
	cin >> Physics;
	cout <<"Enter your marks in computer"<<endl;
	cin >> Computer;
	cout <<"Enter your marks in Chemistry"<<endl;
	cin >> Chemistry;
	Total = Physics + Computer + Chemistry;
	Percentage = Total/3;
	if (Percentage>=80)
	{
	cout <<"You got first division "<<endl;
	}
	if (Percentage>60 && Percentage<80)
	{
		cout <<"You have got second division"<<endl;
	}
		if (Percentage>40 && Percentage<60)
	{
		cout <<"You have got third division"<<endl;
	}
	return 0;
}
