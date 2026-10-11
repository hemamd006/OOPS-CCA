
#include <iostream>
using namespace std;

enum Grade
{
    A = 1, B, C, D, F
};

int main()
{
    int n;
    cout << "Enter grade number (1-5): ";
    cin >> n;

    Grade g = static_cast<Grade>(n);

    switch (g)
    {
        case A: cout << "Grade A"; break;
        case B: cout << "Grade B"; break;
        case C: cout << "Grade C"; break;
        case D: cout << "Grade D"; break;
        case F: cout << "Grade F"; break;
        default: cout << "Invalid grade number";
    }

    return 0;
}
