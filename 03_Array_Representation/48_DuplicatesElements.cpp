#include <iostream>
using namespace std;

struct Array
{
    int A[10];
    int size;
    int length;
};

void display(Array *arr)
{
    for (int i = 0; i < arr->length; i++)
        cout << arr->A[i] << " ";
    cout << endl;
}

void Duplicate(Array arr)
{
    int lastDuplicate = 0;
    for (int i = 0; i <= arr.length; i++)
    {
        if (arr.A[i] == arr.A[i + 1] && arr.A[i] != lastDuplicate)
        {
            cout << arr.A[i] << endl;
            lastDuplicate = arr.A[i];
        }
    }
}

void CountDuplicate(Array arr)
{
    for (int i = 0; i < arr.length; i++)
    {
        if (arr.A[i] == arr.A[i + 1])
        {
            int j = i + 1;
            while (arr.A[j] == arr.A[i])
                j++;
            cout << arr.A[i] << " is appearing " << j - i << " times." << endl;
            i = j - 1;
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
    Array arr = {{1, 2, 3, 3, 3, 3, 6, 7, 7, 12}, 10, 9};
    // Duplicate(arr);
    // CountDuplicate(arr);
    HashingDuplicate(arr);
    display(&arr);
    return 0;
}