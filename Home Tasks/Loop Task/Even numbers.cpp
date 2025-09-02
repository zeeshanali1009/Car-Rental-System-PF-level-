#include <iostream>
//This program displays the even numbers
using namespace std;
int main()
{
// variable Declarations	
	int start,end,num;
// Taking inputs from the user	
	cout << "Enter the starting point"<<endl;
	cin >> start;                               // Initialization
	cout << "Enter the ending point"<<endl;
	cin >> end;
// using while loop	
	while ( num <= end )     // Condition
	{
		if( num % 2== 0)    // using if condition
		{
			cout <<"\n" << num << endl;
		}
		num ++ ;             // Updation
	}
}
