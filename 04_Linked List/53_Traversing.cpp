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

void Display(Node *p)
{
    while (p != NULL)
    {
        cout << p->data << " ";
        p = p->next;
    }
    cout << endl;
}

// Display Linked list Recursively.
void RDisplay(Node *p)
{
    if (p != NULL)
    {
        RDisplay(p->next);  // At Return time Display(Reverse Linked list).
        cout << p->data << " ";
        // RDisplay(p->next);  //At Calling time Display.
    }
}

int main()
{
    int A[] = {1, 2, 3, 4, 5};
    create(A, 5);
    Display(first);
    RDisplay(first);

    return 0;
}
