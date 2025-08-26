#include <iostream>
using namespace std;
int area(int l, int b)
{
    return l * b;
}
int perimeter(int l, int b)
{
    return 2 * (l + b);
}
int main()
{
    int length = 0, breadth = 0;
    cout << "Enter the length and breadth " << endl;
    cin >> length >> breadth;
    int a = area(length, breadth);
    int p = perimeter(length, breadth);

    cout << "Area = " << a << endl
         << "Perimeter = " << p;
    return 0;
}