/* Thios program uses the structure to store marks and grades the assign all that to other one and then displays both of them */
#include <iostream>
using namespace std;
   struct StudentMarks 
   {
   	int Marks ;
   	char Grades ;
   };
   int main()
   {
   	StudentMarks a ,b ;
   	cout << "Enter the marks " << endl;
   	cin >> a.Marks ;
   	cout << "Enter the grades " << endl;
   	cin >> a.Grades ;
   	b =a  ; 
   	cout << "Details of the 1st studen are " << endl; 
   	cout  << "Marks " << a.Marks  << endl;
   	cout  << "Grades " << a.Grades  << endl;
   	cout << "Details of the 2nd  studen are " << endl; 
   	cout  << "Marks " << b.Marks  << endl;
   	cout  << "Grades " << b.Grades  << endl;
   	return 0 ;
   }
