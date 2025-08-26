#include <iostream>
using namespace std;

void fun(int n)
{
    if (n > 0)
    {
        cout << n << endl; // At calling time Recursion.
        fun(n - 1);
        cout << n << endl; // At returning time Recursion.
    }
}
int main()
{
    int x = 3;
    fun(x);
    return 0;
}