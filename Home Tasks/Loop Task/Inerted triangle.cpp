#include <iostream>
using namespace std;
int main()
{
	int i,j,k,a=1;
	for ( i=1 ; i<= 6 ; i++ )
	{
		for ( j=1; j<=i ; j++)
		{
			cout << "  ";
		}
		for ( k=6 ; k>=i ; k--)
		{
			cout << a++ << " " ;
		}
	      a=1;
		cout << endl;
	}
	return 0;
}
