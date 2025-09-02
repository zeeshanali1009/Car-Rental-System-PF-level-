/*Write a program that uses 4 arrays “numbers, squares, cubes, sums” each consisting of 5 elements. The “numbers” 
array stores the values of its indexes, the “squares” array stores the squares of its indexes, the “cubes” array stores 
the cubes of its indexes and the “sums” array stores the sum of corresponding indexes of these three arrays. The 
program should display the values of all arrays and the total of all values in sums array.*/
#include <iostream>
using namespace std;
int main()
{
	int Numbers[5],Squares[5],Cubes[5],Sum[5],Addition = 0;
	for ( int i=0 ; i <5 ; i++)
	{
		Numbers[i] = i ;
		
	}
		cout << "Number array consist of elements : " <<endl;
	for ( int i =0 ; i < 5 ; i++)
	{
	    cout << " " << Numbers [i] ;
	}
		for ( int i=0 ; i <5 ; i++)
	{
		Squares[i] = i * i ;
		
	}
		cout << "\nSquare array consist of elements : " <<endl;
		for ( int i =0 ; i < 5 ; i++)
	{
	    cout << " "<< Squares [i] ;
	}
		for ( int i=0 ; i <5 ; i++)
	{
		Cubes[i] = i * i * i ;
		
	}
		cout << "\nCubes array consist of elements : " <<endl;
		for ( int i =0 ; i < 5 ; i++)
	{
	    cout << " "<< Cubes [i] ;
	}
	   for ( int i=0 ; i <5 ; i++ )
	   {
	   	Sum [i] = Numbers[i] + Squares[i] + Cubes [i] ; 
	   }
	   cout << "\nSum series is : "<<endl;
	   for ( int i =0 ; i <5 ; i++)
	   {
	   	cout <<" " << Sum [i]  ;
	   }
	   for ( int i=0 ; i< 5 ; i++)
	   {
	   	Addition = Addition + Sum[i] ;
	   }
	   cout << " \nSum of Series is = "<< Addition ;
}
