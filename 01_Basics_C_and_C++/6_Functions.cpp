#include <iostream>
using namespace std;
// Function Declaretion
int add(int a, int b)
{
    int c; // Function body or Function Defination.
    c = a + b;
    return c;
}
int main()
{
    int num1 = 10, num2 = 20, sum;
    sum = add(num1, num2); // Function Call
    cout << "Sum is " << sum << endl;
    return 0;
}