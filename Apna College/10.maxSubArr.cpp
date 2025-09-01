#include <iostream>
using namespace std;

// Brute force approach
void subArr(int arr[], int sz)
{
    int st, end;
    for (st = 0; st < sz; st++)
    {
        for (end = 0; end < sz; end++)
        {
            for (int i = st; i <= end; i++)
            {
                cout << arr[i];
            }
            cout << " ";
        }
        cout << endl;
    }
}

void maxSumOfSubArr(int arr[], int sz)
{
    int st, end;
    int maxSum = INT16_MIN;
    for (st = 0; st < sz; st++)
    {
        int currSum = 0;
        for (end = st; end < sz; end++)
        {
            currSum += arr[end];
            maxSum = max(currSum, maxSum);
        }
    }
    cout << "Maxsum of sub array is: " << maxSum << endl;
}

// kadane's algorithm with linear complexity O(N)
void maxSumByKadane(int arr[], int sz)
{
    int maxSum = INT16_MIN, currSum = 0;
    for (int i = 0; i < sz; i++)
    {
        currSum += arr[i];
        maxSum = max(currSum, maxSum);
        if (currSum < 0)
            currSum = 0;
    }
    cout << "Maxsum of sub array is: " << maxSum << endl;
}

int main()
{
    int arr[] = {1, 2, -3, 4, 5, -6};
    int sz = sizeof(arr) / sizeof(arr[0]);
    subArr(arr, sz);
    maxSumOfSubArr(arr, sz);
    maxSumByKadane(arr, sz);
    return 0;
}