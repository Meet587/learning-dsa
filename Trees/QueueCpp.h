#include <stdio.h>
#include <bits/stdc++.h>
#ifndef QueueCpp_h
#define QueueCpp_h

using namespace std;

class TreeNode
{
public:
    TreeNode *lChild;
    int data;
    TreeNode *rChild;
};

class Queue
{
private:
    int size;
    int front;
    int rear;
    TreeNode **Q;

public:
    Queue();
    Queue(int size);
    ~Queue();
    void enqueue(TreeNode *x);
    TreeNode *dequeue();
    void Display();
    int isEmpty();
};

Queue::Queue()
{
    front = rear = -1;
    size = 10;
    Q = new TreeNode *[size];
}

Queue::Queue(int size)
{
    front = rear = -1;
    this->size = size;
    Q = new TreeNode *[this->size];
}

Queue::~Queue()
{
}

int Queue::isEmpty()
{
    return front == rear;
}

void Queue::enqueue(TreeNode *x)
{
    if (rear == size - 1)
        cout << "Queue is full \n";
    else
    {
        rear++;
        Q[rear] = x;
    }
}

TreeNode *Queue::dequeue()
{
    TreeNode *x = NULL;
    if (front == rear)
        cout << "Queue is empty \n";
    else
    {
        front++;
        x = Q[front];
    }
    return x;
}

#endif