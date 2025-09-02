/*1. Write a program that initialize a 2-D array called doubleArray of type double. Take input for rows and columns 
from user and input 10 random values using loop in the array and display the array*/
#include <iostream>
using namespace std;
int main()
{
	int  m, n  ;
	cout << "Enter the number of rows "<<endl;
	cin >> m ;
	cout << "Enter the number of coloumns"<<endl;
	cin >> n ; 
	double  Array [m][n] ;
	for ( int i =0 ; i < 10 ; i++)
	{
	for ( int j =0 ; j < 10 ; j++)
	{
		cout << "Enter the element for index [ "<< i << " ]"<< " [ "<< j <<" ]"<<endl;
		cin >> Array [i][j] ; 
	}
    }
    	for ( int i =0 ; i < 10 ; i++)
	{
	for ( int j =0 ; j < 10 ; j++)
	{
		cout << "The element for index [ "<< i << " ]"<< " [ "<< j <<" ] = "<< Array [i][j] << endl;
	}
    }
    
}
