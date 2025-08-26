#include <iostream>
using namespace std;

int power(int m, int n)
{
    if (n == 0)
        return 1;
    return power(m, n - 1) * m;
}

int Ipower(int m, int n)
{
    if (n == 0)
        return 1;
    if (n % 2 == 0)
        return Ipower(m * m, n / 2);
    return m * Ipower(m * m, (n-1) / 2);
}
int main()
{
    int r = power(2, 7);
    int r1 = Ipower(2, 8);
    cout << r << endl;
    cout << r1;
    return 0;
}