#include <stdio.h>
#include <stdlib.h>
#include "Queue.h"

struct TreeNode *root;

void createTree()
{
    struct TreeNode *p, *t;
    int x;

    printf("Enter root value ");
    scanf("%d", &x);

    root = (struct TreeNode *)malloc(sizeof(struct TreeNode));
    root->data = x;
    root->lChild = root->rChile = NULL;
    enqueue(root);

    while (!isEmpty())
    {
        p = dequeue();
        printf("Enter left child value of %d ", p->data);
        scanf("%d", &x);
        if (x != -1)
        {
            t = (struct TreeNode *)malloc(sizeof(struct TreeNode));
            t->data = x;
            t->lChild = t->rChile = NULL;
            p->lChild = t;
            enqueue(t);
        }
        printf("Enter right child value of %d ", p->data);
        scanf("%d", &x);
        if (x != -1)
        {
            t = (struct TreeNode *)malloc(sizeof(struct TreeNode));
            t->data = x;
            t->lChild = t->rChile = NULL;
            p->rChile = t;
            enqueue(t);
        }
    }
}

void preOrder(struct TreeNode *p)
{
    if (p)
    {
        printf("%d ", p->data);
        preOrder(p->lChild);
        preOrder(p->rChile);
    }
}

void inOrder(struct TreeNode *p)
{
    if (p)
    {
        inOrder(p->lChild);
        printf("%d ", p->data);
        inOrder(p->rChile);
    }
}

void postOrder(struct TreeNode *p)
{
    if (p)
    {
        postOrder(p->lChild);
        postOrder(p->rChile);
        printf("%d ", p->data);
    }
}

int main()
{
    createTree();
    preOrder(root);
    printf("\n");
    inOrder(root);
    printf("\n");
    postOrder(root);

    return 0;
}