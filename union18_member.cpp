
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

    d.number = 100;
    cout << "Integer value = " << d.number << endl;

    d.decimal = 12.5f;
    cout << "Float value = " << d.decimal << endl;

    d.letter = 'A';
    cout << "Character value = " << d.letter << endl;

    return 0;
}
