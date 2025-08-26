#include <iostream>
using namespace std;

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void bubbleSort(int arr[], int n)
{
    int flag = 0, i, j;
    for (i = 0; i < n - 1; i++)
    {
        for (j = 0; j < n - 1 - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(&arr[j], &arr[j + 1]);
                flag = 1;
            }
        }
        if (flag == 0)
        {
            cout << "Elements are sorted.";
            break;
        }
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
    int arr1[] = {2, 3, 5, 6, 7, 8, 33, 38, 47, 75};
    int len = sizeof(arr) / (sizeof(arr[0]));
    bubbleSort(arr, len);
    cout << "Sorted elements are: ";
    Display(arr, len);
    cout << "\n";
    bubbleSort(arr1, len);
    Display(arr1, len);
}