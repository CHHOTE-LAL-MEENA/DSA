#include <iostream>
using namespace std;

class Rectangle
{
    private:
    int length;
    int breadth;

    public:
    void initialize(int l, int b)
    {
        length = l;
        breadth = b;
    }

    int area()
    {
        return length * breadth;
    }

    int perimeter()
    {
        return 2 * (length + breadth);
    }
};

int main()
{
    Rectangle r;
    int l, b;
    cout << "Enter the length and breadth " << endl;
    cin >> l >> b;
    r.initialize(l,b);
    int a = r.area();
    int p = r.perimeter();
    cout << "Area " << a << endl
         << "Perimeter " << p;

    return 0;
}