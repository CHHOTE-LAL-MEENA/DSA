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

int swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
int LinearSearch(struct Array *arr, int key)
{
    for (int i = 0; i < arr->length; i++)
    {
        if (key == arr->A[i])
        {
            swap(&arr->A[i], &arr->A[0]);
            return i;
        }
    }
    return -1;
}
int main()
{
    struct Array arr = {2, 3, 4, 5, 6, 7, 8, 9};
    arr.size = 10;
    arr.length = 8;
    cout << LinearSearch(&arr, 4) << endl;
    display(arr);
    return 0;
}