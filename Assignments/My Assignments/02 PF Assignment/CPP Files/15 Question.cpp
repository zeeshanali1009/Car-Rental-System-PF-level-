//Write a C program to read an amount (integer value) and break the amount into smallest 
//possible number of bank notes. Note: The possible banknotes are 500, 100, 50, 20, 10, 5, 2, and 1
#include <iostream>
using namespace std;
int main()
{
    int amount,R500,R100,R50,R20,R10,R5,R2,R1;
	cout << "Enter your amount please "<<endl;
	cin >> amount;
	     R500 = amount / 500 ;
	amount =  amount % 500 ;
	     R100 = amount / 100 ;
	amount =  amount % 100 ;
		 R50 = amount / 50 ;
	amount = amount % 50 ;
		  R20= amount / 20 ;
	amount =  amount % 20 ;
	  R10= amount / 10 ;
	amount =  amount % 10 ;
		  R5= amount/ 5 ;
	amount =  amount % 5 ;
		  R2=  amount / 2 ;
	amount =  amount % 2 ;
		  R1= amount / 1 ;
	amount =  amount % 1 ;
	cout << "500 notes are = "<< R500 <<endl; 
	cout << "100 notes are = "<< R100 <<endl; 
	cout << "50 notes are = "<< R50 <<endl; 
	cout << "20 notes are = "<< R20 <<endl; 
	cout << "10 notes are = "<< R10 <<endl; 
	cout << "5 notes are = "<< R5 <<endl; 
	cout << "2 notes are 4= "<< R2 <<endl; 
	cout << "1 notes are = " << R1 <<endl; 
	
	return 0;
	
	
	
	
	
	
	
	
	
	
	return 0;
}
