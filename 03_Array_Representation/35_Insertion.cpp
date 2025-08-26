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
    cout << "Elements are " << endl;
    for (int i = 0; i < arr.length; i++)
        cout << arr.A[i] << " ";
}

void append(struct Array *arr, int x)
{
    if (arr->length < arr->size)
        arr->A[arr->length++] = x;
}

void insert(struct Array *arr, int index, int x)
{
    if (arr->length == arr->size)
    {
        cout << "Array overflow!" << endl;
        return;
    }
    if (index >= 0 && index <= arr->length)
    {

        for (int i = arr->length; i > index; i--)
            arr->A[i] = arr->A[i - 1];
        arr->A[index] = x;
        arr->length++;
    }
}
int main()
{
    struct Array arr = {2, 3, 4, 5, 6, 7};
    arr.size = 10;
    arr.length = 6;
    insert(&arr, 0, 89);
    append(&arr, 17);
    display(arr);

    return 0;
}