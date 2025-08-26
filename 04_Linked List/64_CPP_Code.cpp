#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
} *first = NULL;

class LinkedList
{
private:
    Node *first;

public:
    LinkedList() { first = NULL; }
    LinkedList(int A[], int n);
    ~LinkedList();

    void Display();
    void Insert(int index, int x);
    void Delete(int index);
    int Length();
};

LinkedList::LinkedList(int A[], int n)
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

LinkedList::~LinkedList()
{
    Node *p = first;
    while (first)
    {
        first = first->next;
        delete p;
        p = first;
    }
}

void LinkedList::Display()
{
    Node *p = first;
    while (p != NULL)
    {
        cout << p->data << " ";
        p = p->next;
    }
    cout << endl;
}

int LinkedList::Length()
{
    Node *p = first;
    int len = 0;
    while (p)
    {
        len++;
        p = p->next;
    }
    return len;
}
void LinkedList::Insert(int index, int x)
{
    Node *t, *p = first;
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

void LinkedList::Delete(int index)
{
    Node *p, *q = NULL;
    int x = -1;
    if (index < 1 || index > Length())
        return;
    if (index == 1)
    {
        p = first;
        first = first->next;
        x = p->data;
        delete p;
    }
    else
    {
        p = first;
        for (int i = 0; i < index - 1; i++)
        {
            q = p;
            p = p->next;
        }
        q->next = p->next;
        x = p->data;
        cout << "Deleted Element is : " << x << endl;
        delete p;
    }
}
int main()
{
    int A[] = {1, 2, 3, 4, 5};
    LinkedList l(A, 5);
    cout << l.Length() << endl;
    l.Insert(5, 6);
    l.Delete(4);
    l.Display();

    return 0;
}