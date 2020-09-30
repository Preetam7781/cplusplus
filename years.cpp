#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int totdays, years, weeks, days, num1;
    cout << "Enter total number of days : ";
    cin >> totdays;
    years = totdays/365;
    num1 = totdays%365;
    weeks = num1/7;
    days =num1%7;
    cout << "\n" << 
    "1. years: " << setw(4) << years<< endl <<
    "2. weeks: " << setw(4) << weeks<< endl <<
    "3. days: " << setw(5) << days << endl <<
    "\n";
    return 0;
}