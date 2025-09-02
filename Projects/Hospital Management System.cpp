#include <iostream>
#include <fstream>
using namespace std;
	 struct PatientProfile 
	     {
            string Name ;
			string FatherName ;
			int  Age ; 
			double CNIC ;
			string Disease ;      	 	
		 };
	void AddPatient () 
	{
	PatientProfile P ;
	ofstream fout ("Patient Profile .txt" ,ios::app) ;
	cout << "Enter your name " << endl ;
	cin >> P.Name ;
	fout << P.Name ;
	cout << "Enter your father name " << endl ;
	cin >> P.FatherName ;
	fout << P.FatherName ;
    cout << "Enter your age my dear patient " << endl;
    cin >> P.Age ;
    fout << P.Age ;
     cout << "Enter your CNIC my dear patient " << endl;
    cin >> P.CNIC;
    fout << P.CNIC ;
     cout << "Enter your disease my dear patient " << endl;
    cin >> P.Disease ;
    fout << P.Disease ;
	}
	void DisplayProfile ()
	{
		PatientProfile P ;
		cout << "Name : " << P.Name << endl;
		cout << "Father Name : " << P.FatherName << endl;
		cout << "Age : " << P.Age << endl;
		cout << "CNIC : " << P.CNIC <<endl;
		cout << "Disease : " << P.Disease << endl;
		 
	}
	void  Search ()
	{
		
	}
	void UpdatingProfile ()
	{
		
	}
	void DeleteProfile ()
	{
		
	}
	void AppointementDetails ()
	{
		
	}
void PatientMenu ()
{
   	int choice ;
	cout << "Press 1 for adding new patient " << endl ;
	cout << "Press 2 for displaying profile " << endl ;
	cout << "Press 3 for searching the patient " << endl ;
	cout << "Press 4 for updating the patient  " << endl ;
	cout << "Press 5 for Delete patient profile " << endl ;
	cout << "Press 6 for Appointement details " << endl ;
	cout << "Press 7 for going to back menu " << endl ;
	cout << "Enter your Choice " << endl;
	cin >> choice ;
	switch (choice)
	{
	
	case 1 :
		AddPatient ();
		break ;
	case 2 :
		DisplayProfile ();
		break ;
	case 3 :
	    Search ();
		break ;
	case 4 :
		UpdatingProfile ();
		break ;
	case 5 :
		DeleteProfile ();
		break ;
	case 6 :
		AppointementDetails ();
		break ;
	case 7 :
	    cout << " Exit ";
		break ;
	}
}
void DoctorMenu ()
{

}
void Appointement ()
{
	
}
int main()
{
	int user_choice ;
	while (true)
	{
	cout << "Press 1 For Patient Side " << endl;
	cout << "Press 2 For Doctor Side " << endl;
	cout << "Press 3 For Appointement  " << endl;
	cout << "Press 4 For Exit " << endl;
	cout << "Enter your Choice " << endl;
	cin >> user_choice ;
	switch (user_choice)
	{
	
	case 1 :
		PatientMenu () ;
		break ;
	case 2 :
		DoctorMenu();
		break ;
	case 3 :
		Appointement ;
		break ;
	case 4 :
		cout << "You are exiting " << endl;
	}
    }
    fstream file ;
    file.open("My File.txt",ios::out) ;
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
    
}
