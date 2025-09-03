#include <iostream>
#include <string>
using namespace std;

void swap(char *p, char *q)
{
    char temp = *p;
    *p = *q;
    *q = temp;
}

int main()
{
    string str = "Hello World!";
    int p = 0, q = str.size() - 1;
    while (p < q)
        swap(&str[p++], &str[q--]);
    cout << str;
    return 0;
}