#include <iostream>
using namespace std;

// Sum of number digits
int sumOfDigits(int num)
{
    int rem, sum = 0;
    while (num > 0)
    {
        rem = num % 10;
        num = num / 10;
        sum += rem;
    }
    return sum;
}

// nCr or Binomial cofficeint

int fact(int n)
{
    int fact = 1;
    for (int i = 1; i <= n; i++)
        fact *= i;
    return fact;
}

int nCr(int n, int r)
{
    int fact_n = fact(n);
    int fact_r = fact(r);
    int fact_nmr = fact(n - r);

    return fact_n / (fact_r * fact_nmr);
}

int main()
{
    int n;
    cout << "Enter a number to find the sum of digits: ";
    cin >> n;
    cout << "Sum of digits is: " << sumOfDigits(n) << endl;
    cout << "nCr is: " << nCr(4, 2);
    return 0;
}