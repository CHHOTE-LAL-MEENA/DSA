#include <iostream>
using namespace std;

int decToBin(int decNum)
{
    int ans = 0, pow = 1;
    while (decNum > 0)
    {
        int rem = decNum % 2;
        decNum /= 2;
        ans += (rem * pow);
        pow *= 10;
    }
    return ans;
}

int binToDec(int binNum)
{
    int ans = 0, pow = 1;
    while (binNum > 0)
    {
        int rem = binNum % 2;
        ans += (rem * pow);
        binNum /= 10;
        pow *= 2;
    }
    return ans;
}

int main()
{
    int decNum;
    // cout << "Enter a decimal number for binary conversion: ";
    // cin >> decNum;
    // cout << decToBin(decNum) << endl;
    cout << "Enter a binary number for decimal conversion: ";
    cin >> decNum;
    cout << binToDec(decNum) << endl;
    return 0;
}