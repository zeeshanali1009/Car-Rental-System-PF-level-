#include <iostream>
using namespace std;
int main()
{
	int Roll_no[5],Marks[5],max=0;
	for ( int i =0 ; i < 5 ; i++)
	{
		cout << " Enter your roll no "<< endl;
		cin >> Roll_no[i];
		cout << " Enter your marks "<< endl;
		cin >> Marks[i];
	}
	for (int i = 0; i < 5; i++)
	{
		if ( Marks[i] > Marks[max] )
		{
			max  = i ;
		}
	}
	cout << "Highest marks are"<< Marks[max] <<endl;
	
}

