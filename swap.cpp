#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "enter a and b :\n";
    cin >> a >>  b ;
    a = a+b;
    b = a-b;
    a = a-b;
    
    cout << "the number entered are swapped as a and b consecutively: "<< a << " and " << b;
    return 0;
}