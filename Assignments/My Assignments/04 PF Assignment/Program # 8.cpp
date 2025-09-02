/*8.	Write a program that inputs five integers from the user and stores them in an array.
 It then displays all values in the array without using loops.*/
#include <iostream>
using namespace std;
int main()
{
	int Array [5];
	for (int i=0; i < 5 ; i++)
	{
		cout << "Enter the value for [ "<< i << " ]"<<endl;
		cin >> Array [i] ;
	}
// Now printing all array element without using loop 
    cout <<"\n\n"<< Array [0] <<endl;
    cout << Array [1] <<endl;
    cout << Array [2] <<endl;
    cout << Array [3] <<endl;
    cout << Array [4] <<endl;
    
}
