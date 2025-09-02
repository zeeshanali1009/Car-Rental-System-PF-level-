#include <iostream>
using namespace std;
int main()
{
	int size ;
	cout << "Enter the number of customers"<<endl;
	cin >> size ;
	int Mangoes[size],Oranges[size],Bananas[size],Total_Bill[size];
	for ( int i=0 ; i < size ; i++)
	{
		cout << "How many Mangoes have you purchased  dear  customer"<<endl;
		cin >> Mangoes[i];
		cout << "How many Oranges have you purchased  dear  customer"<<endl;
		cin >> Oranges[i];
		cout << "How many Bananas have you purchased  dear  customer"<<endl;
		cin >> Bananas[i];
	}
	cout << "My dear customers your bill details are " <<endl;
	cout << "---------------------------------------------------------------------------"<<endl;
	cout << "Customer No\tMangoes\t\tOranges\t\tBananas\t\tTotal Bill"<<endl;
	cout << "---------------------------------------------------------------------------"<<endl;
	for ( int i = 0 ; i < size ; i++)
	{ 
		cout << i+1 <<"\t\t" << Mangoes[i] <<"\t\t"<< Oranges[i]<< "\t\t"<<Bananas[i] ;
		Total_Bill[i] = Mangoes[i]* 20 + Oranges[i]* 10 + Bananas[i] * 5 ;
		cout <<"\t\t"<< Total_Bill[i] <<endl;	
	}
	cout << "\n"<< "Composed by Zeeshan Ali"<<endl;
}
