// This program calculates the income and make all essential dings and give remaining income after doing all activities
#include <iostream>
using namespace std;
int main()
{
//variable declaration	
	float  payrate,numofhours;
	float incomeaftertax, income , remainingincome ,moneyonclothesandaccessories ,remainingincomeafterclothesaccesories, moneyonschoolsupplies,
	remainingincomeafterschoolsupplies, moneyonsavingbonds , remaininincomeaftersavingbonds , parentssavingbondincome , overallremainingamount ;
//defined value	
	float tax = 0.14;
	float moneyonclothesandaccesories = 0.1;
	float schoolsupplies = 0.01;
	float savingbonds = 0.25;
	float parentsavingbond = 0.50; 
	cout << "Enter the pay rate for your job"<<endl;
	cin >> payrate;
	cout <<"Enter the number of hours you worked"<<endl;
	cin >> numofhours;
	income = payrate * numofhours ;
// total income	
	cout << "total income is = "<<	income <<endl;
	incomeaftertax = income * tax ;
//payable tax	
	cout << " your payable  tax = "<<incomeaftertax <<endl;
	remainingincome = 	income - 	incomeaftertax  ;
////remaining income after tax paying		
	cout << "your income after paying the tax = "<<remainingincome<<endl;
	moneyonclothesandaccessories = remainingincome *   moneyonclothesandaccesories  ;
//spent money on clothes	
	cout <<" your spent money on clothes and accesories = "<<	moneyonclothesandaccessories <<endl;
	remainingincomeafterclothesaccesories =  remainingincome - moneyonclothesandaccessories ;
// remaining income after buying clothes and accesories	
	cout << " Your income after buying clothes and accesories = "<<remainingincomeafterclothesaccesories <<endl;	
	moneyonschoolsupplies = remainingincomeafterclothesaccesories * schoolsupplies  ;
//spent money on school supplies	
	cout << "you spent money on school supplies = "<<moneyonschoolsupplies <<endl;
	remainingincomeafterschoolsupplies = 	remainingincomeafterclothesaccesories - moneyonschoolsupplies;
//remaining income after buying school suplies	
	cout <<"Your remaining income after buying school supplies = "<<remainingincomeafterschoolsupplies<< endl;
	moneyonsavingbonds = remainingincomeafterschoolsupplies * savingbonds;
//spent money on saving bonds	
	cout << "Your spent money on saving bond = "<< moneyonsavingbonds <<endl;
	remaininincomeaftersavingbonds = remainingincomeafterschoolsupplies - moneyonsavingbonds;
//remaining money after buying saving bonds	
	cout << "Your remaining income after buying saving bond = "<<remaininincomeaftersavingbonds<<endl;
	parentssavingbondincome = 	remaininincomeaftersavingbonds * parentsavingbond;
// parents spent money on bonds	
	cout << "your parent spent money on saving bond = "<<parentssavingbondincome<< endl;
	overallremainingamount = remaininincomeaftersavingbonds - parentssavingbondincome;
// overall remaining amount	
	cout << "Your overall remaining income after all the expenses = "<< overallremainingamount << endl;
	
	
	return 0;
}
