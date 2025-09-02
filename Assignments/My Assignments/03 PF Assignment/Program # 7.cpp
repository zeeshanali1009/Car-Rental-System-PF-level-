/*7. Write a program that uses while loops to perform the following steps: 
a. Prompt the user to input two integers: firstNum and secondNum 
(firstNum must be less than secondNum, if not then ask the user to enter 
number again). 
b. Output all odd numbers between firstNum and secondNum. 
c. Output the sum of all even numbers between firstNum and secondNum. 
d. Output the numbers and their squares between 1 and 10. 
e. Output the sum of the square of the odd numbers between firstNum 
and secondNum. 
f. Output all uppercase letters. */
#include <iostream>
using namespace std;
int main()
{
	int Num1 ,Num2 , Sum = 0  ;
	cout << "Enter the first number " <<endl;
	cin >> Num1 ;
	cout << "Enter the second  number " <<endl;
	cin >> Num2 ;
	if ( Num1 < Num2 )
	{
		cout << "Odd numbers among your given number : " <<endl;
		for (int i = Num1 ; i < Num2 ; i++ )
		{
			if ( i % 2 == 1  )
			{
				cout << i << "," ;
			}
		}
		cout << "\nEven numbers among your given number : \n" <<endl;
				for (int i = Num1 ; i < Num2 ; i++ )
		{
			if ( i % 2 == 0  )
			{
				cout << i << "," ;
				Sum = Sum + i ;
			}
		
		}
		cout << "\nSum of all even numbers among your given numbers is = \n" << Sum << endl;
		Sum =0 ;
		cout << "\nAll Numbers among your given numbers is = \n" << Sum << endl;
		for ( int i = Num1 ; i <= Num2 ; i++)
		{
			cout << i << "," ;
		}
		cout << "\nSquares of all Numbers among your given numbers is = \n" << Sum << endl;
				for ( int i = Num1 ; i <= Num2 ; i++)
		{
			cout << i*i << "," ;
		}
			for (int i = Num1 ; i < Num2 ; i++ )
		{
			if ( i % 2 == 1 )
			{
				Sum = Sum + i ;
			}
		
		}
		cout << "\nSum of all odd numbers among your given numbers is = \n" << Sum << endl;
		for ( char i = Num1 ; i < Num2 ; i++)
		{
			cout <<  i  << "," ; 
		}
	}
	else
	{
	cout << "Your first number is greater then the second number. Please enter the numbers again/n"<<endl;
	cout << "Enter the first number " <<endl;
	cin >> Num1 ;
	cout << "Enter the second  number " <<endl;
	cin >> Num2 ;
	} 
	
	
}
