#include <iostream>
using namespace std;

struct Array
{
    int *A;
    int size;
    int length;
};

void Insert(struct Array *arr, int index, int x)
{
    if (arr->length == arr->size)
        cout << "Array overflow!!";
    if (index >= 0 && index <= arr->length)
    {
        for (int i = arr->length; i > index; i--)
            arr->A[i + 1] = arr->A[i];
        arr->A[index] = x;
        arr->length++;
    }
}

void Delete(struct Array *arr, int index)
{
    if (arr->length == -1)
        cout << "Array underflow!!";
    if (index >= 0 && index <= arr->length)
    {
        int x = arr->A[index];
        cout << "Deleted Element is : " << x << endl;
        for (int i = index; i < arr->length; i++)
            arr->A[i] = arr->A[i + 1];
    }
    arr->length--;
}

int Search(struct Array *arr, int key)
{
    for (int i = 0; i < arr->length; i++)
    {
        if (key == arr->A[i])
            return i;
    }
    return -1;
}

int sum(struct Array *arr)
{
    int s = 0;
    for (int i = 0; i < arr->length; i++)
        s += arr->A[i];
    return s;
}

void display(struct Array arr)
{
    cout << "Elements are :- " << endl;
    for (int i = 0; i < arr.length; i++)
        cout << arr.A[i] << " ";
}

int main()
{
    Array arr;
    int ch, index, ele;

    cout << "Enter Size of Array : ";
    cin >> arr.size;
    arr.A = new int[arr.size];
    arr.length = 0;

    do
    {
        cout << "Menu\n1. Insert\n2. Delete\n3. Search\n4. Sum\n5. Display\n6. Exit\n";

        cout << "Enter your choice : " << endl;
        cin >> ch;

        switch (ch)
        {
        case 1:
            cout << "Enter the Index and element " << endl;
            cin >> index >> ele;
            Insert(&arr, index, ele);
            break;
        case 2:
            cout << "Enter the Index where you want to delete an element " << endl;
            cin >> index;
            Delete(&arr, index);
            break;
        case 3:
            cout << "Enter the key element which is you want to search " << endl;
            cin >> ele;
            cout << Search(&arr, ele) << endl;
            break;
        case 4:
            cout << "Sum of all the element is : " << sum(&arr) << endl;
            break;
        case 5:
            display(arr);
            cout << endl;
            break;
        case 6:
            exit(0);
        default:
            cout << "Invalid choice!!" << endl;
        }
    } while (ch < 7);

    delete[] arr.A;

    return 0;
}