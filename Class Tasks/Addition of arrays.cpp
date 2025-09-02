// This program Adds two arrays using another array
#include "iostream"
using namespace std;
int main()
{
// Array declaration	
	int  Num1[3][3], Num2[3][3] ;
	int Sum[3][3] ;
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
// Adding both arrays and storing them in another array	
	for(int i=0 ; i<3 ; i++)
	{
		for(int j=0 ; j<3 ; j++)
		{
			Sum[i][j] = Num1[i][j] + Num2[i][j] ;
 		}
	}
// Displaying the sum array	
	for ( int i=0 ; i <3 ; i++)
	{
		for (int j=0 ; j < 3 ; j++)
		{
			cout << " For index [ " << i << " ]" << " [ " << j << " ] " << " = " << Sum[i][j] << " in Sum array" << endl; 
		}
	}
	cout << "Compiled by Zeeshan Ali"<<endl;
}
