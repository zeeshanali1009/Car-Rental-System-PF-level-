/*13. Write a program to add two matrices (2-D arrays). Input the order of matrix (rows and columns) from the user. The 
matrices must be of same size to be added. Get the input for each element of the first matrix and then second matrix. 
Add the two matrices and store the values in a third matrix & display all matrices.*/
//9. Write a program in C++ to add two 2D matrices
#include "iostream"
using namespace std;
int main()
{
// Array declaration
    int  m1 , m2 , n1 ,n2 ;
    cout << "Enter the number of rows for first array"<<endl;
	cin >> m1 ;
	cout << "Enter the number of coloumn for first array"<<endl;
	cin >> n1 ;
	cout << "Enter the number of rows for second array"<<endl;
	cin >> m2 ;
	cout << "Enter the number of coloumn for second array"<<endl;
	cin >> n2 ;
	int  Num1[m1][n1], Num2[m2][n2] ;
	int Sum[m1][n1] ;
// Array 1 initialization using for loop from the user	
	for(int i=0 ; i<m1 ; i++)
	{
		for(int j=0 ; j<n1 ; j++)
		{
			cout << "Enter Element for index [ "<< i <<" ]" <<" [ " << j << " ]" << " in Num1 array" <<endl ;
			cin >> Num1[i][j] ;
 		}
	}
	cout << "\n\n" <<endl;
// Array 2 initialization using for loop from the user 	
	for(int i=0 ; i<m2 ; i++)
	{
		for(int j=0 ; j<n2 ; j++)
		{
			cout << "Enter Element for index [ "<< i <<" ]" <<" [ " << j << " ]"  << " in num2 array" <<endl ;
			cin >> Num2[i][j] ;
 		}
	}
// Adding both arrays and storing them in another array	
	for(int i=0 ; i<m1 ; i++)
	{
		for(int j=0 ; j<n1 ; j++)
		{
			Sum[i][j] = Num1[i][j] + Num2[i][j] ;
 		}
	}
// Displaying the sum array	
	for ( int i=0 ; i <m1 ; i++)
	{
		for (int j=0 ; j < n1 ; j++)
		{
			cout << " For index [ " << i << " ]" << " [ " << j << " ] " << " = " << Sum[i][j] << " in Sum array" << endl; 
		}
	}
	cout << "\n"<<endl;
		for ( int i=0 ; i <m1 ; i++)
	{
		for (int j=0 ; j < n1 ; j++)
		{
			cout << " For index [ " << i << " ]" << " [ " << j << " ] " << " = " << Num1[i][j] << " in Sum array" << endl; 
		}
	}
	cout << "\n"<<endl;
		for ( int i=0 ; i <m1 ; i++)
	{
		for (int j=0 ; j < n1 ; j++)
		{
			cout << " For index [ " << i << " ]" << " [ " << j << " ] " << " = " << Num2[i][j] << " in Sum array" << endl; 
		}
	}
	
	cout << "Compiled by Zeeshan Ali"<<endl;
}
