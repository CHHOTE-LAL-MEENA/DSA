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
}

void Reverse(struct Array *arr)
{
    int *B;
    int i, j;
    B = new int[arr->length];
    for (i = arr->length - 1, j = 0; i >= 0; i--, j++)
        B[j] = arr->A[i];
    for (i = 0; i < arr->length; i++)
        arr->A[i] = B[i];
}

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}
void Reverse2(struct Array *arr)
{
    int i, j;
    for (i = 0, j = arr->length - 1; i < j; i++, j--)
        swap(arr->A[i], arr->A[j]);
}

int main()
{
    Array arr = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    arr.size = 10;
    arr.length = 9;
    Reverse(&arr);
    display(arr);
    Reverse2(&arr);
    cout<<"\n";
    display(arr);

    return 0;
}