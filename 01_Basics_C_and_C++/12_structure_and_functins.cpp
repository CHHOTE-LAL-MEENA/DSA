#include <iostream>
using namespace std;

struct Rectangle
{
    int length;
    int breadth;
};
int area(Rectangle r)
{
    int a = r.length * r.breadth;
    return a;
}
int perimeter(Rectangle r)
{
    int p = 2 * (r.length + r.breadth);
    return p;
}
void initialize(Rectangle *r, int l, int b){
    r->length=l;
    r->breadth=b;
}
int main()
{
    Rectangle r;
    r.length = 10;
    r.breadth = 20;
    int l=5,b=4;
    initialize(&r,l,b);
    int a = area(r);
    int p = perimeter(r);
    cout << "Area " << a << endl
         << "Perimeter " << p;
    return 0;
}