#include <iostream>
#include <vector>
using namespace std;

bool validPalindrom(string s)
{
    int p = 0, q = s.size() - 1;
    while (p < q)
    {
        if (tolower(s[p++]) != tolower(s[q--]))
            return false;
    }
    return true;
}
int main()
{
    string s = "mana plana c analp anam";
    cout << validPalindrom(s) << endl;
    cout << s;

    return 0;
}