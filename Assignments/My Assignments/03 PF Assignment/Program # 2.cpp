/* 2. Write a program to print Fibonacci series of n terms where n is input by user : 0 1 1 2 
3 5 8 13 24 .....
(10 Marks)*/
#include <iostream>
using namespace std;
int main()
{
	int user_choice , Sum = 0  ;
	cout << "Enter the limit please " << endl;
	cin >> user_choice ;
	cout << Sum <<" ";
	for ( int i = 1; i <= user_choice ; i = Sum - i )
	{
		Sum = Sum  +  i ;
		cout << Sum <<" ";
	}

}
