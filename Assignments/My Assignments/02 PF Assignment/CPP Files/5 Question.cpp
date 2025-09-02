//This program takes an amount in dollars and then displays it into given four currencies 
//other monetary units.
#include <iostream>
using namespace std;
int main()
    {
//Variables Declaration
	float BritishPoundPrice$=1.487,FrenchFrancPrice$=0.172,GermandeutschemarkPrice$=0.584,JapaneseYenPrice$=0.00955;
	float Amount_in_dollars,Dollars_in_British_Pound,Dollars_in_French_Franc,Dollars_in_German_deutschemark,Dollars_in_Japanese_Yen;
	cout <<"Enter your amount in Dollars"<<endl;
	cin>> Amount_in_dollars;
//Logic of the program
	Dollars_in_British_Pound=(Amount_in_dollars*BritishPoundPrice$);
	Dollars_in_French_Franc=(Amount_in_dollars*FrenchFrancPrice$);
	Dollars_in_German_deutschemark=(Amount_in_dollars*GermandeutschemarkPrice$);
	Dollars_in_Japanese_Yen=(Amount_in_dollars*FrenchFrancPrice$);
	cout << "Dollars in british pound is= "<<Dollars_in_British_Pound<<endl;
	cout << "Dollars in french farnc is= "<<Dollars_in_French_Franc<<endl;
	cout <<"Dollars in German deutschemark is ="<<Dollars_in_German_deutschemark<<endl;
	cout<< "Dollars in Japanese yen is = "<<Dollars_in_Japanese_Yen<<endl;
	return 0;
    }    
