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

int Sum(Node *p)
{
    int sum = 0;
    while (p)
    {
        sum += p->data;
        p = p->next;
    }
    return sum;
}

int RSum(Node *p)
{
    if (!p)
        return 0;
    else
        return RSum(p->next) + p->data;
}

int main()
{
    int A[] = {1, 2, 3, 4, 5, 6};
    create(A, 6);
    cout << Sum(first) << endl;
    cout << RSum(first) << endl;
    return 0;
}