//14. Write a program to print the following 
#include <iostream>
using namespace std;
int main()
{
	int i,j,k ;
	char rows , ch='A' ;
	cout << "Enter the number of rows" <<endl;
	cin >> rows ;
	for (i='A'; i <=rows ; i++)
	{
		for (k=rows ; k >=i ; k--)
	 {
		cout << " " ;
	 } 
	 for (j='A'; j <=i ; j++)
	 {
	 	cout << j ;
	 }
	 cout << endl;	
	}

}
