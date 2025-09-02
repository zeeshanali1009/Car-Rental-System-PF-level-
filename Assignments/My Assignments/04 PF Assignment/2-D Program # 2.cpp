//2. Write a program that defines a function printArray that prints any 2-D array of type int. Having 5 elements in each 
//row, take input of number of rows from user and Print all elements in rows format.
#include <iostream>
using namespace std;
int main()
{
	int user_choice , Array [5][5];
	for (int i=0 ; i < 5 ; i++)
	{
		for ( int j=0 ; j < 5; j++)
		{
			cout << "Enter value for index [ "<< i << " ] [ "<< j << " ]"<<endl;
			cin >> Array [i][j] ;
		}
	}
		for (int i=0 ; i < 5 ; i++)
	{
		for ( int j=0 ; j < 5; j++)
		{
		      cout <<"[ " << Array [i][j] << " ] ";
		}
		cout << endl;
	}
	cout << "Enter the number of row you want to print out " <<endl;
	cin >> user_choice ;
	for ( int i = user_choice ; i <= user_choice ; i++)
	{
		for ( int j = 0  ; j < 5  ; j++)
		{
			cout <<"[ " << Array [i][j] << " ] ";
		}
		cout << endl;
    }
}
