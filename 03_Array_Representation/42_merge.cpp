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
    for (int i = 0; i < arr.length; i++)
        cout << arr.A[i] << " ";
    cout << endl;
}

struct Array *merge(struct Array *arr1, struct Array *arr2)
{
    int i, j, k;
    i = j = k = 0;
    struct Array *arr3 = new Array;
    arr3->size = arr1->length + arr2->length;
    arr3->length = 0;

    while (i < arr1->length && j < arr2->length)
    {
        if (arr1->A[i] < arr2->A[j])
            arr3->A[k++] = arr1->A[i++];
        else
            arr3->A[k++] = arr2->A[j++];
    }

    while (i < arr1->length)
        arr3->A[k++] = arr1->A[i++];

    while (j < arr2->length)
        arr3->A[k++] = arr2->A[j++];

    arr3->length = k;
    return arr3;
}

int main()
{
    Array arr1 = {{2, 6, 10, 15, 18}, 10, 5};
    Array arr2 = {{1, 3, 5, 7, 9}, 10, 5};
    Array *arr3;
    arr3 = merge(&arr1, &arr2);
    display(*arr3);
    delete arr3;

    return 0;
}
