// This program calculates the profit of the user
#include <iostream>
using namespace std;
int main()
{
//Variable declaration	
	float Share_Buying_price,Num_of_share,Share_sale_price, Firm_Charges, net_amount_earned ,Total_investment, amount_earned ,tax;
	Firm_Charges = 1.5; //1.5%
	//prompting and initializing
	cout <<"Enter the number of shares you bought "<<endl;
	cin >> Num_of_share;
	cout <<"Enter the buying price of share "<<endl;
	cin >> Share_Buying_price;
	cout <<"Enter the saling price of share "<<endl;
	cin >> Share_sale_price ;
	//Logic of the program
	Total_investment = Share_Buying_price * Num_of_share;
	cout << "Your total investment is = "<< Total_investment<<endl;
	amount_earned = Share_sale_price * Num_of_share;
	cout << "your earned amount is = " <<amount_earned <<endl;
	tax = 	(amount_earned/100) * Firm_Charges;
	cout << "your payable tax is = "<<tax<<endl;
	net_amount_earned = amount_earned - tax; 
	cout << "Your profit is  = "<<net_amount_earned<<endl;
	if ( net_amount_earned > Total_investment )
	{
	cout <<"You are in profit"<<endl;
    }
    else
    {
    cout <<"You are in a loss"<<endl;
	}
	return 0;
}
