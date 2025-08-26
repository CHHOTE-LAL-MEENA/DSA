#include <iostream>
using namespace std;

int fac(int n)
{
    if (n == 0)
        return 1;
    return fac(n - 1) * n;
}

int nCr(int n, int r)
{
    int t1, t2, t3;
    t1 = fac(n);
    t2 = fac(r);
    t3 = fac(n - r);
    return t1 / (t2 * t3);
}

int NCR(int n, int r)
{
    if (r == 0 || n == r)
        return 1;
    return NCR(n - 1, r - 1) + NCR(n - 1, r);
}
int main()
{
    cout << nCr(5, 2) << endl;
    cout << NCR(5, 1);
    return 0;
}