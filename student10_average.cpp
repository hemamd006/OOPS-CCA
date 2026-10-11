
#include <iostream>
using namespace std;

struct Student
{
    int m1, m2, m3;
    int total;
    float average;
};

int main()
{
    Student s;

    cout << "Enter marks in 3 subjects: ";
    cin >> s.m1 >> s.m2 >> s.m3;

    s.total = s.m1 + s.m2 + s.m3;
    s.average = s.total / 3.0f;

    cout << "Total = " << s.total << endl;
    cout << "Average = " << s.average;

    return 0;
}
