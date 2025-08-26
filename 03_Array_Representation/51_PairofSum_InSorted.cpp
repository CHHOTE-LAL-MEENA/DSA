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
    int k = 14;
    for (int i = 0, j = n - 1; i < j;)
    {
        if (arr.A[i] + arr.A[j] == k)
        {
            cout << arr.A[i] << " + " << arr.A[j] << " = " << k << endl;
            i++;
            j--;
        }
        else if (arr.A[i] + arr.A[j] < k)
            i++;
        else
            j--;
    }
}

int main()
{
    Array arr = {{1, 3, 4, 5, 6, 8, 9, 10, 12, 14}, 10, 9};
    Sum(arr);

    return 0;
}