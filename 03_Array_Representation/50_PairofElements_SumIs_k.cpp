#include <iostream>
using namespace std;

struct Array
{
    int A[10];
    int size;
    int length;
};

void Sum(Array arr)
{
    int n = arr.length;
    int k = 10;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr.A[i] + arr.A[j] == k)
            {
                cout << arr.A[i] << "," << arr.A[j] << endl;
            }
        }
    }
}

void HashSum(Array arr)
{
    int H[17]={0};
    int n = arr.length;
    int k = 11;
    for (int i = 0; i < n; i++)
    {
        int diff = k - arr.A[i];
        if (diff >= 0 && diff < 17 && H[diff] != 0)
            cout << arr.A[i] << " + " << diff << " = " << k << endl;
        H[arr.A[i]]++;
    }
}
int main()
{
    Array arr = {{6, 3, 8, 10, 16, 7, 5, 2, 9, 14}, 10, 9};
    Sum(arr);
    HashSum(arr);
    return 0;
}