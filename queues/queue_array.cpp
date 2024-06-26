#include <bits/stdc++.h>

using namespace std;

class Queue
{
private:
    int size;
    int front;
    int rear;
    int *Q;

public:
    Queue();
    Queue(int size);
    ~Queue();
    void enqueue(int x);
    int dequeue();
    void Display();
};

Queue::Queue()
{
    front = rear = -1;
    size = 10;
    Q = new int[size];
}

Queue::Queue(int size)
{
    front = rear = -1;
    this->size = size;
    Q = new int[this->size];
}

Queue::~Queue()
{
}

void Queue::enqueue(int x)
{
    if (rear == size - 1)
        cout << "Queue is full \n";
    else
    {
        rear++;
        Q[rear] = x;
    }
}

int Queue::dequeue()
{
    int x = -1;
    if (front == rear)
        cout << "Queue is empty \n";
    else
    {
        front++;
        x = Q[front];
    }
    return x;
}

void Queue::Display()
{
    for (int i = front + 1; i <= rear; i++)
        cout << Q[i] << " ";
    cout << endl;
}

int main()
{
    Queue q(5);

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);

    q.dequeue();
    q.Display();

    return 0;
}