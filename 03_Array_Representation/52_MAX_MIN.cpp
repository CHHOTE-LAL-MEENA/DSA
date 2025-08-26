#include <iostream>
using namespace std;

struct Array
{
    int A[10];
    int size;
    int length;
};

void Max_Min(Array arr)
{
    int min = arr.A[0];
    int max = arr.A[0];
    for (int i = 0; i < arr.length; i++)
    {
        if (arr.A[i] < min)
            min = arr.A[i];
        else if (arr.A[i] > max)
            max = arr.A[i];
    }
    cout << "Minimum number is " << min << "\nMaximum number is " << max << endl;
}
int main()
{
    Array arr = {{5, -8, 3, 9, 6, 32, 10, 7, -1, 4}, 10, 9};
    Max_Min(arr);

    return 0;
}