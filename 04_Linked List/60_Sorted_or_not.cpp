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

int IsSorted(Node *p)
{
    int x = INT32_MIN;
    while (p != NULL)
    {
        if (p->data < x)
            return false;
        x = p->data;
        p = p->next;
    }
    return true;
}

void RemoveDuplicates()
{
    Node *p = first;
    Node *q = first->next;
    while (q != NULL)
    {
        if (p->data != q->data)
        {
            p = q;
            q = q->next;
        }
        else
        {
            p->next = q->next;
            delete q;
            q = p->next;
        }
    }
}
int main()
{
    Insert(12);
    Insert(12);
    Insert(44);
    Insert(44);
    Insert(65);
    Insert(65);
    cout << IsSorted(first) << endl;
    RemoveDuplicates();
    Display(first);
    return 0;
}