#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node *next;
} *Head;

void create(int A[], int n)
{
    int i;
    Node *t, *last;
    Head = new Node;
    Head->data = A[0];
    Head->next = Head;
    last = Head;

    for (i = 1; i < n; i++)
    {
        t = new Node;
        t->data = A[i];
        t->next = last->next;
        last->next = t;
        last = t;
    }
}

void Display(Node *h)
{
    do
    {
        cout << h->data << " ";
        h = h->next;
    } while (h != Head);
    cout << endl;
}

void RDisplay(Node *h)
{
    static int flag = 0;
    if (h != Head || flag == 0)
    {
        flag = 1;
        cout << h->data << " ";
        RDisplay(h->next);
    }
    flag = 0;
}

int Length()
{
    Node *p = Head;
    int len = 0;
    do
    {
        len++;
        p = p->next;
    } while (p != Head);
    return len;
}
void Insert(int index, int x)
{
    Node *t, *p = Head;
    t = new Node;
    t->data = x;
    if (index < 0 || index > Length())
        return;
    if (index == 0)
    {
        if (Head == NULL)
        {
            Head = t;
            Head->next = Head;
        }
        else
        {
            while (p->next != Head)
                p = p->next;
            p->next = t;
            t->next = Head;
            Head = t;
        }
    }
    else
    {
        for (int i = 0; i < index - 1; i++)
            p = p->next;
        t->next = p->next;
        p->next = t;
    }
}

int Delete(Node *p, int index)
{
    Node *q;
    int i, x;

    if (index < 0 || index > Length())
        return -1;
    if (index == 1)
    {
        while (p->next != Head)
            p = p->next;
        x = Head->data;
        if (Head == p)
        {
            delete (Head);
            Head = NULL;
        }
        else
        {
            p->next = Head->next;
            delete (Head);
            Head = p->next;
        }
    }
    else
    {
        for (i = 0; i < index - 2; i++)
            p = p->next;
        q = p->next;
        p->next = q->next;
        x = q->data;
        delete (q);
    }
    return x;
}
int main()
{
    int A[] = {2, 3, 4, 5, 6};
    create(A, 5);
    Display(Head);
    Insert(5, 8);
    Delete(Head, 1);
    RDisplay(Head);
    return 0;
}
