#include <iostream>
#include <fstream>
#include <conio.h>
#include <string>
using namespace std;
string  N; 
int T ;
	struct Cust
	{
		string Name ;
		int Time;
		
	};
	void Customer()
	{
		Cust p ;
		cout << "Enter your Name " << endl;
		cin >> p.Name ;
		N = p.Name ;
		cout << "Enter the time for which you want to take your car on rent" << endl;
		cin >> p.Time ;
		T = p.Time ;
	
	}
 
 void AllCars ()
{
	cout << "__________________________________ Cars Availability ________________________________ " << endl;
	cout << "Cars available in our centre are " << endl;
	cout << "1. Toyata Corolla\t\t\t\t\t 10.Toyata Honda BRV" << endl;
	cout << "2. Civic\t\t\t\t\t\t 11.Land Cruiser" << endl;
	cout << "3. City\t\t\t\t\t\t\t 12.Fortuner" << endl;
	cout << "4. Yaris\t\t\t\t\t\t 13.Mercedes" << endl;
	cout << "5. Alto\t\t\t\t\t\t\t 14.Audi" << endl;
	cout << "6. Wagoner" << endl;
	cout << "7. Cultus" << endl;
	cout << "8. Kia Sportage" << endl;
	cout << "9. Changan Alsvin" << endl;
	cout << "Model Range " << endl;
	cout << "1. 2005 - 2010 " << "\n2. 2011 - 2015 " << "\n3. 2016 - 2020 " << "\n3. 2021 - 2023 "  << endl;
	cout << "_____________________________________________________________________________________ " << endl;

}
void CarsPrice ()
{
	cout << "--------------------------------------- Price Menu -------------------------------------------- " << endl;
	cout << "--------------------------------------For Model Range  2005 - 2010-----------------------------" << endl;
	cout << "Cars\t\t\t Price per Hour \t\t\t Price per Day" << endl;
	cout << "Toyota Corolla \t\t 200 \t\t\t\t\t\t4800" << endl;
	cout << "Civic \t\t\t 300 \t\t\t\t\t\t7200" << endl;
	cout << "City \t\t\t 250 \t\t\t\t\t\t6000" << endl;
    cout << "Yaris\t\t\t 200 \t\t\t\t\t\t4800" << endl;
    cout << "Alto\t\t\t 100 \t\t\t\t\t\t2400" << endl;
	cout << "Wagoner\t\t\t 150 \t\t\t\t\t\t3600" << endl;
	cout << "Cultus\t\t\t 160 \t\t\t\t\t\t3840" << endl;
	cout << "Kia Sportage\t\t 400 \t\t\t\t\t\t9600" << endl;
	cout << "Changan Alsvin\t\t 270 \t\t\t\t\t\t6480" << endl;
	cout << "Toyata Honda BRV\t 350 \t\t\t\t\t\t8400" << endl;
	cout << "Land Cruiser \t\t 500 \t\t\t\t\t\t12000" << endl;
	cout << "Fortuner \t\t 550 \t\t\t\t\t\t13200" << endl;
	cout << "Mercedes\t\t 700 \t\t\t\t\t\t16800" << endl;
	cout << "Audi \t\t\t 800 \t\t\t\t\t\t17200" << endl;
	cout << "----------------------- For Model Range  2010 - 2015  and 2016 - 2020 --------------------------" << endl;
	cout << "Cars\t\t\t Price per Hour \t\t\t Price per Day" << endl;
	cout << "Toyota Corolla \t\t 225 \t\t\t\t\t\t5400" << endl;
	cout << "Civic \t\t\t 325 \t\t\t\t\t\t7800" << endl;
	cout << "City \t\t\t 275 \t\t\t\t\t\t6600" << endl;
    cout << "Yaris\t\t\t 225 \t\t\t\t\t\t5400" << endl;
    cout << "Alto\t\t\t 125 \t\t\t\t\t\t3000" << endl;
	cout << "Wagoner\t\t\t 175 \t\t\t\t\t\t4200" << endl;
	cout << "Cultus\t\t\t 185 \t\t\t\t\t\t4440" << endl;
	cout << "Kia Sportage\t\t 425 \t\t\t\t\t\t10200" << endl;
	cout << "Changan Alsvin\t\t 295 \t\t\t\t\t\t7080" << endl;
	cout << "Toyata Honda BRV\t 375 \t\t\t\t\t\t9000" << endl;
	cout << "Land Cruiser \t\t 525 \t\t\t\t\t\t12600" << endl;
	cout << "Fortuner \t\t 575 \t\t\t\t\t\t13800" << endl;
	cout << "Mercedes\t\t 725 \t\t\t\t\t\t17400" << endl;
	cout << "Audi \t\t\t 825 \t\t\t\t\t\t17800" << endl;
	cout << "-------------------------------- For Model Range  2021 - 2023 ----------------------------------" << endl;
	cout << "Cars\t\t\t Price per Hour \t\t\t Price per Day" << endl;
	cout << "Toyota Corolla \t\t 250 \t\t\t\t\t\t6000" << endl;
	cout << "Civic \t\t\t 350 \t\t\t\t\t\t8400" << endl;
	cout << "City \t\t\t 300 \t\t\t\t\t\t7200" << endl;
    cout << "Yaris\t\t\t 250 \t\t\t\t\t\t6000" << endl;
    cout << "Alto\t\t\t 150 \t\t\t\t\t\t3600" << endl;
	cout << "Wagoner\t\t\t 175 \t\t\t\t\t\t4800" << endl;
	cout << "Cultus\t\t\t 210 \t\t\t\t\t\t5040" << endl;
	cout << "Kia Sportage\t\t 450 \t\t\t\t\t\t10800" << endl;
	cout << "Changan Alsvin\t\t 320 \t\t\t\t\t\t7680" << endl;
	cout << "Toyata Honda BRV\t 400 \t\t\t\t\t\t9600" << endl;
	cout << "Land Cruiser \t\t 550 \t\t\t\t\t\t13200" << endl;
	cout << "Fortuner \t\t 600 \t\t\t\t\t\t14600" << endl;
	cout << "Mercedes\t\t 750 \t\t\t\t\t\t18000" << endl;
	cout << "Audi \t\t\t 850 \t\t\t\t\t\t18400" << endl;
	cout << "------------------------------------------------------------------------------------------------" << endl;
}
void MakeChoice () 
{
		ofstream fout ("Customer Details .txt" ,ios::app) ;
	int Selection_Choice , Model_Choice  ;
	cout << "1. Selecting Cars"<< endl;
	cin >> Selection_Choice ;
	switch (Selection_Choice)
	{
	case 1 :
	int Car_Choice  , Time ;
	cout << "-----------------------Available Cars --------------------------------" << endl;
	cout << "1. For Toyata Corolla" << endl;
	cout << "2. For Civic" << endl;
	cout << "3. For City" << endl;
	cout << "4. For Yaris" << endl;
	cout << "5. For Alto" << endl;
	cout << "6. For Wagoner" << endl;
	cout << "7. For Cultus" << endl;
	cout << "8. For Kia Sportage" << endl;
	cout << "9. For Changan Alsvin" << endl;
	cout << "10. For Toyata Honda BRV" << endl;
	cout << "11. For Land Cruiser" <<endl;
	cout << "12. For Fortuner" << endl;
	cout << "13. For Mercedes" << endl;
	cout << "14. For Audi" << endl;
	cout << "----------------------------------------------------------------------" << endl;
	cout << "Choose any of the above given cars for taking on the rent." << endl;
	cin >> Car_Choice ;
	cout << "-----------------------Available Models --------------------------------" << endl;
	cout << "1. for 2005 - 2010 Modek range " << endl;
	cout << "2. for 2011 - 2015 Modek range " << endl;
	cout << "3. for 2016 - 2020 Modek range " << endl;
	cout << "4. for 2021 - 2023 Modek range " << endl;
	cout << "------------------------------------------------------------------------" << endl;
	cout << "Make Choice regarding model range " << endl ;
	cin >> Model_Choice ;
	switch (Car_Choice)
	{
		case 1 :
		cout << "You have selected Toyota Corolla " << endl;
		cout << "Its price menu is as follow " << endl;
		if (Model_Choice == 1 )
		{
		cout << "\nCars\t\t\t Price per Hour \t\t\t Price per Day" << endl;
	    cout << "Toyota Corolla \t\t 200 \t\t\t\t\t\t4800" << endl;
	    cout << "\n----------------------------- Booking Details ------------------------------" << endl;
	    cout << "Name : " << N << endl;
	    fout << N << endl;
		cout << "Car choosed : " <<  "Toyota Corolla" << endl;
		fout << "Toyota Corolla " << endl;
		cout << "Model Range : " <<   "2005 - 2010" << endl;
		fout << " Model Range   :   2005 - 2010" << endl;
		cout << "Your Payable amount will be " << T * 200  << endl;
		fout << T * 200 << endl;
		cout << "----------------------------------------------------------------------------" << endl;
		cout << "Car Added Successfully. Enjoy your journey our dear customer  " << endl;
	    }
	    else if (( Model_Choice ==2  ) || ( Model_Choice ==3  ))
	    {
	    cout << "\nCars\t\t\t Price per Hour \t\t\t Price per Day" << endl;
	    cout << "Toyota Corolla \t\t 225 \t\t\t\t\t\t5400" << endl;
	    cout << "\n----------------------------- Booking Details ------------------------------" << endl;
	    cout << "Name : " << N << endl;
	    fout << N ;
		cout << "Car choosed : " <<  "Toyota Corolla" << endl;
		fout << "Toyota Corolla " ;
		cout << "Model Range : " <<   "2011 - 2015 __ 2016 - 2020 " << endl;
		fout << "Model Range :  2011 - 2015 __ 2016 - 2020" << endl;
		cout << "Your Payable amount will be " << T * 225  << endl;
		fout << T *225 << endl;
		cout << "----------------------------------------------------------------------------" << endl;
		cout << "Car Added Successfully. Enjoy your journey our dear customer  " << endl;
		}
		else 
		{
		cout << "\nCars\t\t\t Price per Hour \t\t\t Price per Day" << endl;
		cout << "Toyota Corolla \t\t 250 \t\t\t\t\t\t6000" << endl;
		cout << "\n----------------------------- Booking Details ------------------------------" << endl;
	    cout << "Name : " << N << endl;
	    fout  << N << endl;
		cout << "Car choosed : " <<  "Toyota Corolla" << endl;
		fout << "Toyota Corolla " << endl;
		cout << "Model Range : " <<   "2021 - 2023" << endl;
		fout << "Model Range  :  2021 - 2023" << endl;
		cout << "Your Payable amount will be " << T * 250  << endl;
		fout << T * 250 << endl;
		cout << "----------------------------------------------------------------------------" << endl;
		cout << "Car Added Successfully. Enjoy your journey our dear customer  " << endl;
		}
		break ;
	    case 2 :
        cout << "You have selected for Civic " << endl;
		cout << "Its price menu is as follow " << endl;
			if (Model_Choice == 1 )
			{
		cout << "\nCars\t\t\t Price per Hour \t\t\t Price per Day" << endl;
	    cout << "Civic \t\t\t 300 \t\t\t\t\t\t7200" << endl;
	    	cout << "\n----------------------------- Booking Details ------------------------------" << endl;
	    cout << "Name : " << N << endl;
	    fout << N << endl;
		cout << "Car choosed : " <<  "Civic" << endl;
		fout << "Civic " << endl;
		cout << "Model Range : " <<   "2005 - 2010" << endl;
		fout << "Model Range : " <<   "2005 - 2010" << endl;
		cout << "Your Payable amount will be " << T * 300  << endl;
		fout << T * 300 << endl;
		cout << "----------------------------------------------------------------------------" << endl;
		cout << "Car Added Successfully. Enjoy your journey our dear customer  " << endl;
	        }
	        else if (( Model_Choice ==2  ) || ( Model_Choice ==3  ))
	    {
	    cout << "\nCars\t\t\t Price per Hour \t\t\t Price per Day" << endl;
	  	cout << "Civic \t\t\t 325 \t\t\t\t\t\t7800" << endl;
	  		cout << "\n----------------------------- Booking Details ------------------------------" << endl;
	    cout << "Name : " << N << endl;
	    fout << N << endl;
		cout << "Car choosed : " <<  "Civic" << endl;
		fout << "Civic " << endl;
		cout << "Model Range : " <<   "2011 - 2015 __ 2016 - 2020 " << endl;
		fout << "Model Range : " <<   "2011 - 2015 __ 2016 - 2020 " << endl;
		cout << "Your Payable amount will be " << T * 325  << endl;
		fout <<  T * 325 << endl;
		cout << "----------------------------------------------------------------------------" << endl;
		cout << "Car Added Successfully. Enjoy your journey our dear customer  " << endl;
		}
		     else 
		{
		cout << "\nCars\t\t\t Price per Hour \t\t\t Price per Day" << endl;
	    cout << "Civic \t\t\t 350 \t\t\t\t\t\t8400" << endl;
	    	cout << "\n----------------------------- Booking Details ------------------------------" << endl;
	    cout << "Name : " << N << endl;
	    fout << N << endl;
		cout << "Car choosed : " <<  "Civic" << endl;
		fout << "Civic " << endl;
		cout << "Model Range : " <<   "2021 - 2023" << endl;
		fout <<  "Model Range : " <<   "2021 - 2023" << endl;
		cout << "Your Payable amount will be " << T * 350  << endl;
		fout <<  T * 350  << endl;
		cout << "----------------------------------------------------------------------------" << endl;
		cout << "Car Added Successfully. Enjoy your journey our dear customer  " << endl;
	    }
	    break ;
	    case 3 :
	    cout << "You have selected City " << endl;
		cout << "Its price menu is as follow " << endl;
			if (Model_Choice == 1 )
			{
		cout << "\nCars\t\t\t Price per Hour \t\t\t Price per Day" << endl;
	    cout << "City \t\t\t 250 \t\t\t\t\t\t6000" << endl;
	    	cout << "\n----------------------------- Booking Details ------------------------------" << endl;
	    cout << "Name : " << N << endl;
	    fout << N << endl;
		cout << "Car choosed : " <<  "City" << endl;
		fout << "City " << endl;
		cout << "Model Range : " <<   "2005 - 2010" << endl;
		fout << "Model Range : " <<   "2005 - 2010" << endl;
		cout << "Your Payable amount will be " << T * 250  << endl;
		cout << T * 250 << endl;
		cout << "----------------------------------------------------------------------------" << endl;
		cout << "Car Added Successfully. Enjoy your journey our dear customer  " << endl;
	       }
	       	else if (( Model_Choice ==2  ) || ( Model_Choice ==3  ))
	    {
	    cout << "\nCars\t\t\t Price per Hour \t\t\t Price per Day" << endl;
	    cout << "City \t\t\t 275 \t\t\t\t\t\t6600" << endl;
	    	  	cout << "\n----------------------------- Booking Details ------------------------------" << endl;
	    cout << "Name : " << N << endl;
	    fout << N << endl;
		cout << "Car choosed : " <<  "City" << endl;
		cout << "Model Range : " <<   "2011 - 2015 __ 2016 - 2020 " << endl;
		fout << "Model Range : " <<   "2011 - 2015 __ 2016 - 2020 " << endl;
		cout << "Your Payable amount will be " << T * 275  << endl;
		fout << T * 275 << endl;
		cout << "----------------------------------------------------------------------------" << endl;
		cout << "Car Added Successfully. Enjoy your journey our dear customer  " << endl;
		}
		    else 
		{
		cout << "\nCars\t\t\t Price per Hour \t\t\t Price per Day" << endl;
        cout << "City \t\t\t 300 \t\t\t\t\t\t7200" << endl;
        	cout << "\n----------------------------- Booking Details ------------------------------" << endl;
	    cout << "Name : " << N << endl;
	    fout << N << endl;
		cout << "Car choosed : " <<  "City" << endl;
		cout << "Model Range : " <<   "2021 - 2023" << endl;
		fout << "Model Range : " <<   "2021 - 2023" << endl;
		cout << "Your Payable amount will be " << T * 300  << endl;
		fout << T * 300  << endl;
		cout << "----------------------------------------------------------------------------" << endl;
		cout << "Car Added Successfully. Enjoy your journey our dear customer  " << endl;
	    }
	    break ;
	    case 4 :
	    cout << "You have selected Yaris " << endl;
		cout << "Its price menu is as follow " << endl;
			if (Model_Choice == 1 )
			{
		cout << "\nCars\t\t\t Price per Hour \t\t\t Price per Day" << endl;
	    cout << "Yaris\t\t\t 200 \t\t\t\t\t\t4800" << endl;
	    	cout << "\n----------------------------- Booking Details ------------------------------" << endl;
	    cout << "Name : " << N << endl;
	    fout << N << endl;
		cout << "Car choosed : " <<  "Yaris" << endl;
		fout << "Yaris " << endl;
		cout << "Model Range : " <<   "2005 - 2010" << endl;
		fout << "Model Range : " <<   "2005 - 2010" << endl;
		cout << "Your Payable amount will be " << T * 200  << endl;
		fout << T * 200 << endl;
		cout << "----------------------------------------------------------------------------" << endl;
		cout << "Car Added Successfully. Enjoy your journey our dear customer  " << endl;
	        }
	        else if (( Model_Choice ==2  ) || ( Model_Choice ==3  ))
	    {
	    cout << "\nCars\t\t\t Price per Hour \t\t\t Price per Day" << endl;
	    cout << "Yaris\t\t\t 225 \t\t\t\t\t\t5400" << endl;
	    	cout << "\n----------------------------- Booking Details ------------------------------" << endl;
	    cout << "Name : " << N << endl;
	    fout << N << endl;
		cout << "Car choosed : " <<  "Yaris" << endl;
		fout << "Yaris " << endl;
		cout << "Model Range : " <<   "2011 - 2015 __ 2016 - 2020 " << endl;
		fout << "Model Range : " <<   "2011 - 2015 __ 2016 - 2020 " << endl;
		cout << "Your Payable amount will be " << T * 225  << endl;
		fout <<  T * 225 << endl;
		cout << "----------------------------------------------------------------------------" << endl;
		cout << "Car Added Successfully. Enjoy your journey our dear customer  " << endl;
		}
		    else 
		{
		cout << "\nCars\t\t\t Price per Hour \t\t\t Price per Day" << endl;
        cout << "Yaris\t\t\t 250 \t\t\t\t\t\t6000" << endl;
            cout << "\n----------------------------- Booking Details ------------------------------" << endl;
	    cout << "Name : " << N << endl;
	    fout << N << endl;
		cout << "Car choosed : " <<  "Yaris" << endl;
		fout << "Yaris " << endl;
		cout << "Model Range : " <<   "2021 - 2023" << endl;
		fout << "Model Range : " <<   "2021 - 2023" << endl;
		cout << "Your Payable amount will be " << T * 250  << endl;
		fout <<  T * 250 << endl ;
		cout << "----------------------------------------------------------------------------" << endl;
		cout << "Car Added Successfully. Enjoy your journey our dear customer  " << endl;
        }
	    break ;
	    case 5 :
	    cout << "You have selected Alto " << endl;
		cout << "Its price menu is as follow " << endl;
			if (Model_Choice == 1 )
			{
		cout << "\nCars\t\t\t Price per Hour \t\t\t Price per Day" << endl;
	    cout << "Alto\t\t\t 100 \t\t\t\t\t\t2400" << endl;
	    	cout << "\n----------------------------- Booking Details ------------------------------" << endl;
	    cout << "Name : " << N << endl;
	    fout << N << endl;
		cout << "Car choosed : " <<  "Alto" << endl;
		fout << "Alto " << endl;
		cout << "Model Range : " <<   "2005 - 2010" << endl;
		fout << "Model Range : " <<   "2005 - 2010" << endl;
		cout << "Your Payable amount will be " << T * 100  << endl;
		fout <<  T * 100  << endl;
		cout << "----------------------------------------------------------------------------" << endl;
		cout << "Car Added Successfully. Enjoy your journey our dear customer  " << endl;
	        }
	        else if (( Model_Choice ==2  ) || ( Model_Choice ==3  ))
	    {
	    cout << "\nCars\t\t\t Price per Hour \t\t\t Price per Day" << endl;
	    cout << "Alto\t\t\t 125 \t\t\t\t\t\t3000" << endl;
	    	    cout << "\n----------------------------- Booking Details ------------------------------" << endl;
	    cout << "Name : " << N << endl;
	    fout << N << endl;
		cout << "Car choosed : " <<  "Alto" << endl;
		fout << "Alto " << endl;
		cout << "Model Range : " <<   "2011 - 2015 __ 2016 - 2020 " << endl;
		fout << "Model Range : " <<   "2011 - 2015 __ 2016 - 2020 " << endl;
		cout << "Your Payable amount will be " << T * 125  << endl;
		fout << T * 125  << endl;
		cout << "----------------------------------------------------------------------------" << endl;
		cout << "Car Added Successfully. Enjoy your journey our dear customer  " << endl;
		}
		    else 
		{
		cout << "\nCars\t\t\t Price per Hour \t\t\t Price per Day" << endl;
            cout << "Alto\t\t\t 150 \t\t\t\t\t\t3600" << endl;
            		cout << "\n----------------------------- Booking Details ------------------------------" << endl;
	    cout << "Name : " << N << endl;
	    fout << N << endl;
		cout << "Car choosed : " <<  "Alto" << endl;
		fout << "Alto " << endl;
		cout << "Model Range : " <<   "2021 - 2023" << endl;
		fout << "Model Range : " <<   "2021 - 2023" << endl;
		cout << "Your Payable amount will be " << T * 150  << endl;
		fout << T * 150   << endl;
		cout << "----------------------------------------------------------------------------" << endl;
		cout << "Car Added Successfully. Enjoy your journey our dear customer  " << endl;
        }
	    break ;
	    case 6 :
	    cout << "You have selected Wagoner " << endl;
		cout << "Its price menu is as follow " << endl;
		if (Model_Choice == 1 )
		{
		cout << "\nCars\t\t\t Price per Hour \t\t\t Price per Day" << endl;
	    cout << "Wagoner\t\t\t 150 \t\t\t\t\t\t3600" << endl;
	    	cout << "\n----------------------------- Booking Details ------------------------------" << endl;
	    cout << "Name : " << N << endl;
	    fout << N << endl;
		cout << "Car choosed : " <<  "Wagoner" << endl;
		fout << "Wagoner" << endl;
		cout << "Model Range : " <<   "2005 - 2010" << endl;
		fout << "Model Range : " <<   "2005 - 2010" << endl;
		cout << "Your Payable amount will be " << T * 150  << endl;
		fout  << T * 150  << endl;
		cout << "----------------------------------------------------------------------------" << endl;
		cout << "Car Added Successfully. Enjoy your journey our dear customer  " << endl;
	    }
	    else if (( Model_Choice ==2  ) || ( Model_Choice ==3  ))
	    {
	    cout << "\nCars\t\t\t Price per Hour \t\t\t Price per Day" << endl;
	   	cout << "Wagoner\t\t\t 175 \t\t\t\t\t\t4200" << endl;
	   		cout << "\n----------------------------- Booking Details ------------------------------" << endl;
	    cout << "Name : " << N << endl;
	    fout << N << endl;
		cout << "Car choosed : " <<  "Wagoner" << endl;
		fout << "Wagoner " << endl;
		cout << "Model Range : " <<   "2011 - 2015 __ 2016 - 2020 " << endl;
		fout << "Model Range : " <<   "2011 - 2015 __ 2016 - 2020 " << endl ;
		cout << "Your Payable amount will be " << T * 175  << endl;
		fout <<  T * 175  << endl;
		cout << "----------------------------------------------------------------------------" << endl;
		cout << "Car Added Successfully. Enjoy your journey our dear customer  " << endl;
		}
		else 
		{
		cout << "\nCars\t\t\t Price per Hour \t\t\t Price per Day" << endl;
        cout << "Wagoner\t\t\t 175 \t\t\t\t\t\t4800" << endl;
				cout << "\n----------------------------- Booking Details ------------------------------" << endl;
	    cout << "Name : " << N << endl;
	    fout << N << endl;
		cout << "Car choosed : " <<  "Wagoner" << endl;
		fout << "Wagoner " << endl;
		cout << "Model Range : " <<   "2021 - 2023" << endl;
		fout << "Model Range : " <<   "2021 - 2023" << endl;
		cout << "Your Payable amount will be " << T * 175  << endl;
		fout << T * 175  << endl;
		cout << "----------------------------------------------------------------------------" << endl;
		cout << "Car Added Successfully. Enjoy your journey our dear customer  " << endl; 
        }
	    break ;
	    case 7 :
	    cout << "You have selected Cultus " << endl;
		cout << "Its price menu is as follow " << endl;
		if (Model_Choice == 1 )
		{
		cout << "\nCars\t\t\t Price per Hour \t\t\t Price per Day" << endl;
	    cout << "Cultus\t\t\t 160 \t\t\t\t\t\t3840" << endl;
	    	cout << "\n----------------------------- Booking Details ------------------------------" << endl;
	    cout << "Name : " << N << endl;
	    fout << N << endl;
		cout << "Car choosed : " <<  "Cultus" << endl;
		fout << "Cultus " << endl;
		cout << "Model Range : " <<   "2005 - 2010" << endl;
		fout << "Model Range : " <<   "2005 - 2010" << endl;
		cout << "Your Payable amount will be " << T * 160  << endl;
		fout << T*160 << endl;
		cout << "----------------------------------------------------------------------------" << endl;
		cout << "Car Added Successfully. Enjoy your journey our dear customer  " << endl;
	    }
	    else if (( Model_Choice ==2  ) || ( Model_Choice ==3  ))
	    {
	    cout << "\nCars\t\t\t Price per Hour \t\t\t Price per Day" << endl;
	    cout << "Cultus\t\t\t 185 \t\t\t\t\t\t4440" << endl;
	    	    cout << "\n----------------------------- Booking Details ------------------------------" << endl;
	    cout << "Name : " << N << endl;
	    fout << N << endl;
		cout << "Car choosed : " <<  "Cultus" << endl;
		fout << "Cultus " << endl;
		cout << "Model Range : " <<   "2011 - 2015 __ 2016 - 2020 " << endl;
		fout << "Model Range : " <<   "2011 - 2015 __ 2016 - 2020 " << endl;
		cout << "Your Payable amount will be " << T * 185  << endl;
		fout << T * 185 << endl;
		cout << "----------------------------------------------------------------------------" << endl;
		cout << "Car Added Successfully. Enjoy your journey our dear customer  " << endl;
		}
		else 
		{
		cout << "\nCars\t\t\t Price per Hour \t\t\t Price per Day" << endl;
        cout << "Cultus\t\t\t 210 \t\t\t\t\t\t5040" << endl;
        		cout << "\n----------------------------- Booking Details ------------------------------" << endl;
	    cout << "Name : " << N << endl;
	    fout << N << endl;
		cout << "Car choosed : " <<  "Cultus" << endl;
		fout << "Cultus " << endl;
		cout << "Model Range : " <<   "2021 - 2023" << endl;
		fout << "Model Range : " <<   "2021 - 2023" << endl;
		cout << "Your Payable amount will be " << T * 210  << endl;
		fout << T * 210 << endl;
		cout << "----------------------------------------------------------------------------" << endl;
		cout << "Car Added Successfully. Enjoy your journey our dear customer  " << endl;
        }
	    break ;
	    case 8 :
	    cout << "You have selected Kia Sportage " << endl;
		cout << "Its price menu is as follow " << endl;
		if (Model_Choice == 1 )
		{
		cout << "\nCars\t\t\t Price per Hour \t\t\t Price per Day" << endl;
	  	cout << "Kia Sportage\t\t 400 \t\t\t\t\t\t9600" << endl;
	  		cout << "\n----------------------------- Booking Details ------------------------------" << endl;
	    cout << "Name : " << N << endl;
	    fout << N << endl;
		cout << "Car choosed : " <<  "Kia Sportage" << endl;
		fout << "Kia Sportage " << endl;
		cout << "Model Range : " <<   "2005 - 2010" << endl;
		fout << "Model Range : " <<   "2005 - 2010" << endl;
		cout << "Your Payable amount will be " << T * 400  << endl;
		fout << T * 400  << endl;
		cout << "----------------------------------------------------------------------------" << endl;
		cout << "Car Added Successfully. Enjoy your journey our dear customer  " << endl;
	    }
	    else if (( Model_Choice ==2  ) || ( Model_Choice ==3  ))
	    {
	    cout << "\nCars\t\t\t Price per Hour \t\t\t Price per Day" << endl;
	    cout << "Kia Sportage\t\t 425 \t\t\t\t\t\t10200" << endl;
	    	    cout << "\n----------------------------- Booking Details ------------------------------" << endl;
	    cout << "Name : " << N << endl;
	    fout << N << endl;
		cout << "Car choosed : " <<  "Kia Sportage" << endl;
		fout << "Kia Sportage " << endl;
		cout << "Model Range : " <<   "2011 - 2015 __ 2016 - 2020 " << endl;
		fout << "Model Range : " <<   "2011 - 2015 __ 2016 - 2020 " << endl;
		cout << "Your Payable amount will be " << T * 425  << endl;
		fout << T * 425 << endl;
		cout << "----------------------------------------------------------------------------" << endl;
		cout << "Car Added Successfully. Enjoy your journey our dear customer  " << endl;
		}
		else 
		{
		cout << "\nCars\t\t\t Price per Hour \t\t\t Price per Day" << endl;
        cout << "Kia Sportage\t\t 450 \t\t\t\t\t\t10800" << endl;
        		cout << "\n----------------------------- Booking Details ------------------------------" << endl;
	    cout << "Name : " << N << endl;
	    fout << N << endl;
		cout << "Car choosed : " <<  "Kia Sportage" << endl;
		fout << "Kia Sportage " << endl;
		cout << "Model Range : " <<   "2021 - 2023" << endl;
		fout << "Model Range : " <<   "2021 - 2023" << endl;
		cout << "Your Payable amount will be " << T * 450  << endl;
		fout << T * 450 << endl;
		cout << "----------------------------------------------------------------------------" << endl;
		cout << "Car Added Successfully. Enjoy your journey our dear customer  " << endl;
        }
	    break ;
	    case 9 :
	    cout << "You have selected Changan Alsvin " << endl;
		cout << "Its price menu is as follow " << endl;
		if (Model_Choice == 1 )
		{
		cout << "\nCars\t\t\t Price per Hour \t\t\t Price per Day" << endl;
	    cout << "Changan Alsvin\t\t 270 \t\t\t\t\t\t6480" << endl;
	    	cout << "\n----------------------------- Booking Details ------------------------------" << endl;
	    cout << "Name : " << N << endl;
	    fout << N << endl;
		cout << "Car choosed : " <<  "Changan Alsvin" << endl;
		fout << "Changan Alsvin " << endl;
		cout << "Model Range : " <<   "2005 - 2010" << endl;
		fout << "Model Range : " <<   "2005 - 2010" << endl;
		cout << "Your Payable amount will be " << T * 270  << endl;
		fout << T * 270 << endl;
		cout << "----------------------------------------------------------------------------" << endl;
		cout << "Car Added Successfully. Enjoy your journey our dear customer  " << endl;
	    }
	    else if (( Model_Choice ==2  ) || ( Model_Choice ==3  ))
	    {
	    cout << "\nCars\t\t\t Price per Hour \t\t\t Price per Day" << endl;
	   	cout << "Changan Alsvin\t\t 295 \t\t\t\t\t\t7080" << endl;
	   		cout << "\n----------------------------- Booking Details ------------------------------" << endl;
	    cout << "Name : " << N << endl;
	    fout << N << endl;
		cout << "Car choosed : " <<  "Changan Alsvin" << endl;
		fout << "Chamgan Alsvin " << endl;
		cout << "Model Range : " <<   "2011 - 2015 __ 2016 - 2020 " << endl;
			fout << "Model Range : " <<   "2011 - 2015 __ 2016 - 2020 " << endl;
		cout << "Your Payable amount will be " << T * 295  << endl;
		fout << T * 295 << endl;
		cout << "----------------------------------------------------------------------------" << endl;
		cout << "Car Added Successfully. Enjoy your journey our dear customer  " << endl;
		}
		else 
		{
		cout << "\nCars\t\t\t Price per Hour \t\t\t Price per Day" << endl;
        cout << "Changan Alsvin\t\t 320 \t\t\t\t\t\t7680" << endl;
        		cout << "\n----------------------------- Booking Details ------------------------------" << endl;
	    cout << "Name : " << N << endl;
	    fout << N << endl;
		cout << "Car choosed : " <<  "Changan Alsvin" << endl;
		fout << "Changan Alsvin " << endl;
		cout << "Model Range : " <<   "2021 - 2023" << endl;
		fout << "Model Range : " <<   "2021 - 2023" << endl;
		cout << "Your Payable amount will be " << T * 320  << endl;
		fout << T * 320 << endl;
		cout << "----------------------------------------------------------------------------" << endl;
		cout << "Car Added Successfully. Enjoy your journey our dear customer  " << endl;
        }
	    break ;
	    case 10 :
	    cout << "You have selected Toyata Honda BRV " << endl;
		cout << "Its price menu is as follow " << endl;
		if (Model_Choice == 1 )
		{
		cout << "\nCars\t\t\t Price per Hour \t\t\t Price per Day" << endl;
	    cout << "Toyata Honda BRV\t 350 \t\t\t\t\t\t8400" << endl;
	    	cout << "\n----------------------------- Booking Details ------------------------------" << endl;
	    cout << "Name : " << N << endl;
	    fout << N << endl;
		cout << "Car choosed : " <<  "Toyota Honda BRV" << endl;
		fout << "Toyota Honda BRV " << endl;
		cout << "Model Range : " <<   "2005 - 2010" << endl;
		fout << "Model Range : " <<   "2005 - 2010" << endl;
		cout << "Your Payable amount will be " << T * 350  << endl;
		fout << T*350 << endl;
		cout << "----------------------------------------------------------------------------" << endl;
		cout << "Car Added Successfully. Enjoy your journey our dear customer  " << endl;
	    }
	    	    else if (( Model_Choice ==2  ) || ( Model_Choice ==3  ))
	    {
	    cout << "\nCars\t\t\t Price per Hour \t\t\t Price per Day" << endl;
        cout << "Toyata Honda BRV\t 375 \t\t\t\t\t\t9000" << endl;
        	    cout << "\n----------------------------- Booking Details ------------------------------" << endl;
	    cout << "Name : " << N << endl;
	    fout << N << endl;
		cout << "Car choosed : " <<  "Toyota Honda BRV" << endl;
		fout << "Toyota Honda BRV " << endl;
		cout << "Model Range : " <<   "2011 - 2015 __ 2016 - 2020 " << endl;
		fout << "Model Range : " <<   "2011 - 2015 __ 2016 - 2020 " << endl;
		cout << "Your Payable amount will be " << T * 375  << endl;
		fout << T * 375 << endl;
		cout << "----------------------------------------------------------------------------" << endl;
		cout << "Car Added Successfully. Enjoy your journey our dear customer  " << endl;
		}
		else 
		{
		cout << "\nCars\t\t\t Price per Hour \t\t\t Price per Day" << endl;
        cout << "Toyata Honda BRV\t 400 \t\t\t\t\t\t9600" << endl;
        		cout << "\n----------------------------- Booking Details ------------------------------" << endl;
	    cout << "Name : " << N << endl;
	    fout << N << endl;
		cout << "Car choosed : " <<  "Toyota Honda BRV" << endl;
		fout << "Toyota Honda BRV " << endl;
		cout << "Model Range : " <<   "2021 - 2023" << endl;
		fout << "Model Range : " <<   "2021 - 2023" << endl;
		cout << "Your Payable amount will be " << T * 400  << endl;
		fout << T * 400 << endl;
		cout << "----------------------------------------------------------------------------" << endl;
		cout << "Car Added Successfully. Enjoy your journey our dear customer  " << endl;
        }
	    break ;
	    case 11 :
	    cout << "You have selected Land Cruiser " << endl;
		cout << "Its price menu is as follow " << endl;
		if (Model_Choice == 1 )
		{
		cout << "\nCars\t\t\t Price per Hour \t\t\t Price per Day" << endl;
	    cout << "Land Cruiser \t\t 500 \t\t\t\t\t\t12000" << endl;
	    	cout << "\n----------------------------- Booking Details ------------------------------" << endl;
	    cout << "Name : " << N << endl;
	    fout << N << endl;
		cout << "Car choosed : " <<  "Land Cruiser" << endl;
		fout << "Land Cruiser " << endl;
		cout << "Model Range : " <<   "2005 - 2010" << endl;
		fout << "Model Range : " <<   "2005 - 2010" << endl;
		cout << "Your Payable amount will be " << T * 500  << endl;
		fout << T * 500 << endl;
		cout << "----------------------------------------------------------------------------" << endl;
		cout << "Car Added Successfully. Enjoy your journey our dear customer  " << endl;
	    }
	    else if (( Model_Choice ==2  ) || ( Model_Choice ==3  ))
	    {
	    cout << "\nCars\t\t\t Price per Hour \t\t\t Price per Day" << endl;
        cout << "Land Cruiser \t\t 525 \t\t\t\t\t\t12600" << endl;
        	    cout << "\n----------------------------- Booking Details ------------------------------" << endl;
	    cout << "Name : " << N << endl;
	    fout << N << endl;
		cout << "Car choosed : " <<  "Land Cruiser" << endl;
		fout << "Land Cruiser " << endl;
		cout << "Model Range : " <<   "2011 - 2015 __ 2016 - 2020 " << endl;
		fout << "Model Range : " <<   "2011 - 2015 __ 2016 - 2020 " << endl;
		cout << "Your Payable amount will be " << T * 525  << endl;
		fout << T *525 << endl ;
		cout << "----------------------------------------------------------------------------" << endl;
		cout << "Car Added Successfully. Enjoy your journey our dear customer  " << endl;
		}
		else 
		{
		cout << "\nCars\t\t\t Price per Hour \t\t\t Price per Day" << endl;
		cout << "Land Cruiser \t\t 550 \t\t\t\t\t\t13200" << endl;
				cout << "\n----------------------------- Booking Details ------------------------------" << endl;
	    cout << "Name : " << N << endl;
	    fout << N << endl;
		cout << "Car choosed : " <<  "Land Cruiser" << endl;
		fout << "Land Cruiser " << endl;
		cout << "Model Range : " <<   "2021 - 2023" << endl;
		fout << "Model Range : " <<   "2021 - 2023" << endl;
		cout << "Your Payable amount will be " << T * 550  << endl;
		fout << T * 550 << endl;
		cout << "----------------------------------------------------------------------------" << endl;
		cout << "Car Added Successfully. Enjoy your journey our dear customer  " << endl;
        }
		break ;	
	    case 12 :
	    cout << "You have selected Fortuner " << endl;
		cout << "Its price menu is as follow " << endl;
		if (Model_Choice == 1 )
		{
		cout << "\nCars\t\t\t Price per Hour \t\t\t Price per Day" << endl;
        cout << "Fortuner \t\t 550 \t\t\t\t\t\t13200" << endl;
        	cout << "\n----------------------------- Booking Details ------------------------------" << endl;
	    cout << "Name : " << N << endl;
	    fout << N << endl;
		cout << "Car choosed : " <<  "Fortuner" << endl;
		fout << "Fortuner " << endl;
		cout << "Model Range : " <<   "2005 - 2010" << endl;
			fout << "Model Range : " <<   "2005 - 2010" << endl;
		cout << "Your Payable amount will be " << T * 550  << endl;
		fout << T *550 << endl;
		cout << "----------------------------------------------------------------------------" << endl;
		cout << "Car Added Successfully. Enjoy your journey our dear customer  " << endl;
        }
        else if (( Model_Choice ==2  ) || ( Model_Choice ==3  ))
	    {
	    cout << "\nCars\t\t\t Price per Hour \t\t\t Price per Day" << endl;
        cout << "Fortuner \t\t 575 \t\t\t\t\t\t13800" << endl;
        	    cout << "\n----------------------------- Booking Details ------------------------------" << endl;
	    cout << "Name : " << N << endl;
	    fout << N << endl;
		cout << "Car choosed : " <<  "Fortuner" << endl;
		fout << "Fortuner " << endl;
		cout << "Model Range : " <<   "2011 - 2015 __ 2016 - 2020 " << endl;
		fout << "Model Range : " <<   "2011 - 2015 __ 2016 - 2020 " << endl;
		cout << "Your Payable amount will be " << T * 575  << endl;
		fout << T * 575 << endl;
		cout << "----------------------------------------------------------------------------" << endl;
		cout << "Car Added Successfully. Enjoy your journey our dear customer  " << endl;
		}
		else 
		{
		cout << "\nCars\t\t\t Price per Hour \t\t\t Price per Day" << endl;
        cout << "Fortuner \t\t 600 \t\t\t\t\t\t14600" << endl;
        		cout << "\n----------------------------- Booking Details ------------------------------" << endl;
	    cout << "Name : " << N << endl;
	    fout << N << endl;
		cout << "Car choosed : " <<  "Fortuner" << endl;
		fout << "Fortuner " << endl;
		cout << "Model Range : " <<   "2021 - 2023" << endl;
			fout << "Model Range : " <<   "2021 - 2023" << endl;
		cout << "Your Payable amount will be " << T * 600  << endl;
		fout << T * 600 << endl;
		cout << "----------------------------------------------------------------------------" << endl;
		cout << "Car Added Successfully. Enjoy your journey our dear customer  " << endl;
        }
	    break ;
	    case 13 :
	    cout << "You have selected Mercedes  " << endl;
		cout << "Its price menu is as follow " << endl;
		if (Model_Choice == 1 )
		{
		cout << "\nCars\t\t\t Price per Hour \t\t\t Price per Day" << endl;
	    cout << "Mercedes\t\t 700 \t\t\t\t\t\t16800" << endl;
	    	cout << "\n----------------------------- Booking Details ------------------------------" << endl;
	    cout << "Name : " << N << endl;
	    fout << N << endl;
		cout << "Car choosed : " <<  "Mercedes" << endl;
		fout << "Mercedes " << endl;
		cout << "Model Range : " <<   "2005 - 2010" << endl;
		fout << "Model Range : " <<   "2005 - 2010" << endl;
		cout << "Your Payable amount will be " << T * 700  << endl;
		fout << T * 700 << endl;
		cout << "----------------------------------------------------------------------------" << endl;
		cout << "Car Added Successfully. Enjoy your journey our dear customer  " << endl;
	    }
	    	    else if (( Model_Choice ==2  ) || ( Model_Choice ==3  ))
	    {
	    cout << "\nCars\t\t\t Price per Hour \t\t\t Price per Day" << endl;
        cout << "Mercedes\t\t 725 \t\t\t\t\t\t17400" << endl;
        	    cout << "\n----------------------------- Booking Details ------------------------------" << endl;
	    cout << "Name : " << N << endl;
	    fout << N << endl;
		cout << "Car choosed : " <<  "Mercedes" << endl;
		fout << "Mercedes " << endl;
		cout << "Model Range : " <<   "2011 - 2015 __ 2016 - 2020 " << endl;
			fout << "Model Range : " <<   "2011 - 2015 __ 2016 - 2020 " << endl;
		cout << "Your Payable amount will be " << T * 725  << endl;
		fout << T * 725 << endl;
		cout << "----------------------------------------------------------------------------" << endl;
		cout << "Car Added Successfully. Enjoy your journey our dear customer  " << endl;
		}
		else 
		{
		cout << "\nCars\t\t\t Price per Hour \t\t\t Price per Day" << endl;
        cout << "Mercedes\t\t 750 \t\t\t\t\t\t18000" << endl;
        		cout << "\n----------------------------- Booking Details ------------------------------" << endl;
	    cout << "Name : " << N << endl;
	    fout << N << endl;
		cout << "Car choosed : " <<  "Mercedes" << endl;
		fout << "Mercedes " << endl;
		cout << "Model Range : " <<   "2021 - 2023" << endl;
			fout << "Model Range : " <<   "2021 - 2023" << endl;
		cout << "Your Payable amount will be " << T * 750  << endl;
		fout << T * 750 << endl;
		cout << "----------------------------------------------------------------------------" << endl;
		cout << "Car Added Successfully. Enjoy your journey our dear customer  " << endl;
        }
	    break ;
	    case 14 :
	    cout << "You have selected Audi " << endl;
		cout << "Its price menu is as follow " << endl;
		if (Model_Choice == 1 )
		{
		cout << "\nCars\t\t\t Price per Hour \t\t\t Price per Day" << endl;
	    cout << "Audi \t\t\t 800 \t\t\t\t\t\t17200" << endl;
	    	cout << "\n----------------------------- Booking Details ------------------------------" << endl;
	    cout << "Name : " << N << endl;
	    fout << N << endl;
		cout << "Car choosed : " <<  "Audi" << endl;
		fout << "Audi " << endl;
		cout << "Model Range : " <<   "2005 - 2010" << endl;
		fout << "Model Range : " <<   "2005 - 2010" << endl;
		cout << "Your Payable amount will be " << T * 800  << endl;
		fout << T * 800 << endl;
		cout << "----------------------------------------------------------------------------" << endl;
		cout << "Car Added Successfully. Enjoy your journey our dear customer  " << endl;
	    }
	    else if (( Model_Choice ==2  ) || ( Model_Choice ==3  ))
	    {
	    cout << "\nCars\t\t\t Price per Hour \t\t\t Price per Day" << endl;
	    cout << "Audi \t\t\t 825 \t\t\t\t\t\t17800" << endl;
	    	    cout << "\n----------------------------- Booking Details ------------------------------" << endl;
	    cout << "Name : " << N << endl;
	    fout << N << endl;
		cout << "Car choosed : " <<  "Audi" << endl;
		fout << "Audi " << endl;
		cout << "Model Range : " <<   "2011 - 2015 __ 2016 - 2020 " << endl;
		fout << "Model Range : " <<   "2011 - 2015 __ 2016 - 2020 " << endl;
		cout << "Your Payable amount will be " << T * 825  << endl;
		fout << T * 825 << endl;
		cout << "----------------------------------------------------------------------------" << endl;
		cout << "Car Added Successfully. Enjoy your journey our dear customer  " << endl;
		}
		else 
		{
		cout << "\nCars\t\t\t Price per Hour \t\t\t Price per Day" << endl;
        cout << "Audi \t\t\t 850 \t\t\t\t\t\t18400" << endl;
        		cout << "\n----------------------------- Booking Details ------------------------------" << endl;
	    cout << "Name : " << N << endl;
	    fout << N << endl;
		cout << "Car choosed : " <<  "Audi" << endl;
		fout << "Audi " << endl;
		cout << "Model Range : " <<   "2021 - 2023" << endl;
		fout << "Model Range : " <<   "2021 - 2023" << endl;
		cout << "Your Payable amount will be " << T * 850  << endl;
		fout << T * 850 << endl;
		cout << "----------------------------------------------------------------------------" << endl;
		cout << "Car Added Successfully. Enjoy your journey our dear customer  " << endl;
        }
	    break ;
	    default : 
	    cout << "Invalid Choice" << endl ;
	}
 } 
}
int main()
{
	char Enter ;
	int User_Choice  ;
	cout << "\t\t\t=========================================================" << endl;
	cout << "\t\t\t\t\t\tZeeshan Ali " << endl;
	cout << "\t\t\t=========================================================" << endl;
	cout << "\t\t\t=========================================================" << endl;
	cout << "\t\t\t\t\t\tCar Rental System " << endl;
	cout << "\t\t\t=========================================================" << endl;
	cout << "Press any key to enter into the project " << endl;
	getch () ;
	system ("cls") ;
    void Customer () ;
	while (true)
	{
		
	cout << "\n--------------------------------- Main Menu ----------------------------------- "<< endl;	
	cout << "1. For check all the cars available in our centre " << endl;
	cout << "2. For the price menu of all the cars " << endl;
	cout << "3. For making some choice " << endl ;
	cout << "4. For giving your details " << endl;
	cout << "5. For exit " << endl;
	cout << "------------------------------------------------------------------------------- " << endl;
	cout << "Please Give your details first so that we may proceed next <<<<<<<<<<<<<<" << endl;
	cout << "Press Respective keys to get access to relative fields " << endl;
	cout << "Enter your choice " << endl;
	cin >> User_Choice ;
	system ("cls") ;
	switch (User_Choice)
	{
	case 1 :
		AllCars (); 
		break ;
	case 2 :
	    CarsPrice () ;
		break ;	
	case 3 :
		MakeChoice () ;
		break ;
	case  4 :
		Customer ()  ;
		break ;	
	case 5 : 
		cout << "You are exiting...... " << endl;
		return 0 ;	
 }
    }
	return 0;
}
