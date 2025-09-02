// This program calculates the number of cookies in a box and number of boxes in a container
#include <iostream>
using namespace std;
int main()
{
// Variable Declarations	
	int totalCookies,boxCookies,containerBoxes,totalBoxes,totalContainer,remainingboxes;
// Taking all the input from the user	
	cout <<  "Enter number of total cookies"<<endl;
	cin  >> totalCookies;
	cout <<  "Enter number of cookies in a box "<<endl;
	cin  >> boxCookies;
	cout << "Enter the number of boxes in the container"<<endl;
	cin >> containerBoxes;
// Logic of the program	
	totalBoxes =  totalCookies / boxCookies ;
	cout << "Number of boxes are "<< totalBoxes <<endl;
	remainingboxes = totalCookies % totalBoxes ;
	cout << "Number of boxes left "<< remainingboxes <<endl;
	totalContainer = totalBoxes /containerBoxes ; 
	cout <<" Number of container required are "<< totalContainer<<endl;
	  
	return 0;
}
