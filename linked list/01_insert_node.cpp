#include <bits/stdc++.h>

using namespace std;

struct Node
{
    int data;
    struct Node *next;
} *first = NULL;

void create(int A[], int n)
{
    int i;
    struct Node *t, *last;

    first = (struct Node *)malloc(sizeof(struct Node));
    first->data = A[0];
    first->next = NULL;
    last = first;

    for (i = 1; i < n; i++)
    {
        // cout << last->data << endl;
        t = (struct Node *)malloc(sizeof(struct Node));
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last = t;
        // printf("%d ", t->data);
    }
}

void Display(struct Node *p)
{
    while (p != NULL)
    {
        printf("%d ", p->data);
        p = p->next;
    }
}

void RecursiveDisplay(struct Node *p)
{
    if (p != NULL)
    {
        printf("%d ", p->data);
        RecursiveDisplay(p->next);
    }
}

void RecursiveDisplay1(struct Node *p) // display in revers recursively
{
    if (p != NULL)
    {
        RecursiveDisplay1(p->next);
        printf("%d ", p->data);
    }
}

struct Node *Search(struct Node *p, int key)
{
    while (p)
    {
        if (p->data == key)
        {
            return p;
        }
        p = p->next;
    }
    return 0;
}

int main()
{
    int a[] = {3, 5, 7, 10, 25, 8, 32, 2};
    create(a, 8);
    // cout << Search(first, 10)->data << endl;
    return 0;
}