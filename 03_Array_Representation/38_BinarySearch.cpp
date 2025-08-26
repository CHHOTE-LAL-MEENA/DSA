#include <iostream>
using namespace std;

struct Array
{
    int A[10];
    int size;
    int length;
};

int display(struct Array arr)
{
    for (int i = 0; i < arr.length; i++)
        cout << arr.A[i] << " ";
}

int BinarySearch(struct Array *arr, int key)
{
    int l, mid, h;
    l = 0;
    h = arr->length - 1;
    while (l <= h)
    {
        mid = (l + h) / 2;
        if (key == arr->A[mid])
            return mid;
        else if (key < arr->A[mid])
            h = mid - 1;
        else
            l = mid + 1;
    }
    return -1;
}
int RBinarySearch(struct Array *arr, int l, int h, int key)
{
    int mid;
    if (l <= h)
    {
        mid = (l + h) / 2;
        if (key == arr->A[mid])
            return mid;
        else if (key < arr->A[mid])
            return RBinarySearch(arr, l, mid - 1, key);
        else
            return RBinarySearch(arr, mid + 1, h, key);
    }
    return -1;
}
int main()
{
    struct Array arr =  {2, 3, 4, 5, 6, 7, 8, 9};
    arr.size = 10;
    arr.length = 8;
    cout << BinarySearch(&arr, 7) << endl;
    cout << RBinarySearch(&arr, 0, arr.length, 8) << endl;
    display(arr);
    return 0;
}