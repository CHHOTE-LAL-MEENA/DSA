#include <iostream>
using namespace std;

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void selectionSort(int arr[], int n)
{
    int i, j, k;
    for (i = 0; i < n - 1; i++)
    {
        for (k = j = i; j < n; j++)
        {
            if (arr[j] < arr[k])
            {
                k = j;
            }
        }
        swap(&arr[i], &arr[k]);
    }
}

void Display(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int arr[] = {8, 5, 3, 7, 2, 6, 38, 33, 75, 47};
    int len = sizeof(arr) / (sizeof(arr[0]));
    selectionSort(arr, len);
    cout << "Sorted elements are: ";
    Display(arr, len);
}