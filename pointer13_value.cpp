
#include <iostream>
using namespace std;

int main()
{
    int x = 25;
    int *p = &x;

    cout << "Value of x = " << x << endl;
    cout << "Address of x = " << &x << endl;
    cout << "Value using pointer = " << *p;

    return 0;
}
