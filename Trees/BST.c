#include <stdio.h>
#include <stdlib.h>

struct Node
{
    struct Node *lchild;
    int data;
    struct Node *rchild;
} *root = NULL;

struct Stack
{
    int size;
    int top;
    struct Node **S;
};

void push(struct Stack *st, struct Node *x)
{
    if (st->top == st->size - 1)
        printf("stack overflow \n");
    else
    {
        st->top++;
        st->S[st->top] = x;
    }
}

struct Node *pop(struct Stack *st)
{
    struct Node *x = NULL;
    if (st->top == -1)
    {
        printf("stack is empty \n");
    }
    else
    {
        x = st->S[st->top];
        st->top--;
    }
    return x;
}

int isEmpty(struct Stack st)
{
    if (st.top == -1)
        return 1;
    return 0;
}

struct Node *stackTop(struct Stack st)
{
    if (!isEmpty(st))
        return st.S[st.top];
    return NULL;
}

void Insert(int key)
{
    struct Node *t = root;
    struct Node *r, *p;

    if (root == NULL)
    {
        p = (struct Node *)malloc(sizeof(struct Node));
        p->data = key;
        p->lchild = p->rchild = NULL;
        root = p;
        return;
    }
    while (t != NULL)
    {
        r = t;
        if (key < t->data)
            t = t->lchild;
        else if (key > t->data)
            t = t->rchild;
        else
            return;
    }
    p = (struct Node *)malloc(sizeof(struct Node));
    p->data = key;
    p->lchild = p->rchild = NULL;

    if (key < r->data)
        r->lchild = p;
    else
        r->rchild = p;
}

struct Node *RInsert(struct Node *p, int key)
{
    struct Node *t = NULL;
    if (p == NULL)
    {
        t = (struct Node *)malloc(sizeof(struct Node));
        t->data = key;
        t->lchild = t->rchild = NULL;
        return t;
    }

    if (key < p->data)
        p->lchild = RInsert(p->lchild, key);
    else if (key > p->data)
        p->rchild = RInsert(p->rchild, key);

    return p;
}

struct Node *Search(int key)
{
    struct Node *p = root;

    while (p != NULL)
        if (key == p->data)
            return p;
        else if (key < p->data)
            p = p->lchild;
        else
            p = p->rchild;

    return NULL;
}

int Height(struct Node *p)
{
    if (p == NULL)
        return 0;

    int x = 0, y = 0;

    x = Height(p->lchild);
    y = Height(p->rchild);

    return x > y ? (x + 1) : (y + 1);
}

struct Node *InPre(struct Node *p)
{
    while (p && p->rchild != NULL)
        p = p->rchild;
    return p;
}

struct Node *InSucc(struct Node *p)
{
    while (p && p->lchild != NULL)
        p = p->lchild;
    return p;
}

struct Node *Delete(struct Node *p, int key)
{

    if (p == NULL)
        return NULL;

    if (p->lchild == NULL && p->rchild == NULL)
    {
        if (p == root)
            root = NULL;
        free(p);
        return NULL;
    }

    if (key < p->data)
        p->lchild = Delete(p->lchild, key);
    else if (key > p->data)
        p->rchild = Delete(p->rchild, key);
    else
    {
        struct Node *q = NULL;
        if (Height(p->lchild) > Height(p->rchild))
        {
            q = InPre(p->lchild);
            p->data = q->data;
            p->lchild = Delete(p->lchild, q->data);
        }
        else
        {
            q = InSucc(p->rchild);
            p->data = q->data;
            p->rchild = Delete(p->rchild, q->data);
        }
    }
    return p;
}

void InOrder(struct Node *p)
{
    if (p)
    {
        InOrder(p->lchild);
        printf("%d ", p->data);
        InOrder(p->rchild);
    }
}

// Generate BTS from PreOrder Function
// not working 309
void createPre(int pre[], int n)
{
    struct Stack stk;
    stk.top = -1;
    stk.size = 8;
    struct Node *t, *p;
    int i = 0;

    root = (struct Node *)malloc(sizeof(struct Node));
    root->data = pre[i++];
    root->lchild = root->rchild = NULL;
    p = root;

    while (i < n)
    {
        if (pre[i] < p->data)
        {
            t = (struct Node *)malloc(sizeof(struct Node));
            t->data = pre[i++];
            t->lchild = t->rchild = NULL;
            p->lchild = t;
            push(&stk, p);
            p = t;
        }
        else
        {
            if (pre[i] > p->data && stackTop(stk) && pre[i] > stackTop(stk)->data)
            {
                t = (struct Node *)malloc(sizeof(struct Node));
                t->data = pre[i++];
                t->lchild = t->rchild = NULL;
                p->lchild = t;
                p = t;
            }
            else
            {
                p = pop(&stk);
            }
        }
    }
}

int main()
{
    struct Node *temp;
    // root = RInsert(root, 50);
    // root = RInsert(root, 10);
    // root = RInsert(root, 40);
    // root = RInsert(root, 20);
    // root = RInsert(root, 30);
    // root = RInsert(root, 46);

    // Delete(root, 50);

    // InOrder(root);

    // printf("\n");

    // temp = Search(30);
    // if (temp != NULL)
    //     printf("%d found \n", temp->data);
    // else
    //     printf("data not found");
    // return 0;

    int pre[8] = {30, 20, 10, 15, 25, 40, 50, 45};
    createPre(pre, 8);
    InOrder(root);
}