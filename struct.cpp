#include <iostream>
using namespace std;
typedef struct employee
{
    /* data */
    int eId;
    char favchar;
    float salary;
}ep;

union money ///for better memory allocation
{
    /* data */
    int rice;       //4
    char car;       //1
    float pounds;   //4
};


int main (){
    enum Meal{ breakfast, lunch, dinner };
    Meal m1=lunch;
    cout << m1;
    
    // cout << breakfast  << endl;
    // cout << lunch << endl;
    // cout << dinner << endl;
    // ep raj;
    // union money m1;
    // m1.car='b';
    // m1.rice=15;
    // cout << m1.rice<< endl;
    // struct employee ramit;
    // struct employee ramsh;
    // raj.eId= 1;
    // raj.favchar='f';
    // raj.salary= 250000000;
    // cout << "the value is " << raj.eId<< endl;
    // cout << "the value is " << raj.favchar<< endl;
    // cout << "the value is " << raj.salary<< endl;
    return 0;
}