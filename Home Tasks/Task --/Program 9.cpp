#include <iostream>
using namespace std;
int main()
{
	for ( int i=1 ; i <= 40 ; i=i+3)
	{
		if ( i % 2 == 0)
		{
			cout << "-" << i <<"," ;
		}
		else if ( i % 2 == 1)
		{
			cout << i << "," ;
		}
	}
	return 0 ;
}
