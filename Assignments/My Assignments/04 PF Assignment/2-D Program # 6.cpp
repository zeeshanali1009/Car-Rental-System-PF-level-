//6. Write a program in C++ to multiply two 2D arrays.
#include "iostream"
using namespace std;
int main()
{
// Array declaration	
	int  Num1[3][3], Num2[3][3] ,Sum [3][3] , Multiplication , i , j
	 ;
	//int Multiplication[3][3] ;
// Array 1 initialization using for loop from the user	
	for(int i=0 ; i<3 ; i++)
	{
		for(int j=0 ; j<3 ; j++)
		{
			cout << "Enter Element for index [ "<< i <<" ]" <<" [ " << j << " ]" << " in Num1 array" <<endl ;
			cin >> Num1[i][j] ;
 		}
	}
	cout << "\n\n" <<endl;
// Array 2 initialization using for loop from the user 	
	for(int i=0 ; i<3 ; i++)
	{
		for(int j=0 ; j<3 ; j++)
		{
			cout << "Enter Element for index [ "<< i <<" ]" <<" [ " << j << " ]"  << " in num2 array" <<endl ;
			cin >> Num2[i][j] ;
 		}
	}
/* Adding both arrays and storing them in another array	
	for(int i=0 ; i<3 ; i++)
	{
		for(int j=0 ; j<3 ; j++)
		{
			Multiplication[i][j] = Num1[i][j] * Num2[i][j] ;
 		}
	}
// Displaying the sum array	
	for ( int i=0 ; i <3 ; i++)
	{
		for (int j=0 ; j < 3 ; j++)
		{
			cout << " For index [ " << i << " ]" << " [ " << j << " ] " << " = " << Multiplication[i][j] << " in Multiplication array" << endl; 
		}
	}*/
	for ( int i=0 ; i < 3 ; i++)
	{
		for ( int j=0 ; j < 3 ; j++)
		{
			cout <<" [ " << Num1 [i][j] << " ]";
		}
		cout << endl;
	}
	cout << "\n\n" <<endl;
		for ( int i=0 ; i < 3 ; i++)
	{
		for ( int j=0 ; j < 3 ; j++)
		{
			cout <<" [ " << Num2 [i][j] << " ]";
		}
		cout << endl;
	}
	for (int i=0 ; i < 3 ; i++)
	{
		for ( int j=0 ; j < 3 ; j++)
		{
			Multiplication = Num1 [i][j] * Num2[j][i] ;
			Sum[i][j] = Sum[i][j] + Multiplication ;
		}
		cout << "[ " << Sum [i][j] <<" ]" <<endl;
	}
	cout << "\n";
	for ( int i=0 ; i < 3; i++)
	{
		for ( int j =0 ; j < 3 ; j++)
		{
				cout <<" [ " << Sum [i][j] << " ]";
		}
	}
	cout << "Compiled by Zeeshan Ali"<<endl;
}
