#include <bits/stdc++.h>

using namespace std;

struct Node
{
    int data;
    struct Node *next;
} *first = NULL, *last = NULL;

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
        t = (struct Node *)malloc(sizeof(struct Node));
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}

int count(struct Node *p)
{
    int l = 0;
    while (p)
    {
        l++;
        p = p->next;
    }
    return l;
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

struct Node *LSearch(struct Node *p, int key)
{
    struct Node *q = NULL;
    while (p)
    {
        if (p->data == key)
        {
            q->next = p->next;
            p->next = first;
            first = p;
            return p;
        }
        q = p;
        p = p->next;
    }
    return 0;
}

struct Node *RSearch(struct Node *p, int key)
{
    if (p->next == NULL)
    {
        return NULL;
    }
    if (p->data == key)
    {
        return p;
    }
    RSearch(p->next, key);
}

void Insert(struct Node *p, int index, int x)
{
    if (index < 0 || index > count(p))
        return;
    struct Node *t;
    t = (struct Node *)malloc(sizeof(struct Node));
    t->data = x;

    if (index == 0)
    {
        t->next = first;
        first = t;
    }
    else
    {
        for (int i = 0; i < index - 1; i++)
        {
            p = p->next;
        }
        t->next = p->next;
        p->next = t;
    }
}

void InsertLast(int x)
{
    struct Node *t;
    t = (struct Node *)malloc(sizeof(struct Node));
    t->data = x;
    t->next = NULL;

    if (first == NULL)
    {
        first = last = t;
    }
    else
    {
        last->next = t;
        last = t;
    }
}

void SortedInsert(struct Node *p, int x)
{
    struct Node *t, *q;

    t = (struct Node *)malloc(sizeof(struct Node));
    t->data = x;
    t->next = NULL;

    if (first == NULL)
    {
        first = t;
    }
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
            t->next = q->next;
            q->next = t;
        }
    }
}

int Delete(struct Node *p, int index)
{
    struct Node *q = NULL;
    int x = -1, i;

    if (index < 1 || index > count(p))
        return -1;

    if (index == 1)
    {
        q = first;
        x = first->data;
        first = first->next;
        free(q);
        return x;
    }
    else
    {
        for (i = 0; i < index - 1; i++)
        {
            q = p;
            p = p->next;
        }
        q->next = p->next;
        x = p->data;
        free(p);
        return x;
    }
}

int isSorted(struct Node *p)
{
    int x = INT32_MIN;

    while (p)
    {
        if (p->data < x)
            return 0;

        x = p->data;
        p = p->next;
    }
    return 1;
}

void RemoveDuplicate(struct Node *p)
{
    struct Node *q = p->next;

    while (q != NULL)
    {
        if (p->data != q->data)
        {
            p = q;
            q = q->next;
        }
        else
        {
            p->next = q->next;
            free(q);
            q = p->next;
        }
    }
}

// Function to free the linked list
void freeLinkedList(struct Node *head)
{
    struct Node *temp;
    while (head != NULL)
    {
        temp = head;
        head = head->next;
        free(temp);
    }
}

int main()
{
    struct Node *temp;

    // int a[] = {3, 5, 7, 10, 25, 8, 32, 2};
    int a[] = {10, 20, 30, 30, 30, 30, 40, 40, 40, 50};

    // for (int i = 0; i < 6; i++)
    // {
    //     InsertLast(a[i]);
    // }

    create(a, 10);
    RemoveDuplicate(first);

    // cout << "i sorted list " << isSorted(first) << endl;

    // Delete(first, 2);

    // SortedInsert(first, 55);
    // SortedInsert(first, 25);

    // Insert(first, 0, 80);

    // freeLinkedList(first);
    // cout << Search(first, 10)->data << endl;

    // temp = LSearch(first, 25);
    // temp = LSearch(first, 8);
    // temp = LSearch(first, 10);
    // if (temp)
    //     cout << "key is found " << temp->data << endl;
    // else
    //     cout << "key is not found" << endl;

    Display(first);
    return 0;
}