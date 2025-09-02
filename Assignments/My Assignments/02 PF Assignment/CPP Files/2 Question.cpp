#include <iostream>
using namespace std;
int main()
{
	string First_Subject,Second_Subject,Third_Subject,Fourth_Subject,Fifth_Subject;
	int Total_Marks_In_First_Subject,Obtained_Marks_In_First_Subject;
	int Total_Marks_In_Second_Subject,Obtained_Marks_In_Second_Subject;
	int Total_Marks_In_Third_Subject,Obtained_Marks_In_Third_Subject;
	int Total_Marks_In_Fourth_Subject,Obtained_Marks_In_Fourth_Subject;
	int Total_Marks_In_Fifth_Subject,Obtained_Marks_In_Fifth_Subject;
	int Max_Total;
	int Full_Obtained_Marks;
	int Percentage;
	cout <<"Enter name of first subject"<<endl;
	cin >> First_Subject;
	cout <<"Enter total marks of this subject"<<endl;
	cin >> Total_Marks_In_First_Subject;
	cout <<"Enter your obtaied marks in this subject"<<endl;
	cin >> Obtained_Marks_In_First_Subject;
	cout <<"Enter name of second subject"<<endl;
	cin >> Second_Subject;
	cout <<"Enter total marks of this subject"<<endl;
	cin >> Total_Marks_In_Second_Subject;
	cout <<"Enter your obtaied marks in this subject"<<endl;
	cin >> Obtained_Marks_In_Second_Subject;
	cout <<"Enter name of third subject"<<endl;
	cin >> Third_Subject;
	cout <<"Enter total marks of this subject"<<endl;
	cin >> Total_Marks_In_Third_Subject;
	cout <<"Enter your obtaied marks in this subject"<<endl;
	cin >> Obtained_Marks_In_Third_Subject;
	cout <<"Enter name of fourth subject"<<endl;
	cin >> Fourth_Subject;
	cout <<"Enter total marks of this subject"<<endl;
	cin >> Total_Marks_In_Fourth_Subject;
	cout <<"Enter your obtaied marks in this subject"<<endl;
	cin >> Obtained_Marks_In_Fourth_Subject;
	cout <<"Enter name of fifth subject"<<endl;
	cin >> Fifth_Subject;
	cout <<"Enter total marks of this subject"<<endl;
	cin >> Total_Marks_In_Fifth_Subject;
	cout <<"Enter your obtaied marks in this subject"<<endl;
	cin >> Obtained_Marks_In_Fifth_Subject;
	Max_Total = Total_Marks_In_First_Subject + Total_Marks_In_Second_Subject + Total_Marks_In_Third_Subject +
	Total_Marks_In_Fourth_Subject + Total_Marks_In_Fifth_Subject;
	Full_Obtained_Marks = Obtained_Marks_In_First_Subject + Obtained_Marks_In_Second_Subject + Obtained_Marks_In_Third_Subject +
	Obtained_Marks_In_Fourth_Subject + Obtained_Marks_In_Fifth_Subject;
	Percentage = (Full_Obtained_Marks/Max_Total);
	
	cout <<"\t*****************************************************************************************************"<<endl;
	cout <<"\t* Subjects\t\t\t\tMax.Marks\t\t\t\tObtained marks\t    *"<<endl;
	cout <<"\t*****************************************************************************************************"<<endl;
	cout <<"\t* "<<First_Subject<<"\t\t\t\t\t"<<Total_Marks_In_First_Subject<<"\t\t\t\t\t"
	<<Obtained_Marks_In_First_Subject<<"\t    *"<<endl;
	cout <<"\t* "<<Second_Subject<<"\t\t\t\t\t"<<Total_Marks_In_Second_Subject<<"\t\t\t\t\t"
	<<Obtained_Marks_In_Second_Subject<<"\t    *"<<endl; 
	cout <<"\t* "<<Third_Subject<<"\t\t\t\t\t"<<Total_Marks_In_Third_Subject<<"\t\t\t\t\t"
	<<Obtained_Marks_In_Third_Subject<<"\t    *"<<endl; 
	cout <<"\t* "<<Fourth_Subject<<"\t\t\t\t\t"<<Total_Marks_In_Fourth_Subject<<"\t\t\t\t\t"
	<<Obtained_Marks_In_Fourth_Subject<<"\t    *"<<endl;
	cout <<"\t* "<<Fifth_Subject<<"\t\t\t\t\t"<<Total_Marks_In_Fifth_Subject<<"\t\t\t\t\t"
	<<Obtained_Marks_In_Fifth_Subject<<"\t    *"<<endl; 
	cout <<"\t*****************************************************************************************************"<<endl;
	cout <<"\t*  Max Total  \t\t\t\t\t "<<Max_Total<<" \t\tObtained Marks\t\t "<<Full_Obtained_Marks<<"\t    *"<<endl; 
	cout <<"\t*****************************************************************************************************"<<endl;
	cout <<"\t* \t\t\t\t\t\t\t\tPercentage\t\t "<<Percentage<<"          *"<<endl;
	cout <<"\t*****************************************************************************************************"<<endl;
	
	
	
	return 0;
}
