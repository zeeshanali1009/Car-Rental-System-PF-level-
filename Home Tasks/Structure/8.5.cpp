/*This program uses the structure to store the different parts of a number */
#include <iostream>
using namespace std;
  struct Phone 
  {
  	int NationalCode ;
  	int AreaCode ;
  	int  Number ;
  };
  int main ()
  {
  	Phone p1 , p2 ;
  	p1.NationalCode = 92 ;
  	p1.AreaCode = 41 ;
  	p1.Number = 2344557 ;
  	cout << "Enter the National code " << endl;
  	cin >> p2.NationalCode ;
  	cout << "Enter the Area code " << endl;
  	cin >> p2.AreaCode ;
  	cout << "Enter the Number  " << endl;
  	cin >> p2.Number  ;
  	cout << "Phone number 1 : " << endl;
  	cout << "+" << p1.NationalCode << "-" << p1.AreaCode << "-" << p1.Number << endl;
  	cout << "Phone number 2 : " << endl;
  	cout << "+" << p2.NationalCode << "-" << p2.AreaCode << "-" << p2.Number << endl;
   }
