//This program reads any digit from 0 to 9, display in the word.
#include <iostream>
using namespace std;
int main()
{
//Variable Declaration
	int Number;
	cout << "Please Enter your number "<<endl;
	cin >> Number ;
	switch ( Number )
	{
	case 0 :
    cout << "Zero "<<endl;
    break;
    case 1 :
    cout << "One "<<endl;
    break;
    case 2 :
    cout << "Two"<<endl;
    break;
    case 3 :
    cout << "Three "<<endl;
    break;
    case 4 :
    cout << "Four "<<endl;
    break;
    case 5 :
    cout << "Five "<<endl;
    break;
    case 6 :
    cout << "Six "<<endl;
    break;
    case 7 :
    cout << "Seven "<<endl;
    break;
    case 8 :
    cout << "Eight "<<endl;
    break;
    case 9 :
    cout << "Nine "<<endl;
    break;
   }
	return 0;
}
