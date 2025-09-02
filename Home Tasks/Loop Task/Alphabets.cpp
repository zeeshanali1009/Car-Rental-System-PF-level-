// This program displays the alphabets in the triangle form
#include <iostream>
using namespace std;
int main()
{
// Variable declaration
	int i,j,user_choice;
	char chr = 'A';
// Taking the height of the triangle from the user	
	cout << "Enter the height of triangle\n"<<endl;
	cin >> user_choice ;
// Using for loop for taking the number of rows	
	for ( i=1 ; i<= user_choice ; i++ )
	{
// using nested for loop		
		for ( j=1 ; j <=i ; j++)
		{
			cout << chr << " " ;
			chr ++ ;
		}
		cout << "\n";
	}
}
