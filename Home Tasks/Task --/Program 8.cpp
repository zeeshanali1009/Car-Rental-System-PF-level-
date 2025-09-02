// This program prints the given seris
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
// Variable declaration	
	float Number ,Limit;
// Taking input	
	cout << "Enter the Number "<<endl;
	cin >> Number ;
	cout << "Enter the limit"<<endl;
	cin >> Limit ;
// using for loop for printing series	
	for ( int i=0 ;i <= Limit ; i++)
	 {
	 	cout <<  1 <<"/" << pow ( Number,i) << " + ";
	 
	 
	 }
}
