
#include <iostream>
using namespace std;

union Data
{
    int number;
    float decimal;
    char letter;
};

int main()
{
    Data d;

    cout << "Address of number: "
         << static_cast<void*>(&d.number) << endl;

    cout << "Address of decimal: "
         << static_cast<void*>(&d.decimal) << endl;

    cout << "Address of letter: "
         << static_cast<void*>(&d.letter) << endl;

    d.number = 50;
    cout << "Active integer value = " << d.number << endl;

    return 0;
}
