#include <iostream>
#include <iomanip>
using namespace std;

float cube(float);
int	main(int argc, char **argv)
{
    float num;
    cout << "Enter a number : ";
    cin >> num;
    cout << "The cube of " << num << " is " << setprecision(5) << cube(num) << endl;

    return 0;
}
float cube (float a){
    return a*a*a;
}

