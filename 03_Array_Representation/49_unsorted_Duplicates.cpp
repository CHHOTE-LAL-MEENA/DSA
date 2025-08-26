#include <iostream>
using namespace std;

struct Array
{
    int A[10];
    int size;
    int length;
};

void display(const Array &arr)
{
    for (int i = 0; i < arr.length; i++)
        cout << arr.A[i] << " ";
    cout << endl;
}

void CountDuplicate(Array &arr)
{
    int n = arr.length;
    for (int i = 0; i < n - 1; i++)
    {
        int count = 1;
        if (arr.A[i] != -1)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (arr.A[i] == arr.A[j])
                {
                    count++;
                    arr.A[j] = -1;
                }
            }
            if (count > 1)
                cout << arr.A[i] << " appears " << count << " times." << endl;
        }
    }
}

void HashingDuplicate(Array arr)
{
    int H[13] = {0};
    int max = 12;
    for (int i = 0; i < arr.length; i++)
    {
        H[arr.A[i]]++;
    }
    for (int i = 0; i <= max; i++)
    {
        if (H[i] > 1)
            cout << i << " is appearing " << H[i] << " times." << endl;
    }
}

int main()
{
    Array arr = {{4, 2, 3, 2, 3, 4, 6, 2, 8, 12}, 10, 10};
    HashingDuplicate(arr);
    CountDuplicate(arr);
    display(arr);
    return 0;
}
