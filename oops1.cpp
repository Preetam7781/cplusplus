#include <iostream>
using namespace std;

class binary
{
    string s;

public:
    void read(void);
    void chk_bin(void);
    void ones_compliment(void);
    void display(void);
};
void binary ::read(void)
{
    cout << "Enter a binary number " << endl;
    cin >> s;
}
void binary ::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect binary format \n";
            exit(0);
        }
    }
}
void binary ::ones_compliment(void)
{
    chk_bin();
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}
void binary ::display()
{
    cout << "ur binary num" << endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout << endl;
}
int main()
{
    binary b;
    b.read();
    //b.chk_bin();
    b.ones_compliment();
    b.display();
        return 0;
}

///    OOPs - classes and objectsn
///    c++ --> initially called -->  c with classes by stroustroup
///    class --> extension of structures (in c)
///    structues had limitations
///            -->Members are public
///            -->No methods
///    classes --> structures +more
///    class can have methods and properties
///    classes can make few members as private and public
///    structures in c++ are typdefed
//      by defult everything is private in class