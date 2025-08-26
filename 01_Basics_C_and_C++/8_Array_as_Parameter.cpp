#include <iostream>
using namespace std;
// void fun(int *A, int n){
//     A[0]=47;
//     for(int i=0;i<n;i++)
//     cout<<A[i]<<endl;
// }
int *fun(int n)
{
    int *p;
    p = new int(n);
    for (int i = 0; i < n; i++)
        p[i] = i+1;

    return p;
}
int main()
{
    // int A[]={2,4,5,6,7};
    // int n=5;
    // fun(A,n);
    // cout<<sizeof(A)/sizeof(int)<<endl;
    // for(int x:A){
    //     cout<<x<<" ";
    // }
    int *ptr, n = 5;
    ptr = fun(n);
    for (int i = 0; i < n; i++)
        cout << ptr[i] << endl;

    return 0;
}