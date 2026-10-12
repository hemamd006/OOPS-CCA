
#include <iostream>
#include <string>
using namespace std;

struct Student
{
    int rollNo;
    string name;
};

int main()
{
    Student s[3];

    for (int i = 0; i < 3; i++)
    {
        cout << "Enter roll number for student "
             << i + 1 << ": ";
        cin >> s[i].rollNo;

        cout << "Enter name: ";
        getline(cin >> ws, s[i].name);
    }

    cout << "\nStudent Details\n";

    for (int i = 0; i < 3; i++)
    {
        cout << s[i].rollNo << " - "
             << s[i].name << endl;
    }

    return 0;
}
