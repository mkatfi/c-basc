
#include <stdio.h>


typedef struct node
{
    int data;
    struct node* next;
} Node;

int lsize(Node *var)
{
    int i = 0;

    while (var != NULL)
    {
        var = var->next;
        i++;
    }
    return(i);
}
int main()
{
    Node    a;
    Node    b;
    Node    c;
    Node    d;
    Node    e;

    a.data = 0;
    b.data = 1;
    c.data = 2;
    d.data = 3;
    e.data = 4;
    a.next = &b;
    b.next = &c;
    c.next = &d;
    d.next = &e;
    e.next = NULL;
    printf("%d", lsize(&a));
}