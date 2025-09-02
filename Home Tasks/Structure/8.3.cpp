/* This program uses structure to store employ salary and id and then displays it on the screen */
#include <iostream>
using namespace std;
    struct BooksRecord 
    {
	int Book_Id ;
	int Pages ;
	float Price ;
    };
int main()
{
	 BooksRecord b1,b2 ;

     	cout << "Enter the id  "<< endl;
		cin >> b1.Book_Id ;
		cout << "Enter the pages  "<< endl;
		cin >> b1.Pages  ;
		cout << "Enter the price   "<< endl;
		cin >> b1.Price ;
		cout << "Now Please give the details of the second book " << endl;
		cout << "Enter the id  "<< endl;
		cin >> b2.Book_Id ;
		cout << "Enter the pages  "<< endl;
		cin >> b2.Pages  ;
		cout << "Enter the price   "<< endl;
		cin >> b2.Price ;
		cout << " The book with the highest price " << endl;  
	 if ( b1.Price > b2.Price )
	 {
	 	cout << "Book Id " << b1.Book_Id << endl;
	 	cout << "Pages " << b1.Pages << endl;
		cout << "Price  " << b1.Price  << endl;	
	 }
	 else 
	 {
	 	cout << "Book Id " << b2.Book_Id << endl;
	 	cout << "Pages " << b2.Pages << endl;
		cout << "Price  " << b2.Price  << endl;
	 }
	return 0 ;
}
