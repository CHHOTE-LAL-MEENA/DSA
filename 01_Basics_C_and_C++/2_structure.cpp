#include <iostream>
using namespace std;

struct Rectangle
{
    int length;
    int breadth;
} r;

int main()
{
    struct Rectangle r = {10, 5};
    r.length = 15;
    r.breadth = 7;
    cout << r.length << endl;
    cout << r.breadth << endl;
    cout << "The Area of the Rectangle is: " << r.breadth * r.length << endl;
    return 0;
}