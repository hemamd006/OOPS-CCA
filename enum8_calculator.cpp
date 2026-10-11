
#include <iostream>
using namespace std;

enum Operation
{
    ADD = 1, SUBTRACT, MULTIPLY, DIVIDE
};

int main()
{
    double a, b;
    int choice;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "1.Add  2.Subtract  3.Multiply  4.Divide\n";
    cout << "Enter choice: ";
    cin >> choice;

    switch (static_cast<Operation>(choice))
    {
        case ADD:
            cout << "Result = " << a + b;
            break;
        case SUBTRACT:
            cout << "Result = " << a - b;
            break;
        case MULTIPLY:
            cout << "Result = " << a * b;
            break;
        case DIVIDE:
            if (b != 0)
                cout << "Result = " << a / b;
            else
                cout << "Cannot divide by zero";
            break;
        default:
            cout << "Invalid choice";
    }

    return 0;
}
