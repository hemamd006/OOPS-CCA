
#include <iostream>
using namespace std;
int main()
{
    int a, b;
    int *p = &a, *q = &b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "Sum = " << (*p + *q);

    return 0;
}