/*13. Write a program to find the factorial of a given number. Continue to repeatedly asks 
for a number and calculates its factorial, until the user enters 0, at which point it 
terminates.*/ 
 #include <iostream>
using namespace std;
int main()
{
	int  Fictorial = 1 , user_choice ;
	cout << "Enter the number for which you want to find the factorial of the number " <<endl;
	cin >> user_choice ;	
    while ( user_choice != 0 )
    {
    	for ( int i = 1 ; i <=user_choice ; i++)
    	{
    		Fictorial =  Fictorial * i  ;
		}
		cout << "Fictorial is = " << Fictorial <<endl;
	cout << "Enter the number for which you want to find the factorial of the number " <<endl;
	cin >> user_choice ;	
	}
	//cout << "Fictorial is = " << Fictorial <<endl;
}

