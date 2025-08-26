#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
} *first = NULL;

void Insert(Node *p, int index, int x)
{
    Node *t;
    if (index == 0)
    {
        t = new Node;
        t->data = x;
        t->next = first;
        first = t;
    }
    else if (index > 0)
    {
        p = first;
        for (int i = 0; i < index - 1 && p; i++)
        {
            p = p->next;
        }
        if (p)
        {
            t = new Node;
            t->data = x;
            t->next = p->next;
            p->next = t;
        }
    }
}
void Display(Node *p)
{
    while (p != NULL)
    {
        cout << p->data << " ";
        p = p->next;
    }
    cout << endl;
}

void InsertLast(int x)
{
    Node *t, *last;
    t = new Node;
    t->data = x;
    t->next = NULL;
    if (first == NULL)
        first = last = t;
    else
    {
        last->next = t;
        last = t;
    }
}

void SortedList(Node *p, int x)
{
    Node *t, *q = NULL;
    t = new Node;
    t->data = x;
    t->next = NULL;

    if (p == NULL)
        first = t;
    else
    {
        while (p && p->data < x)
        {
            q = p;
            p = p->next;
        }
        if (p == first)
        {
            t->next = first;
            first = t;
        }
        else
        {
            t->next = p;
            q->next = t;
        }
    }
}
int main()
{
    /*Insert(first, 0, 34);
    Insert(first, 1, 44);
    Insert(first, 2, 54);
    Insert(first, 3, 64);
    Insert(first, 2, 24);*/
    InsertLast(2);
    InsertLast(4);
    InsertLast(6);
    InsertLast(8);
    InsertLast(10);
    SortedList(first, 5);
    SortedList(first, 3);
    SortedList(first, 1);
    Display(first);
    return 0;
}