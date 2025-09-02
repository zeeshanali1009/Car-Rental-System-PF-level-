/*10.	Write a program that inputs five values from the user, stores them in an array and
 displays the sum and average of these values.*/
 #include <iostream>
using namespace std;
int main()
{
	int Sum = 0 ,Average , Array [5];
	for (int i=0; i < 5 ; i++)
	{
		cout << "Enter the value for [ "<< i << " ]"<<endl;
		cin >> Array [i] ;
	}
	for ( int i =0 ; i < 5 ; i++)
	{
		Sum = Sum + Array [i] ;
	}
	Average = Sum / 5 ;
	cout << "Sum of all elements of your array is = "<< Sum <<endl;
	cout << "Average of all elements of your array is = "<< Average <<endl;
	return 0 ;
}
