// 7. Write a program in C++ to find the sum of diagonal elements in a 2D matrix.
#include <iostream>
using namespace std;
int main()
{
	int m , n ;
	cout << "Enter the number of rows "<<endl;
	cin >> m ;
	cout << "Enter the number of coloumns "<<endl;
	cin >> n ;
    int  Addition , Array [m][n] ;
  
        for ( int i =0 ; i <m ; i++)
    {
    	for ( int j=0 ; j< n ; j++)
    	{
    	cout << "Enter the element for index [ "<<i << " ] ["<<j << " ]" <<endl;
    	cin >> Array [i][j] ;
		}
   }
   			for (int i=0 ; i < m ; i++)
	{
		for ( int j=0 ; j < n; j++)
		{
		      cout <<"[ " << Array[i][j] << " ] ";
		}
		cout << endl;
	}
    for ( int i =0 ; i <m ; i++)
    {
    	for ( int j=0 ; j< n ; j++)
    	{
    		if ( Array [i] == Array [j] )
    		{	
    	 Addition = Addition + Array[i][j] ;
            }
		}
	}
	cout << "Addition is = "<<Addition <<endl;
}
