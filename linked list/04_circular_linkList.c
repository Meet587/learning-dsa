#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *next;
} *head = NULL;

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

int Length(struct Node *l)
{
    int len = 0;
    if (l == NULL)
        return len;
    do
    {
        len++;
        l = l->next;
    } while (l != head);
    return len;
}

void RDisplay(struct Node *h)
{
    static int flag = 1;

    if (h != head || flag == 0)
    {
        printf("%d ", h->data);
        RDisplay(h->next);
    }
    flag = 0;
}

void Insert(struct Node *p, int index, int x)
{
    struct Node *t;
    int i;

    if (index < 0 || Length(head) < index)
    {
        printf("%d invalid index to insert \n", index);
        return;
    }

    if (index == 0)
    {
        t = (struct Node *)malloc(sizeof(struct Node));
        t->data = x;
        if (head == NULL)
        {
            head = t;
            head->next = head;
        }
        else
        {
            while (p->next != head)
                p = p->next;
            p->next = t;
            t->next = head;
            head = t;
        }
    }
    else
    {
        for (i = 0; i < index - 1; i++)
            p = p->next;

        t = (struct Node *)malloc(sizeof(struct Node));
        t->data = x;
        t->next = p->next;
        p->next = t;
    }
}

int Delete(struct Node *p, int index)
{
    struct Node *q;
    int i, x;

    if (index < 1 || index > Length(head))
        return -1;

    if (index == 1)
    {
        while (p->next != head)
            p = p->next;

        x = head->data;
        if (head == p)
        {
            free(head);
            head = NULL;
        }
        else
        {
            p->next = head->next;
            free(head);
            head = p->next;
        }
    }
    else
    {
        for (i = 0; i < index - 2; i++)
            p = p->next;
        q = p->next;
        p->next = q->next;
        x = q->data;
        free(q);
    }
    return x;
}

int main()
{
    int a[] = {1, 2, 3, 4, 5};

    create(a, 5);

    // Insert(head, 7, 10);

    Delete(head, 5);

    Display(head);

    return 0;
}