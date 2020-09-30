#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int a,b,c;
    cout <<"Enter three numbers: \n";
    cin >> a >> b >> c;
    if (a>=b && a>=c)
        cout << "a is greatest: " << a;
    else if (b>=a && b>=c)
    {
        cout << "b is greatest: "<< b;
    }
    else
    {
        cout << "c is greatest: "<< c;
    }

    cout << "\n";
    
    if (a==b)
        cout << "a and b are equal";
    else if(b==c)
    {
        cout << "c and b are equal";
    }
    else if (a==c)
    {
        cout << "a and c are equal";
    }
    else 
    {
        cout << "all of them are distinct";
    }
    
    return 0;
}
