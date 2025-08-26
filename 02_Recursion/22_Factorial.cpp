#include <iostream>
using namespace std;
// Using Recursion
/*int fact(int n)
{
    if (n == 0)
        return 1;
    return fact(n - 1) * n;
}*/

// Using Loops
int fact(int n)
{
    int f = 1;
    if (n == 0)
        return 1;
    else
        for (int i = 1; i <= n; i++)
            f = f * i;
    return f;
}
int main()
{
    int r = fact(6);
    cout << r;
    return 0;
}