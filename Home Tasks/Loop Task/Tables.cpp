#include <iostream>
using namespace std;
int main()
{
	int i,j,k,l,m;
	for ( i=1 ; i<=5 ; i++)
	{
		cout << i <<"\t";
	}
	cout << endl;
	for ( j=1 ; j<=10 ; j++)
	{
		if ( j% 2== 0)
		{
			cout << j <<"\t";
		}
	
	}
		cout << endl;
		for ( k=1 ; k<=15 ; k++)
	{
		if ( k% 3== 0)
		{
			cout << k << "\t" ;
		}
	}
		cout << endl;
		for ( l=1 ; l<=20 ; l++)
	{
		if ( l% 4== 0)
		{
			cout << l <<"\t";
		}
	}
		cout << endl;
		for ( m=1 ; m<=25 ; m++)
	{
		if ( m% 5== 0)
		{
			cout << m << "\t";
		}
	}
		cout << endl;
}
