#include <iostream>
using namespace std;
int	main(int argc, char **argv)
{
    char ch;
    int num=ch;

    cout << "Enter a character between a to u: ";
    cin >> ch;
    cout << "Next five characters are: ";
    cout << 
    " \n " << " 1. " <<char (ch+1) <<
    " \n " << " 2. " <<char (ch+2) <<
    " \n " << " 3. " <<char (ch+3) <<
    " \n " << " 4. " <<char (ch+4) <<
    " \n " << " 5. " <<char (ch+5) ;
    return 0;
}
