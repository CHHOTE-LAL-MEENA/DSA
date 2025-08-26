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

void missing(Array *arr)
{
    int sum = 0, s = 0;
    int n = arr->length + 1; 
    sum = (n * (n + 1)) / 2; 
    for (int i = 0; i < arr->length; i++)
        s += arr->A[i];
    int num = sum - s;
    cout << "The missing number is " << num << endl;
}

void Missing(Array *arr)
{
    int i;
    int diff = arr->A[0] - 0;
    for (i = 0; i < arr->length; i++)
    {
        if (arr->A[i] - i != diff)
        {
            cout << "Missing number is " << i + diff << endl;
            break; 
        }
    }
}

int main()
{
    Array arr = {{1, 2, 3, 4, 5, 6, 7, 8, 10}, 10, 9};
    missing(&arr);
    Missing(&arr);
    display(arr);
    return 0;
}
