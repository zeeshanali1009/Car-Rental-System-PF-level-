//15. Write a program to print the following pattern:
#include <iostream>
using namespace std;
int main()
{
	int i,j,k ;
	char rows , ch='A' , Ch='A';
	cout << "Enter the number of rows" <<endl;
	cin >> rows ;
	cout << "\t" << Ch << endl;
	for (i='A'; i <=rows ; i++)
	{
		for (k=rows ; k >=i ; k--)
	 {
		cout << " " ;
	 } 
	 for (j='A'; j <=i ; j++)
	 {
	 	cout << j << " ";
	 }
	 Ch = 'A' ;
	 cout << Ch ;
	 cout << endl;	
	}

}
