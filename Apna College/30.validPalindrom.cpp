#include <iostream>
using namespace std;

bool isAlphnum(char ch)
{
    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9'))
        return true;
    return false;
}

bool validPalindrom(string s)
{
    int p = 0, q = s.size() - 1;
    while (p < q)
    {
        if (!isAlphnum(s[p]))
        {
            p++;
            continue;
        }
        if (!isAlphnum(s[q]))
        {
            q--;
            continue;
        }
        if (tolower(s[p]) != tolower(s[q]))
            return false;
        p++;
        q--;
    }
    return true;
}
int main()
{
    string s = "mana52, plana :c analp, 25anam";
    cout << s<<endl;
    cout << validPalindrom(s) << endl;

    return 0;
}