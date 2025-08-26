#include <iostream>
using namespace std;

int Rfib(int n)
{
    if (n <= 1)
        return n;
    return Rfib(n - 2) + Rfib(n - 1);
}

int Ifib(int n)
{
    int t0 = 0, t1 = 1, s;
    if (n <= 1)
        return n;
    for (int i = 2; i <= n; i++)
    {
        s = t0 + t1;
        t0 = t1;
        t1 = s;
    }
    return s;
}

int F[10];
int Afib(int n)
{
    if (n <= 1)
    {
        F[n] = n;
        return n;
    }
    else
    {
        if (F[n - 2] == -1)
            F[n - 2] = Afib(n - 2);
        if (F[n - 1] == -1)
            F[n - 1] = Afib(n - 1);
        return F[n - 2] + F[n - 1];
    }
}
int main()
{
    int i;
    for (i = 0; i < 10; i++)
        F[i] = -1;
    cout << Rfib(7) << endl;
    cout << Ifib(8) << endl;
    cout << Afib(8) << endl;
    return 0;
}