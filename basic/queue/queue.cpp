#include <iostream>
using namespace std;

const int maxSize = 5;

int queue[maxSize];
int front = -1;
int rear = -1;

bool isEmpty()
{
    if (front == -1 && rear == -1)
    {
        return true;
    }
    return false;
}

bool isFull()
{
    if (((rear + 1) % maxSize) == front)
    {
        return true;
    }
    return false;
}

void enqueue(int x)
{
    if (isFull())
    {
        cout << "Queue full! Cannot enqueue " << x << endl;
    }
    else if (isEmpty())
    {
        front = rear = 0;
        queue[rear] = x;
    }
    else
    {
        rear = (rear + 1) % maxSize;
        queue[rear] = x;
    }
}

void dequeue()
{
    if (isEmpty())
    {
        cout << "Queue is empty! Dequeue not possible." << endl;
    }
    else if (front == rear)
    {
        front = rear = -1;
    }
    else
    {
        front = (front + 1) % maxSize;
    }
}

int frontElement()
{
    if (!isEmpty())
    {
        return queue[front];
    }
    return -1;
}

void showQueue()
{
    if (isEmpty())
    {
        cout << "Queue is empty!" << endl;
    }
    else if (front <= rear)
    {
        for (int i = front; i <= rear; i++)
        {
            cout << queue[i] << " ";
        }
        cout << endl;
    }
    else
    {
        for (int i = front; i < maxSize; i++)
        {
            cout << queue[i] << " ";
        }
        for (int i = 0; i <= rear; i++) {
            cout << queue[i] << " ";
        }
        cout << endl;
    }
}

int main()
{

    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    enqueue(50);
    enqueue(60);

    cout << "Queue elements: ";
    showQueue();

    dequeue();
    dequeue();
    dequeue();
    dequeue();
    dequeue();

    cout << "After dequeue, queue elements: ";
    showQueue();


    return 0;
}
