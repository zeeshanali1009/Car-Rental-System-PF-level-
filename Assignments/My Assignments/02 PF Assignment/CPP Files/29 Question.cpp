//This program  finds the eligibility of admission for a professional course based on the 
//following criteria:
//Eligibility Criteria: Marks in Math’s >= 65 and Marks in Phy >=55 and Marks in Chem>=50
#include <iostream>
using namespace std;
int main()
{
//Variable Declaration
	int MathMarks,PhyMarks,ChemMarks;
	cout <<"Enter your marks in Math"<<endl;
	cin >> MathMarks;
		cout <<"Enter your marks in Physics"<<endl;
	cin >> PhyMarks;
		cout <<"Enter your marks in Chemistry"<<endl;
	cin >> ChemMarks;
//Using if else statement
	if ( MathMarks >=65 && PhyMarks>=55 && ChemMarks >=50 )
	{
	cout <<"You are eligible for admission"<<endl;
	}
	else
	{
		cout <<"You are not eligible"<<endl;
	}
	return 0;
}
