#include <iostream>
using namespace std;
int main()
{
    int a[5], sum = 0;
    cout << "Enter 5 elements: ";
    for (int i = 0; i < 5; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < 5; i++)
    {
        sum = sum + a[i];
    }
    cout << "Sum = " << sum;
    return 0;
}