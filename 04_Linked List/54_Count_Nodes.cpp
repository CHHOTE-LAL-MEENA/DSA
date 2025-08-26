#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
} *first = NULL;

void create(int A[], int n)
{
    if (n == 0)
        return;
    int i;
    struct Node *t, *last;
    first = new Node;
    first->data = A[0];
    first->next = NULL;
    last = first;

    for (i = 1; i < n; i++)
    {
        t = new Node;
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}

int count(Node *p)
{
    int count = 0;
    while (p != NULL)
    {
        count++;
        p = p->next;
    }
    return count;
}

int Rcount(Node *p)
{
    int count = 0;
    if (p == NULL)
        return 0;
    else
        return Rcount(p->next) + 1;
}

int Rcount2(Node *p)
{
    /*if (p != NULL)
        return 1 + Rcount(p->next);
    else
        return 0;*/

    int x = 0;
    if (p)
    {
        x = Rcount2(p->next);
        return x + 1;
    }
    else
        return x;
}

int main()
{
    int A[] = {1, 2, 3, 4, 5, 6};
    create(A, 6);
    cout << count(first) << endl;
    cout << Rcount(first) << endl;
    cout << Rcount2(first) << endl;
    return 0;
}