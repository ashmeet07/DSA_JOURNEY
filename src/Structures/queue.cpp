#include <bits/stdc++.h>
using namespace std;

#define MAX 10

int a[MAX];
int front = -1;
int rear  = -1;

void enqueue(int n) {
    if (rear == MAX - 1) {
        cout << "Queue is full\n";
        return;
    }

    if (front == -1) {
        front = rear = 0;
    } else {
        rear++;
    }
    a[rear] = n;
}

void dequeue() {
    if (front == -1) {
        cout << "Queue is empty\n";
        return;
    }

    if (front == rear) {
        front = rear = -1;
    } else {
        front++;
    }
}

bool isEmpty() {
    return front == -1;
}

int peek() {
    if (isEmpty()) {
        cout << "Queue is empty\n";
        return -1;
    }
    return a[front];
}

int main() {
    enqueue(10);
    enqueue(20);
    dequeue();

    cout << "Front element: " << peek() << endl;
    cout << "Is empty: " << isEmpty() << endl;
}
