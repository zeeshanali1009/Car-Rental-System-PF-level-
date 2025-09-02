// This program calculates the fictorial of the given number
 #include <iostream>
using namespace std;
int main()
{
// variable decaration	
	int num,fictorial=1;
// Taking input from the user/initialization	
	cout << "Enter a number"<<endl;
	cin >> num;
// using while loop	
	while ( num > 0)   // Condition
	{
		fictorial= num * fictorial ;
		num -- ;       // Updation
	}
// Desired output	
	cout << "Fictorial of the given number is "<< fictorial;
}
