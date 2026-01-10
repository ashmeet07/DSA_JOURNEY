#include <bits/stdc++.h>
using namespace std;

#define MAX 10

int a[MAX];
int top = -1;

int peek() {
    if (top == -1) {
        cout << "Stack is empty";
        return -1;
    }
    return a[top];
}

void pop() {
    if (top == -1) {
        cout << "Stack underflow";
        return;
    }
    top--;
}

void push(int i) {
    if (top == MAX - 1) {
        cout << "Stack overflow";
        return;
    }
    a[++top] = i;
}

bool isEmpty() {
    return top == -1;
}

int main() {
    push(10);
    push(20);
    push(30);

    pop();

    cout << "Top element: " << peek() << endl;

    if (isEmpty())
        cout << "Stack is empty";
    else
        cout << "Stack is not empty";
}
