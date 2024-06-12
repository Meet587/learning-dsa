#include <iostream>

using namespace std;

class Node
{
public:
    int data;
    Node *next;
};

class LinkedList
{
private:
    Node *first;

public:
    LinkedList() { first = NULL; }
    LinkedList(int A[], int n);
    ~LinkedList();

    void Display();
    int Length();
    void Insert(int index, int x);
    int Delete(int index);
};

LinkedList::LinkedList(int A[], int n)
{
    int i = 0;
    Node *t, *last;

    first = new Node;
    first->data = A[0];
    first->next = NULL;
    last = first;

    for (i = 1; i < n; i++)
    {
        t = new Node;
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}

LinkedList::~LinkedList()
{
    Node *temp;
    while (first != NULL)
    {
        temp = first;
        first = first->next;
        delete temp;
    }
}

void LinkedList::Display()
{
    Node *p = first;
    while (p != NULL)
    {
        printf("%d ", p->data);
        p = p->next;
    }
}

int LinkedList::Length()
{
    Node *p = first;
    int l = 0;
    while (p)
    {
        l++;
        p = p->next;
    }
    return l;
}

void LinkedList::Insert(int index, int x)
{
    Node *t, *p = first;
    if (index < 0 || index > Length())
        return;
    t = new Node;
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

int LinkedList::Delete(int index)
{

    Node *q = NULL, *p = first;
    int x = -1, i = 0;

    if (index < 1 || index > Length())
        return -1;

    if (index == 1)
    {
        x = p->data;
        first = first->next;
        delete p;
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
        delete p;
    }
    return x;
}

int main()
{
    int a[] = {10, 20, 30, 40, 50};
    LinkedList l(a, 5);

    // cout << l.Delete(3) << endl;
    l.Insert(0, 8);
    // cout << l.Length() << endl;

    l.Display();

    return 0;
}