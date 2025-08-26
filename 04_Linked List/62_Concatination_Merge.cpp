#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
} *first = NULL, *second = NULL, *third = NULL;

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

void Insert2(int x)
{
    Node *p, *t, *last;
    p = second;
    t = new Node;
    t->data = x;
    t->next = NULL;
    if (p == NULL)
        second = last = t;
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

void Concatination(Node *p, Node *q)
{
    while (p->next != NULL)
        p = p->next;
    p->next = q;
}

void Merge(Node *p, Node *q)
{
    Node *last;
    if (p->data < q->data)
    {
        third = last = p;
        p = p->next;
        third->next = NULL;
    }
    else
    {
        third = last = q;
        q = q->next;
        third->next = NULL;
    }
    while(p && q){
        if(p->data<q->data){
            last->next=p;
            last=p;
            p=p->next;
            last->next=NULL;
        }
        else{
            last->next=q;
            last=q;
            q=q->next;
            last->next=NULL;
        }
    }
    if(p) last->next=p;
    if(q) last->next=q;
}

int main()
{
    Insert(10);
    Insert(20);
    Insert(30);
    Display(first);
    Insert2(5);
    Insert2(15);
    Insert2(25);
    Insert2(35);
    Display(second);
    // Concatination(first, second);
    // Display(first);
    Merge(first,second);
    Display(third);
    return 0;
}