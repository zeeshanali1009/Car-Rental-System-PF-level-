//14. Write a program that inputs integer values in a 4x4 matrix and displays the sum of diagonal elements of the matrix
#include <iostream>
using namespace std;
int main()
{
    int  Addition , Array [4][4] ;
  
        for ( int i =0 ; i <4 ; i++)
    {
    	for ( int j=0 ; j< 4 ; j++)
    	{
    	cout << "Enter the element for index [ "<<i << " ] ["<<j << " ]" <<endl;
    	cin >> Array [i][j] ;
		}
   }
    for ( int i =0 ; i <4 ; i++)
    {
    	for ( int j=0 ; j< 4 ; j++)
    	{
    		if ( Array[i] == Array[j])
    	{
    	 Addition = Addition + Array[i][j] ; 
		}
	   }
	}
	cout << "Addition is = "<<Addition <<endl;
}
