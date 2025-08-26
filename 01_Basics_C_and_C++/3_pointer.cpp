#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
    int *p1;
    char *p2;
    float *p3;
    double *p4;
    struct rectangle *p5;
    cout << sizeof(p1) << endl;
    cout << sizeof(p2) << endl;
    cout << sizeof(p3) << endl;
    cout << sizeof(p4) << endl;
    cout << sizeof(p5) << endl;
    // int a =199;
    // cout<<a<<endl;
    // int *p;
    // p=&a;
    // cout<<p<<endl;
    // cout<<*p;
    // p = (int*)malloc(5*sizeof(int));
    // p[0]=1;p[1]=2; p[2]=3; p[3]=4;p[4]=5;
    // for (int i = 0; i < 5; i++)
    // {
    //     cout<<p[i]<<endl;
    // }
    // p = new int[5];
    // p[0]=1;p[1]=2; p[2]=3; p[3]=4;p[4]=5;
    // for(int i = 0; i<5;i++)
    // cout<<p[i]<<endl;
    // free (p);
    // delete [ ] p;

    return 0;
}