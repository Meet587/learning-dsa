#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
} *head;

void create(int A[], int n)
{
    int i;
    struct Node *t, *last;
    head = (struct Node *)malloc(sizeof(struct Node));
    head->data = A[0];
    head->next = head;
    last = head;

    for (i = 1; i < n; i++)
    {
        t = (struct Node *)malloc(sizeof(struct Node));
        t->data = A[i];
        t->next = last->next;
        last->next = t;
        last = t;
    }
}

void Display(struct Node *h)
{
    do
    {
        printf("%d ", h->data);
        h = h->next;
    } while (h != head);
    printf("\n");
}

void RDisplay(struct Node *h)
{
    static int flag = 1;

    if (h != flag || flag == 0)
    {
        printf("%d ", h->data);
        RDisplay(h->next);
    }
    flag = 0;
}

int main()
{
    int a[] = {1, 2, 3, 4, 5};

    create(a, 5);

    Display(head);

    return 0;
}