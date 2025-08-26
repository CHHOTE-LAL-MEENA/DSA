#include <iostream>
using namespace std;

int main()
{
    // int A[5]={1,2,3,4,5};
    // int size = sizeof(A);
    // cout<<size<<endl;
    // cout<<A[0]<<endl;
    // cout<<A[4]<<endl;

    // for(int i = 0;i<5;i++){
    //     cout<<A[i]<<endl;
    // }

    // for(int x:A){
    //     cout<<x<<endl;
    // }
    int n;
    cout << "Enter the size of array:" << endl;
    cin >> n;
    int A[n];
    A[0] = 5;
    A[1] = 2;
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", A[i]);
    }
    // for(int x:A){
    //     cout<<x<<endl;
    // }
    return 0;
}