#include <stdio.h>
#include <stdlib.h>

#ifndef Queue_h
#define Queue_h

struct TreeNode
{
    struct TreeNode *lChild;
    int data;
    struct TreeNode *rChile;
};

struct Node
{
    struct TreeNode *treeNode;
    struct Node *next;
} *front = NULL, *rear = NULL;

void enqueue(struct TreeNode *x)
{
    struct Node *t = (struct Node *)malloc(sizeof(struct Node));

    if (t == NULL)
        printf("Queue is full \n");
    else
    {
        t->treeNode = x;
        t->next = NULL;
        if (front == NULL)
            front = rear = t;
        else
        {
            rear->next = t;
            rear = t;
        }
    }
}

struct TreeNode *dequeue()
{
    struct TreeNode *x = NULL;
    struct Node *t;

    if (front == NULL)
        printf("Queue is Empty \n");
    else
    {
        x = front->treeNode;
        t = front;
        front = front->next;
        free(t);
    }
    return x;
}

int isEmpty()
{
    return front == NULL;
}

void Display()
{
    struct Node *p = front;

    while (p)
    {
        printf("%d ", p->treeNode->data);
        p = p->next;
    }
    printf("\n");
}

void DeleteQueue()
{
    // Free allocated memory
    while (front != NULL)
    {
        struct Node *temp = front;
        front = front->next;
        free(temp->treeNode); // Free the TreeNode memory
        free(temp);           // Free the Node memory
    }
}

struct TreeNode *peek(struct Node *front)
{
    if (front == NULL)
    {
        printf("Queue is empty\n");
        return NULL;
    }
    return front->treeNode;
}

#endif