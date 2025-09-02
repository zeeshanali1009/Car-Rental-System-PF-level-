/*15. Write a program that inputs the number of rows and columns from user. It then inputs the elements to store in the 
matrix. The program calculates the sum of each row and each column and displays on the screen. If it is a square 
matrix, also calculates the sum of diagonal elements and displays on screen as:
Matrix A: Row Sum:
1 2 3 6
4 5 6 15
7 8 9 24
Column Sum: 12 15 18
Diagonal Sum: 15*/
#include <iostream>
using namespace std ;
int main()
{
	int m , n ,Sum , RowSum = 0 ,ColSum = 0,  Addition =0 ;
	cout << "Enter the number of rows of the array"<<endl;
	cin >> m ;
	cout << "Enter the number of coloumns of the array"<<endl;
	cin >> n ;
	int Number [m][n];
	for ( int i = 0 ; i < m ; i++)
	{
		for ( int j=0 ; j < n ; j++)
		{
			cout << "Enter the value for index [ " << i << " ] [ "<< j << " ]" <<endl;
			cin >> Number [i][j] ;
		}
	}
	cout << "Matrix A" << endl;
			for (int i=0 ; i < m ; i++)
	{
		for ( int j=0 ; j < n; j++)
		{
				RowSum = RowSum + Number [i][j] ;

		      cout <<" [ " << Number[i][j] << " ] "  ;
		}
		cout <<  "Row Sum = " << RowSum  << endl; 
		RowSum =0 ;

	}
		cout <<  "Coloumn  Sum = "  ;
				for (int i=0 ; i < m ; i++)
	{
		for ( int j=0 ; j < n; j++)
		{
			
				ColSum = ColSum + Number [j][i] ;
                
		}

		cout << ColSum  << " " ; 
		ColSum = 0 ;
	}
	/*	for ( int i = 0 ; i < m ; i++)
	{
		for ( int j=0 ; j < n ; j++)
		{
			Sum = Sum + Number [i][j] ;
		}
		cout << "\n\nSum of " << i +1 << " row is = "<< Sum <<endl;
		Sum =0 ;
	}
			for ( int i = 0 ; i < m ; i++)
	{
		for ( int j=0 ; j < n ; j++)
		{
			Sum = Sum + Number [j][i] ;
		}
		cout << "Sum of " << i + 1 << " coloumns  is = "<< Sum <<endl;
		Sum =0 ;
	}*/
	if ( m == n)
	{
				for ( int i = 0 ; i < m ; i++)
	{
		for ( int j=0 ; j < n ; j++)
		{
			if ( Number [i] == Number [j])
			{
				Addition = Addition + Number [i][j] ;
			}
	    }
	}
	cout << "\nSum of diagonal elements " << Addition <<endl;
    }
}
