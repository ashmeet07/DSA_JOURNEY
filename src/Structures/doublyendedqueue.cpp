#include<bits/stdc++.h>
using namespace std;
#define max 10
int a[max];
int front=-1;
int rear=-1;
bool isfull();
bool isempty();
void insertFront(int n){
        if(isfull()){
            cout<<"Queue is full";
            return ;
        }
        if(isempty()){
            front=rear=0;
        }
        else if(front==0){
            front=max-1;
        }
        else{
            front--;
        }
        a[front]=n;
        cout<<"Element is inserted okay";
}
void deleteFront(){
    if(isempty()){
        cout<<"Queue isempty";
        return ;
    }
    if(front==rear){
        front=rear=-1;
    }
    else if(front==max-1){
        front=0;
    }
    else{
        front++;
    }
    cout<<"Element removed";
}
void insertRear(int n){
    if(isfull()){
        cout<<"Queue is full";
        return ;
    }
    if(isempty()){
        front=rear=0;
    }
    else if(rear==max-1){
        rear=0;
    }
    else{
        rear++;
    }
    a[rear]=n;
    cout<<"Element inserted";

}
void deleteRear(){
    if(isempty()){
        cout<<"Queue is empty";
        return ;
    }
    if(front==rear){
        front=rear=-1;
    }else if(rear==0){
        rear=max-1;
    }
    else{
        rear--;
    }
    cout<<"Element removed";
}
bool isempty(){
    return front==-1;
}
bool isfull(){
    return ((front==0 && rear==max-1) ||((rear+1)%max==front) );
}
void display(){
    if(isempty()){
        cout<<"Queue is empty";
        return ;
    }
    int i=front;
    while(true){
        cout<<a[i]<<endl;
        if(i==rear)
            break;
        i=(i+1)%max;
    }
    cout<<endl;
}
int main() {
    insertRear(10);
    insertRear(20);
    insertFront(5);
    insertFront(2);

    display();

    deleteFront();
    deleteRear();

    display();

    return 0;
}
