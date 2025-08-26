#include <iostream>
#include <stdlib.h>
using namespace std;
struct Rectangle
{
    int length;
    int breadth;
};
// void fun(struct Rectangle &r)
// {
//     r.length =69;
//     r.breadth=68; 
//     cout << "Length " << r.length << endl
//          << "Breadth " << r.breadth << endl;
// }
struct Rectangle *fun(){
    struct Rectangle *p;
    p=new Rectangle;
    p->length=48;
    p->breadth=45;

    return p;
}
int main()
{
    // struct Rectangle r = {10, 5};
    // fun(r);
    // cout << "Length " << r.length <<endl<< "Breadth " << r.breadth << endl;

    struct Rectangle *ptr = fun();
    cout<<"Length "<<ptr->length<<endl<<"Breadth "<<ptr->breadth<<endl;

    return 0;

    return 0;
}