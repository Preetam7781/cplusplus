#include <iostream>
using namespace std;

class Employee
{
    int id;
    static int count;

public:
    void setdata()
    {
        cout << "Enter the ID " << endl;
        cin >> id;
        count++;
    }
    void getdata()
    {
        cout << "The ID of this employee is " << id
             << " and this employee number is " << count << endl;
    }

    static void getcount()
    {
        cout << "THe value of count is " << count << endl;  
    }
};

int Employee ::count;

int main(int argc, char const *argv[])
{
    Employee Raj, Vivek, Sunil;
    Raj.setdata();
    Raj.getdata();
    Employee::getcount();

    Vivek.setdata();
    Vivek.getdata();
    Employee::getcount();

    Sunil.setdata();
    Sunil.getdata();
    Employee::getcount();



    return 0;
}
