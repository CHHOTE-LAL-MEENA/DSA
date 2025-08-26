#include <iostream>
using namespace std;

struct Array
{
    int A[10];
    int size;
    int length;
};

void display(Array arr)
{
    for (int i = 0; i < arr.length; i++)
        cout << arr.A[i] << " ";
    cout << endl;
}

void Missing(Array *arr)
{
    int i;
    int diff = arr->A[0] - 0;
    for (i = 0; i < arr->length; i++)
    {
        if (arr->A[i] - i != diff)
        {
            while (diff < arr->A[i] - i)
            {
                cout << "Missing number is " << i + diff << endl;
                diff++;
            }
        }
    }
}

// Method 2 using hashing.
void Missing2(Array *arr)
{
    int H[12] = {0};
    int i, l, h, n;
    l = 1;
    h = 12;
    n = 10;
    for (i = 0; i < n; i++)
        H[arr->A[i]]++;
    for (i = l; i <= h; i++)
    {
        if (H[i] == 0)
            cout << i << endl;
    }
}
int main()
{
    Array arr = {{1, 2, 3, 5, 6, 7, 10}, 10, 9};
    Array arr1 = {{3, 7, 4, 9, 12, 6, 1, 11, 2, 10}, 10, 9};
    Missing(&arr);
    Missing2(&arr1);
    display(arr1);
    return 0;
}