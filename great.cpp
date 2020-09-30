// C++ program to find largest among two 
// numbers using ternary operator 

#include <iostream> 
using namespace std; 

int main() 
{ 
	int x;
    cout << "enter a number x: \n";
    cin >> x;
    cout << endl;
    (x%2==0) ? cout << "the number is even" : cout << "the number is odd";
	return 0; 
} 
