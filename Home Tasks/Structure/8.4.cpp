/* This program uses the structure to store employ id and salary  and then displays it on the screen */
#include <iostream>
using namespace std ;
  struct Employee_Details
  {
    int Id ;
  	int Salary ;
  };
int main()
{
	Employee_Details E ;
    cout << "Enter your Id please "	 << endl;
    cin >> E.Id ;
    cout << "Enter your salary please "	 << endl;
    cin >> E.Salary ;
    cout << "Full Details of the employ salary are " << endl;
    cout << "Employ Id " << E.Id << endl;
	cout << "Employ Salary " << E.Salary << endl;	
	return 0 ;
	
}
