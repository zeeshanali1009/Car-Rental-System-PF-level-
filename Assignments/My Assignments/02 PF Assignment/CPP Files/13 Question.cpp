// This program calculates the root of the given equation
#include <iostream>
using namespace std;
int main()
{
// variable declaration	
    float a, b, c, x1, x2, discriminant, realPart, imaginaryPart;
// taking input 
    cout << "Enter coefficients a, b and c: ";
    cin >> a >> b >> c;
    discriminant = b*b - 4*a*c;
// using if else statement    
    if (discriminant > 0) {
// real roots     
        cout << "Roots are real and different." << endl;
        
    }
// real and same    
    else if (discriminant == 0) {
        cout << "Roots are real and same." << endl;
       
    }
// complex
    else {
      
        cout << "Roots are complex and different."  << endl;
       
    }
}
