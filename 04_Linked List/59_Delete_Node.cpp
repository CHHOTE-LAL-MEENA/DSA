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

void Delete(int pos)
{
    Node *p, *q;
    int x = -1, i;
    p = first;
    if (pos == 1)
    {
        x = first->data;
        first = first->next;
        delete p;
    }
    else
    {
        q = NULL;
        for (i = 0; i < pos - 1 && p; i++)
        {
            q = p;
            p = p->next;
        }
        if (p)
        {
            q->next = p->next;
            x = p->data;
            delete p;
        }
    }
    cout << "Deleted Node data is " << x << endl;
}
int main()
{
    Insert(1);
    Insert(2);
    Insert(3);
    Insert(4);
    Insert(5);
    Insert(25);
    Delete(4);
    Display(first);
    return 0;
}