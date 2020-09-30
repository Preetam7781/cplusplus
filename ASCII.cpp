#include <iostream>
using namespace std;
int	main(int argc, char **argv)
{
 char c;
 cout << "Enter a character: ";
 cin >> c;
 cout << "ASCII Value of " << c << " is " << int(c)<< endl;
 cout << "Adding 1 to the character code: \n";
 c=c+1;
  cout << "ASCII Value of " << c << " is " << int(c);
 
    return 0;
}
