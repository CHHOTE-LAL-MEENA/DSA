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

int Get(struct Array arr, int index)
{
    if (index >= 0 && index < arr.length)
        return arr.A[index];
    return -1;
}

int Set(struct Array *arr, int index, int x)
{
    if (index >= 0 && index < arr->length)
        arr->A[index] = x;
}

int Max(struct Array arr)
{
    int max = arr.A[0];
    for (int i = 0; i < arr.length; i++)
    {
        if (arr.A[i] > max)
            max = arr.A[i];
    }
    return max;
}

int Min(struct Array arr)
{
    int min = arr.A[0];
    for (int i = 0; i < arr.length; i++)
    {
        if (arr.A[i] < min)
            min = arr.A[i];
    }
    return min;
}

int sum(struct Array arr)
{
    int s = 0;
    for (int i = 0; i < arr.length; i++)
        s += arr.A[i];
    return s;
}

float Avg(struct Array arr)
{
    return (float)sum(arr) / arr.length;
}
int main()
{
    Array arr = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    arr.size = 10;
    arr.length = 9;
    cout << "Element geted : " << Get(arr, 8) << endl;
    Set(&arr, 8, 11);
    cout << "Maximum Number is : " << Max(arr) << endl;
    cout << "Minimum Number is :" << Min(arr) << endl;
    cout << "Sum of all array elements : " << sum(arr) << endl;
    cout << "Avrage of Array : " << Avg(arr) << endl;
    display(arr);
    return 0;
}