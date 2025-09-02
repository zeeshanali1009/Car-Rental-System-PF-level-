#include <iostream>
using namespace std;
int main()
    {
	float BritishPoundPrice$=1.487,FrenchFrancPrice$=0.172,GermandeutschemarkPrice$=0.584,JapaneseYenPrice$=0.00955;
	float BritishPound,BritishPound_in_French_Franc,BritishPound_in_German_deutschemark,BritishPound_in_Japanese_Yen;
	cout <<"Enter your amount in British Pound"<<endl;
	cin>> BritishPound;
	BritishPound_in_French_Franc=(BritishPoundPrice$*FrenchFrancPrice$);
	BritishPound_in_German_deutschemark=(BritishPoundPrice$*GermandeutschemarkPrice$);
	BritishPound_in_Japanese_Yen=(BritishPoundPrice$*FrenchFrancPrice$);
	cout << "British pound in french farnc is= "<<BritishPound_in_French_Franc<<endl;
	cout <<"British pound in German deutschemark is ="<<BritishPound_in_German_deutschemark<<endl;
	cout<< "British pound in Japanese yen is = "<<BritishPound_in_Japanese_Yen<<endl;
	return 0;
    }    
