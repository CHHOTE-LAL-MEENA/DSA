#include <iostream>
using namespace std;

struct Array
{
    int A[10];
    int size;
    int length;
};
void display(struct Array arr)
{
    cout << "Elements are: ";
    for (int i = 0; i < arr.length; i++)
        cout << arr.A[i] << " ";
}

int deletion(struct Array *arr, int index)
{
    if (arr->length == -1)
        cout << "Array underflow!";
    if (index >= 0 && index <= arr->length)
    {
        int x = arr->A[index];
        cout << "Deleted element at index " << index << " is :" << x << endl;
        for (int i = index; i < arr->length; i++)
            arr->A[i] = arr->A[i + 1];
    }
    arr->length--;
}
int main()
{
    struct Array arr = {2, 3, 4, 5, 6, 7};
    arr.size = 10;
    arr.length = 6;
    deletion(&arr, 4);
    display(arr);
    return 0;
}