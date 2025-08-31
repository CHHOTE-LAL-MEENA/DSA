#include <iostream>
using namespace std;

int smallestEle(int arr[], int sz)
{
    int index, smallest = INT16_MAX;
    for (int i = 0; i < sz; i++)
    {
        if (arr[i] < smallest)
        {
            smallest = arr[i];
            index = i;
        }
    }
    cout << "Smallest number is: " << smallest << " and index is: " << index << endl;
    return index;
}
int largestEle(int arr[], int sz)
{
    int index, largest = INT16_MIN;
    for (int i = 0; i < sz; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
            index = i;
        }
    }
    cout << "Largest number is: " << largest << " and index is: " << index << endl;
    return index;
}

void reverseArr(int arr[], int sz)
{
    int p = 0, q = sz - 1;
    while (p < q)
    {
        swap(arr[p], arr[q]);
        p++;
        q--;
    }
}

void sumAndProductOfEle(int arr[], int sz)
{
    int sum = 0, product = 1;
    for (int i = 0; i < sz; i++)
    {
        sum += arr[i];
        product *= arr[i];
    }
    cout << "Sum of all the elements is: " << sum << endl;
    cout << "Product of all the elements is: " << product << endl;
}

void uniqueValues(int arr[],int sz){
    
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int size = sizeof(arr) / (sizeof(arr[0]));
    int min = smallestEle(arr, size);
    int max = largestEle(arr, size);
    swap(arr[min], arr[max]);
    sumAndProductOfEle(arr, size);
    reverseArr(arr, size);
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    return 0;
}