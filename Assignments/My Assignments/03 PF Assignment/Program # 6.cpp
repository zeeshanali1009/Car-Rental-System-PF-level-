/*. Write a program that generates a random number and asks the user to guess what the 
number is. If the user’s guess is higher than the random number, the program should 
display “Too high, try again.” If the user’s guess is lower than the random number, 
the program should display “Too low, try again” The program should use a loop that 
repeats until the user correctly guesses the random number. Also keep the count of 
number of guesses that the user makes. When the user correctly guesses the random 
number, the program should display the number of guesses*/
#include <iostream>
using namespace std;
int main()
{
	int RandomNumber,UserGuess, NumberOfGuesses = 1 ;
	RandomNumber = 34 ;
	cout << "My dear user please enter the number by making the appropriate guess"<<endl;
	cin >> UserGuess ;
	while ( UserGuess != RandomNumber )
	{
	  if ( UserGuess > RandomNumber )
	  {
	  	cout << "Too high , try again "<<endl;
	  }
	if ( UserGuess < RandomNumber )
	  {
	    cout << "Too low , try again"<<endl;	
      }
	  NumberOfGuesses++ ; 
	cout << "My dear user please enter the number by making the appropriate guess"<<endl;
	cin >> UserGuess ;
	}
	cout << "Congratulations ! You have made a correct guess."<<endl;
	cout << "You have tried " << NumberOfGuesses++ << " number of times"<<endl;
}
