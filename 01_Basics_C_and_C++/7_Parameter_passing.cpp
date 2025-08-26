#include <iostream>
using namespace std;

// CALL BY VALUE
int add(int x, int y)
{
    int c;
    c = x + y;
    return c;
}
// CALL BY ADDRESS
/*void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}*/

// CALL BY REFERENCE
void swap(int &x, int &y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
}
int main()
{
    int a, b;
    a = 10;
    b = 20;
    cout << add(a, b) << endl;
    // swap(&a, &b);
    swap(a, b);
    cout << a << endl
         << b;
    return 0;
}