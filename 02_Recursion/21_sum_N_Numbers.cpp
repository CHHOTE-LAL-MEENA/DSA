#include <iostream>
using namespace std;

// Using Recursion
/*int sum(int n)
{
    if (n == 0)
        return 0;
    return sum(n - 1) + n;
}*/

// Using Formula
/*int sum(int n){
    return (n*(n+1)) / 2;
}*/

// Using Loops
int sum(int n)
{
    int s = 0;
    for (int i = 1; i <= n; i++)
        s = s + i;
    return s;
}
int main()
{
    cout << sum(5);
    return 0;
}