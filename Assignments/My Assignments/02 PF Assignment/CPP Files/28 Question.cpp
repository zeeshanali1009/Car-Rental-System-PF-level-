// This program aceepts two points and display in which quadrent they lie in
#include <iostream>
using namespace std;
int main()
{
//variable declaration	
    int x_axis,y_axis;
	cout << "Enter your point of x axis"<<endl;
	cin >> x_axis;
	cout << "Enter your point of y axis"<<endl;
	cin >> y_axis;
//using if else statement	
	if ( x_axis == 0 &&  y_axis == 0 )   							//for origin
	{
	cout << "Your points lies on the origin "<<endl;
    }
    else if (  x_axis > 0 && y_axis > 0) 							// for 1 quadrent
    {
	cout << " Your point lies in the first quadrent "<<endl;
    }
      else if (  x_axis < 0 && y_axis > 0)							// for 2 quadrent
    {
	cout << " Your point lies in the second quadrent "<<endl;
    }
      else if (  x_axis < 0 && y_axis < 0)							// for 3 quadrent
    {
	cout << " Your point lies in the third quadrent "<<endl;
    }
      else if (  x_axis > 0 && y_axis < 0)							// for 4 quadrent
    {
	cout << " Your point lies in the fourth quadrent "<<endl;
    }
    else 															// for irrelevant points
    {
    	cout << "Your given points contradicts with all quadrent position " <<endl;
	}
    return 0;
}
