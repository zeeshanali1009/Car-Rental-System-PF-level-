/*16. Write a program that uses 2-D array to initialize the scores of students. The students are arranged in five rows with 
five students in each row. The program inputs the row number and student number in that row and then displays 
the score of the student*/
#include <iostream>
using namespace std;
int main()
{
	int user_choice ,StudentNumber ,  Number[5][5] , Score [5][5], c[5][5];
	for (int i=0 ; i < 5 ; i++)
	{
		for ( int j=0 ; j < 5; j++)
		{
			cout << "Enter score of student [ "<< i << " ] [ "<< j << " ]"<<endl;
			cin >> Score[i][j] ;
		}
	}
		for (int i=0 ; i < 5 ; i++)
	{
		for ( int j=0 ; j < 5; j++)
		{
         cout << "Enter number of student [ "<< i << " ] [ "<< j << " ]"<<endl;
		 cin >> Number [i][j] ;
		}
	}
		for (int i=0 ; i < 5 ; i++)
	{
		for ( int j=0 ; j < 5; j++)
		{
		      cout <<"[ " << Score [i][j] << " ] ";
		}
		cout << endl;
	}
	cout << "Enter the number of row you want to print out " <<endl;
	cin >> user_choice ;

	for ( int i = user_choice ; i <= user_choice ; i++)
	{
		for ( int j = 0  ; j < 5  ; j++)
		{
			cout <<"[ " << Score [i][j] << " ] ";
			c [i][j] = Score[i][j] ;
		}
		cout << endl;
    }
    cout << "Enter the student number "<<endl ;
	cin >> StudentNumber ;
	cout << "[ "[user_choice][StudentNumber] <<" ]" << endl;
    		/*for (int i=0 ; i < 5 ; i++)
	{
		for ( int j=0 ; j < 5; j++)
		{
           if ( Number[i][j]  == Score[i][j])
           {
           	cout << "Score of the student is "<< Score[i][j] << endl;
		   }
		}*/
	//}
}
