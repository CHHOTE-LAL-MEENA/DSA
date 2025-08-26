#include <iostream>
using namespace std;

template <class T>
class Arithematic
{
private:
    T a;
    T b;

public:
    Arithematic(T a, T b);
    T add();
    T sub();
};
template <class T>
Arithematic<T>::Arithematic(T a, T b)
{
    this->a = a;
    this->b = b;
}
template <class T>
T Arithematic<T>::add()
{
    T c;
    c = a + b;
    return c;
}
template <class T>
T Arithematic<T>::sub()
{
    T c;
    c = a - b;
    return c;
}

int main()
{
    Arithematic<float> ar(10.5, 23.8);
    cout << "Add " << (float)ar.add() << endl;
    cout << "Subtraction " << (float)ar.sub();
    return 0;
}