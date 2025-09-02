/*4. If P is the population of the first day of the year, B is the birth rate and D is the death 
rate, the estimated population at the end of the year is given by formula: 
Pn +(B*Pn)/100–(D*Pn)/100 
The population growth rate is given by the formula: 
B-D 
Write a program that prompts the user to enter the starting population, birth and death 
rates and n, the number of years. The program should then calculate and print the 
estimated population after n years. Your program must contain the following 
parameters: 
GrowthRate: Take the birth and death rates as input and returns the population 
growth rate. 
Estimated Population: Take the current population, population growth rate and n, 
the number of years as input and display the estimated population after n years. Your 
program should not accept negative birth rate, negative death rate or population less 
than 2. */
#include <iostream>
using namespace std;
int main()
{
    int P , B, D , n , Y , Growth_Rate , Population ;
	cout << "Please enter the starting population"<<endl;
	cin >> P ;
	cout << "Please enter the birth rate for your given populatin"<< endl;
	cin >> B ;
	cout << "Please enter the death rate for your given populatin"<< endl;
	cin >> D ;
	cout << "Please enter the number of years"<<endl;
	cin >> n ;
	Y = n * 365 ; 
	Growth_Rate = B - D ; 
	cout << "Population Growth Rate is given by = " << Growth_Rate ; 
	Population = ( P*Y + ( B * (P*Y)/100) - ( D * (P*Y)/100)) ; 
	cout << "\nThe estimated population at the end of "<< n << " Years will be = " << Population  ;
	 
	
}
