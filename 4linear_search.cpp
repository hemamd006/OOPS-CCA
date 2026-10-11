
#include <iostream>
using namespace std;

int main()
{
    int a[5], key;
    bool found = false;

    cout << "Enter 5 elements: ";
    for (int i = 0; i < 5; i++)
    {
        cin >> a[i];
    }

    cout << "Enter element to search: ";
    cin >> key;

    for (int i = 0; i < 5; i++)
    {
        if (a[i] == key)
        {
            found = true;
            break;
        }
    }

    if (found)
        cout << "Element found";
    else
        cout << "Element not found";

    return 0;
}
