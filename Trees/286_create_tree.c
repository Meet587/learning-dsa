#include <stdio.h>
#include <stdlib.h>
#include "Queue.h"
#include "Stack.h"

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

void IPreOrder(struct TreeNode *p)
{
    struct Stack stk;
    createStack(&stk, 100);

    while (p || !isEmptyStack(stk))
    {
        if (p)
        {
            printf("%d ", p->data);
            push(&stk, p);
            p = p->lChild;
        }
        else
        {
            p = pop(&stk);
            p = p->rChile;
        }
    }
}

void IInOrder(struct TreeNode *p)
{
    struct Stack stk;
    createStack(&stk, 100);

    while (p || !isEmptyStack(stk))
    {
        if (p)
        {
            push(&stk, p);
            p = p->lChild;
        }
        else
        {
            p = pop(&stk);
            printf("%d ", p->data);
            p = p->rChile;
        }
    }
}

void LevelOrder(struct TreeNode *root)
{
    //   struct  Queue q();

    printf("%d ", root->data);
    enqueue(root);

    while (!isEmpty())
    {
        root = dequeue();
        if (root->lChild)
        {
            printf("%d ", root->lChild->data);
            enqueue(root->lChild);
        }
        if (root->rChile)
        {
            printf("%d ", root->rChile->data);
            enqueue(root->rChile);
        }
    }
}

int count(struct TreeNode *root)
{
    if (root)
        return count(root->lChild) + count(root->rChile) + 1;
    return 0;
}

int Height(struct TreeNode *root)
{
    int x = 0;
    int y = 0;
    if (root == 0)
        return 0;
    x = Height(root->lChild);
    y = Height(root->rChile);

    if (x > y)
        return x + 1;
    return y + 1;
}

int main()
{
    createTree();

    IPreOrder(root);
    printf("\n");
    preOrder(root);
    printf("\n");

    IInOrder(root);
    printf("\n");
    inOrder(root);
    printf("\n");


    LevelOrder(root);
    printf("\n");

    printf("%d count \n", count(root));
    printf("%d Height \n", Height(root));

    // postOrder(root);

    return 0;
}