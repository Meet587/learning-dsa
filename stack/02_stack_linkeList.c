#include <stdio.h>
#include <stdlib.h>

struct Node
{
    char data;
    struct Node *next;
} *top = NULL;

void push(char x)
{
    struct Node *t = (struct Node *)malloc(sizeof(struct Node));

    if (t == NULL)
        printf("stack overflow \n");
    else
    {
        t->data = x;
        t->next = top;
        top = t;
    }
}

char pop()
{
    char x = -1;
    if (top == NULL)
        printf("stack is empty \n");
    else
    {
        struct Node *t = top;
        x = top->data;
        top = top->next;
        free(t);
    }
    return x;
}

void Display()
{
    struct Node *p = top;
    while (p != NULL)
    {
        printf("%d ", p->data);
        p = p->next;
    }
    printf("\n");
}

int isBalanced(char *exp)
{
    int i;

    for (i = 0; exp[i] != '\0'; i++)
    {
        if (exp[i] == '(')
            push(exp[i]);
        else if (exp[i] == ')')
        {
            if (top == NULL)
                return 0;
            pop();
        }
    }
    if (top == NULL)
        return 1;
    else
        return 0;
}

int main()
{
    // push(10);
    // push(20);
    // push(30);
    // push(40);
    // push(50);

    char *exp = "((a+b)*(c-d))";

    // Display();

    printf("%d ", isBalanced(exp));

    return 0;
}