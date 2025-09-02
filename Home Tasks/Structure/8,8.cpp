/* This uses the structures to store the marks of five different subjects and then find the total and average of the marks */
#include <iostream>
using namespace std ;
   struct Student 
   {
   	int Roll_No ;
   	int Marks [5] ;
   };
   int main()
   {
   	   int Average , Sum  ;
   	Student r ;
   cout << "Enter your roll no " << endl;
   cin >> r.Roll_No ;
   for ( int i =0 ; i <5 ; i++)
   {
   	cout << "Enter your marks " << endl;
	cin >> r.Marks[i] ; 
	Sum = Sum + r.Marks[i] ; 
   }
 
   Average = Sum / 5 ;
   cout << "Roll no " << r.Roll_No << endl;
   cout << "Total Marks "  << Sum << endl;
   cout << "Average " << Average << endl;
   }
