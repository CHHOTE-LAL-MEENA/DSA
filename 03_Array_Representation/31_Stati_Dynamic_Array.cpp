#include <iostream>
using namespace std;

int main()
{
    int A[5] = {2, 3, 4, 4, 5};
    int *p;

    p = new int(5);
    p[0] = 3;
    p[1] = 2;
    p[2] = 5;
    p[3] = 6;
    p[4] = 8;
    for (int i = 0; i < 5; i++)
    {
        cout << A[i] << " ";
    }
    cout << "\n";
    for (int i = 0; i < 5; i++)
    {
        cout << p[i] << " ";
    }

    free(p);
    return 0;
}