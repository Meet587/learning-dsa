#include <stdio.h>
#include <stdlib.h>
#include "Queue.h"
#ifndef Stack_h
#define Stack_h

struct Stack
{
    int size;
    int top;
    struct TreeNode **S;
};

void createStack(struct Stack *st, int size)
{
    st->size = size;
    st->top = -1;
    st->S = (struct TreeNode **)malloc(st->size * sizeof(struct TreeNode *));
}

void push(struct Stack *st, struct TreeNode *x)
{
    if (st->top == st->size - 1)
        printf("stack overflow \n");
    else
    {
        st->top++;
        st->S[st->top] = x;
    }
}

struct TreeNode *pop(struct Stack *st)
{
    struct TreeNode *x = NULL;
    if (st->top == -1)
        printf("stack is empty \n");
    else
    {
        x = st->S[st->top];
        st->top--;
    }
    return x;
}

int isEmptyStack(struct Stack st)
{
    if (st.top == -1)
        return 1;
    return 0;
}

int isFullStack(struct Stack st)
{
    return st.top == st.size - 1;
}

#endif