#include <iostream>
#include <cstring>
using namespace std;

struct Node
{
    char data;
    Node *next;
} *top = NULL;

void push(char x)
{
    Node *t;
    t = new Node;
    if (t == NULL)
        cout << "Stack is overflow!!" << endl;
    else
    {
        t->data = x;
        t->next = top;
        top = t;
    }
}

char pop()
{
    Node *t;
    char x = -1;
    if (top == NULL)
        cout << "Stack is Empty!!" << endl;
    else
    {
        t = top;
        top = top->next;
        x = t->data;
        delete t;
    }
    return x;
}

int isBalanced(char *exp)
{
    for (int i = 0; exp[i] != '\0'; i++)
    {
        if (exp[i] == '(')
            push(exp[i]);
        else if (exp[i] == ')')
        {
            if (top == NULL)
                return 0;
            pop();
        }
    }
    return top == NULL;
}

int pre(char x)
{
    if (x == '+' || x == '-')
        return 1;
    else if (x == '*' || x == '/')
        return 2;
    return 0;
};

int isOperand(char x)
{
    if (x == '+' || x == '-' || x == '*' || x == '/')
        return 0;
    return 1;
}

char *InToPost(char *infix)
{
    int i = 0, j = 0;
    char *postfix;
    int len = strlen(infix);
    postfix = new char[len + 2];
    while (infix[i] != '\0')
    {
        if (isOperand(infix[i]))
            postfix[j++] = infix[i++];
        else
        {
            if (pre(infix[i]) > pre(top->data))
                push(infix[i++]);
            else
            {
                postfix[j++] = pop();
            }
        }
    }
    while (top != NULL)
        postfix[j++] = pop();
    postfix[j] = '\0';
    return postfix;
}
int main()
{
    /*char *exp = "((a+b)*(c-d))";
    if (isBalanced(exp))
        cout << "Balanced" << endl;
    else
        cout << "Not Balanced" << endl;*/

    char *infix = "a+b*c-d/e";
    push('#');
    char *postfix = InToPost(infix);
    cout << postfix << endl;

    return 0;
}
