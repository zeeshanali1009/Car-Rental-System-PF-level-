#include <iostream>
using namespace std;
int main()
{
	int i,j,user_choice;
	char num = 1 ;
	cout << "Enter the height of triangle\n"<<endl;
	cin >> user_choice ;
	for ( i=1 ; i<= user_choice ; i++ )
	{
		for ( j=1 ; j <=user_choice ; j++)
		{
			cout << num << " " ;
			num ++ ;
		}
		cout << "\n";
	}
}
