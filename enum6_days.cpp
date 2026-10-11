
#include <iostream>
using namespace std;

enum Day
{
    MONDAY = 1, TUESDAY, WEDNESDAY, THURSDAY,
    FRIDAY, SATURDAY, SUNDAY
};

int main()
{
    int n;
    cout << "Enter day number (1-7): ";
    cin >> n;

    switch (n)
    {
        case MONDAY: cout << "Monday"; break;
        case TUESDAY: cout << "Tuesday"; break;
        case WEDNESDAY: cout << "Wednesday"; break;
        case THURSDAY: cout << "Thursday"; break;
        case FRIDAY: cout << "Friday"; break;
        case SATURDAY: cout << "Saturday"; break;
        case SUNDAY: cout << "Sunday"; break;
        default: cout << "Invalid day number";
    }

    return 0;
}
