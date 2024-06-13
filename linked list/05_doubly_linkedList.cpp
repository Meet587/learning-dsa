#include <stdio.h>
#include <stdlib.h>

struct Node
{
    struct Node *prev;
    int data;
    struct Node *next;
} *first = NULL;

void create(int A[], int n)
{
    struct Node *t, *last;
    int i;

    first = (struct Node *)malloc(sizeof(struct Node));
    first->data = A[0];
    first->prev = first->next = NULL;
    last = first;

    for (i = 1; i < n; i++)
    {
        t = (struct Node *)malloc(sizeof(struct Node));
        t->data = A[i];
        t->next = NULL;
        t->prev = last;
        last->next = t;
        last = t;
    }
}

void Display(struct Node *p)
{
    while (p)
    {
        printf("%d ", p->data);
        p = p->next;
    }
    printf("\n");
}

int Length(struct Node *p)
{
    int len = 0;
    while (p)
    {
        len++;
        p = p->next;
    }
    return len;
}

void Insert(struct Node *p, int index, int x)
{
    struct Node *t = (struct Node *)malloc(sizeof(struct Node));
    int i = 0;

    if (index < 0 || index > Length(first) + 1)
        return;

    if (index == 0)
    {
        t->data = x;
        t->prev = NULL;
        t->next = first;
        first->prev = t;
        first = t;
    }
    else
    {
        for (i = 1; i < index - 1; i++)
            p = p->next;
        t->data = x;
        t->prev = p;
        t->next = p->next;
        p->next = t;
        if (t->next)
            t->next->prev = t;
    }
}

int Delete(struct Node *p, int index)
{
    int i, x = 0;
    if (index < 1 || index > Length(first))
        return -1;

    if (index == 1)
    {
        x = p->data;
        first = p->next;
        if (first)
            p->next->prev = NULL;
        free(p);
    }
    else
    {
        for (i = 0; i < index - 1; i++)
            p = p->next;
        x = p->data;
        p->prev->next = p->next;
        if (p->next)
            p->next->prev = p->prev;
    }
    return x;
}

void Reverse(struct Node *p)
{
    struct Node *temp;
    while (p)
    {
        temp = p->next;
        p->next = p->prev;
        p->prev = temp;
        p = p->prev;

        if (p != NULL && p->next == NULL)
            first = p;
    }
}

int main()
{
    int a[] = {1, 2, 3, 4, 5};

    create(a, 5);

    // Insert(first, 6, 9);

    // Delete(first, 0);

    // printf("length of list is %d \n", Length(first));

    Reverse(first);

    Display(first);

    return 0;
}