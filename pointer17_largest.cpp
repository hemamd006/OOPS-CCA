
#include <iostream>
using namespace std;

int main()
{
    int a, b;
    int *p = &a, *q = &b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    if (*p > *q)
        cout << "Largest = " << *p;
    else if (*q > *p)
        cout << "Largest = " << *q;
    else
        cout << "Both numbers are equal";

    return 0;
}
