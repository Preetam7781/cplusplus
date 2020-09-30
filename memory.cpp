#include <iostream>
using namespace std;

class shop
{
    int ItemId[100];
    int ItemPrice[100];
    int counter;

public:
    void initcounter(void) { counter = 0; }
    void setPrice(void);
    void displayPrice(void);
};
void shop::setPrice(void)
{
    cout << "enter id of ur item no : " << counter + 1 << endl;
    cin >> ItemId[counter];
    cout << "enter price of ur item: " << endl;
    cin >> ItemPrice[counter];
    counter++;
}

void shop::displayPrice()
{   
    for (int i = 0; i < counter; i++)
    {
        cout << "the price of item id " << ItemId[i] << " is $" << ItemPrice[i];
        cout << endl;
    }
}

int main(int argc, char **argv)
{
    shop dukaan;
    dukaan.initcounter();
    dukaan.setPrice();
    dukaan.setPrice();
    dukaan.setPrice();
    dukaan.displayPrice();

    return 0;
}
