#include <iostream>

using namespace std;

template <typename T>
class Node
{
public:
    T data;
    Node *next;

    // Node(T data) : data(data), next(nullptr) {}
};

template <typename T>
class LinkedList
{
public:
    Node<T> *first;

    // LinkedList() : {first = NULL};
    LinkedList(T A[], T n);
    ~LinkedList();

    void Display();
    int Length();
    void Insert(T index, T x);
    T Delete(T index);
    
};

template <typename T>
LinkedList<T>::LinkedList(T A[], T n)
{
    T i = 0;
    Node<T> *t, *last;

    first = new Node<T>;
    first->data = A[0];
    first->next = NULL;
    last = first;

    for (i = 1; i < n; i++)
    {
        t = new Node<T>;
        t->data = A[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}

template <typename T>
LinkedList<T>::~LinkedList()
{
    Node<T> *temp = first;
    while (first != NULL)
    {
        temp = first;
        first = first->next;
        delete temp;
    }
}

template <typename T>
void LinkedList<T>::Display()
{
    Node<T> *p = first;

    while (p != NULL)
    {
        cout << p->data << " ";
        p = p->next;
    }
    cout << endl;
}

template <typename T>
int LinkedList<T>::Length()
{
    Node<T> *p = first;
    int count = 0;
    while (p != NULL)
    {
        count++;
        p = p->next;
    }
    return count;
}

template <typename T>
void LinkedList<T>::Insert(T index, T x)
{
    Node<T> *t, *p = first;
    if (index < 0 || index > Length())
        return;
    t = new Node<T>;
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

template <typename T>
T LinkedList<T>::Delete(T index)
{
    T x = -1;
    Node<T> *q, *p = first;

    if (index < 1 || index > Length())
        return -1;

    if (index == 1)
    {
        x = first->data;
        first = first->next;
        delete p;
    }
    else
    {
        for (int i = 0; i < index - 1; i++)
        {
            q = p;
            p = p->next;
        }
        x = p->data;
        q->next = p->next;
        delete p;
    }
    return x;
}

int main()
{
    int a[] = {10, 20, 30, 40, 50};
    LinkedList<int> l(a, 5);

    cout << l.Delete(3) << endl;
    l.Insert(0, 8);
    cout << l.Length() << endl;

    l.Display();
    return 0;
}