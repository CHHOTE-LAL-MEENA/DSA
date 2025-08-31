#include <iostream>
using namespace std;

void bitwiseOpe()
{
    int a, b;
    char choice;
    cout << "Choose which operation you want to perform:\n a. Bitwise AND (&)\n b. Bitwise OR (|)\n c. Bitwise XOR (^)\n d. Left shift (<<)\n e. Right shift (>>)" << endl;
    cin >> choice;
    switch (choice)
    {
    case 'a':
        cout << "Enter first and second number:";
        cin >> a >> b;
        cout << (a & b);
        break;
    case 'b':
        cout << "Enter first and second number:";
        cin >> a >> b;
        cout << (a | b);
        break;
    case 'c':
        cout << "Enter first and second number:";
        cin >> a >> b;
        cout << (a ^ b);
        break;
    case 'd':
        cout << "Enter number and index for shifting:";
        cin >> a >> b;
        cout << (a << b);
        break;
    case 'e':
        cout << "Enter number and index for shifting:";
        cin >> a >> b;
        cout << (a >> b);
        break;
    default:
        cout << "Invalid Operation!";
        break;
    }
}

int main()
{
    bitwiseOpe();
    return 0;
}