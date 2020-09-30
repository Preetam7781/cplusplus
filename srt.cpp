#include <iostream>
#include <cmath>
using namespace std;
int main() 
{
    float a, b, c, x1, x2, discriminant, realPart, imgPart;
    cout << "Enter the coefficients a , b, c : \n";
    cin >> a>> b >> c;
    discriminant= b*b - 4*a*c;

    if(discriminant>0)
    {
        x1= (-b + sqrt(discriminant))/2*a;
        x2= (-b - sqrt(discriminant))/2*a;
        cout << "The roots are real and different. \n" <<"\n x1=" << x1 << "\n x2="<< x2;
    }
    else if (discriminant==0)
    {
        x1=(-b)/2*a;
        cout << "The roots are real and equal.\n" << " x1= "<< x1 << "\n x2= " << x1;
    }
    else 
    {
        realPart= (-b)/2*a;
        imgPart = sqrt(-discriminant)/2*a;

        cout << "The roots are different and imaginary";
        cout << "real part ="<< realPart << "\nimaginary part =" <<imgPart << "i";
    }

} 
