#include <bits/stdc++.h>
using namespace std;

#define SIZE 10

int a[SIZE];
int front = -1;
int rear = -1;

bool isFull();
bool isEmpty();

void enqueue(int n)
{
    if (isFull())
    {
        cout << "Queue is Full";
        return;
    }

    if (isEmpty())
    {
        front = 0;
    }

    rear = (rear + 1) % SIZE;
    a[rear] = n;
    cout << n << " inserted";
}

void dequeue()
{
    if (isEmpty())
    {
        cout << "Queue is Empty";
        return;
    }

    cout << a[front] << " removed";

    if (front == rear)
    {
        front = rear = -1;
    }
    else
    {
        front = (front + 1) % SIZE;
    }
}

void display()
{
    if (isEmpty())
    {
        cout << "Queue is Empty";
        return;
    }

    int i = front;
    cout << "Queue: ";
    while (true)
    {
        cout << a[i] << " ";
        if (i == rear)
            break;
        i = (i + 1) % SIZE;
    }
    cout << endl;
}

bool isFull()
{
    return ((rear + 1) % SIZE == front);
}

bool isEmpty()
{
    return (front == -1);
}

int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);
    display();

    dequeue();
    display();

    enqueue(40);
    enqueue(50);
    enqueue(60);
    display();

    return 0;
}
