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

int max(Node *p)
{
    int m = INT32_MIN;
    while (p)
    {
        if (p->data > m)
            m = p->data;
        p = p->next;
    }
    return m;
}

int Rmax(Node *p)
{
    int x = 0;
    if (p == 0)
        return INT32_MIN;
    x = max(p->next);
    return x > p->data ? x : p->data;
}

int main()
{
    int A[] = {1, 2, 3, 41, 5, 6};
    create(A, 6);
    cout << max(first) << endl;
    cout << Rmax(first) << endl;

    return 0;
}