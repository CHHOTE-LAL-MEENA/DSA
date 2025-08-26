#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
} *first = NULL;

void Insert(int x)
{
    Node *p, *t, *last;
    p = first;
    t = new Node;
    t->data = x;
    t->next = NULL;
    if (p == NULL)
        first = last = t;
    else
    {
        last->next = t;
        last = t;
    }
}

void Display(Node *p)
{
    while (p)
    {
        cout << p->data << " ";
        p = p->next;
    }
    cout << endl;
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

void Reverse1(Node *p)
{
    int *A, i = 0;
    Node *q = p;
    A = new int[count(p)];
    while (q != NULL)
    {
        A[i] = q->data;
        q = q->next;
        i++;
    }
    q = p;
    i--;
    while (q != NULL)
    {
        q->data = A[i];
        q = q->next;
        i--;
    }
}

void Reverse2(Node *p)
{
    Node *q = NULL, *r = NULL;
    while (p != NULL)
    {
        r = q;
        q = p;
        p = p->next;
        q->next = r;
    }
    first = q;
}

void Reverse3(Node *q, Node *p)
{
    if (p)
    {
        Reverse3(p, p->next);
        p->next = q;
    }
    else
        first = q;
}

int main()
{
    Insert(12);
    Insert(12);
    Insert(44);
    Insert(44);
    Insert(65);
    Insert(65);
    Reverse1(first);
    Reverse2(first);
    Reverse3(NULL, first);
    Display(first);
    return 0;
}