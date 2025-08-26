#include <iostream>
#include <stdlib.h>
using namespace std;

struct Rectangle
{
    int length;
    int breadth;
};
int main()
{
    // code for C Language
    /*struct Rectangle r={10,5};
    struct Rectangle *p;
    p = (struct Rectangle*)malloc(sizeof(struct Rectangle));
    (*p).length=12;
    (*p).breadth=15;
    cout<<(*p).length<<endl<<(*p).breadth<<endl;
    delete p;*/
    Rectangle r = {10, 5};
    Rectangle *p = &r;
    p = new Rectangle;
    p->length = 60;
    p->breadth = 70;
    cout << p->length << endl
         << p->breadth << endl;
    free(p);

    return 0;
}