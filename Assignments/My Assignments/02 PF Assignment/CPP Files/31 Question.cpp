//This program reads temperature in centigrade and then displays a suitable message 
#include <iostream>
using namespace std;
int main()
{
//Variable declaration
	float Temperature;
	cout << "Enter the temperature in centigrade "<<endl;
	cin >> Temperature;
//using if else statement
	if ( Temperature < 0)
	{
	cout <<" That is freezing weather "<<endl;
	}
	else if(Temperature > 0 && Temperature <10)
	{
		cout <<"That is very cold weather "<<endl;
	}
	else if(Temperature > 10 && Temperature <20)
	{
	cout <<"That is cold weather "<<endl;
	}
	else if(Temperature > 20 && Temperature <30)
	{
	cout <<"That is normal weather "<<endl;
	}
	else if(Temperature > 30 && Temperature <40)
	{
	cout <<"That is hot weather "<<endl;
	}
	else
	{
	cout <<"That is very hot "<<endl;
	}
	
	return 0;
}

