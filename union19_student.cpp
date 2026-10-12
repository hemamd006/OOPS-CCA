
#include <iostream>
using namespace std;

union StudentData
{
    int rollNo;
    float marks;
};

int main()
{
    StudentData s;

    s.rollNo = 25;
    cout << "Roll number = " << s.rollNo << endl;

    s.marks = 85.5f;
    cout << "Marks = " << s.marks << endl;

    return 0;
}
