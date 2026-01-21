#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    Node(int data){
        this->data=data;
        next=NULL;
    }
};

void insertBegin(Node * &head,int value){
     Node* newnode=new Node(value);
     newnode->next=head;
     head=newnode;
}
void insertEnd(Node * &head,int value){
    Node* newnode=new Node(value);
    if(head==NULL){
        head=newnode;
        return ;
    }
    Node* temp=head;
    while(temp->next!=nullptr){
        temp=temp->next;
    }
    temp->next=newnode;
}
void insertPos(Node * &head,int value,int pos){
    Node* newnode=new Node(value);
    if(pos==1){
        insertBegin(head,value);
        return ;
    }
    Node* temp=head;
    for(int i=1;i<pos-1 && temp!=NULL;i++){
        temp=temp->next;
    }
    newnode->next=temp->next;
    temp->next=newnode;

}
void traverse(Node* head){
    Node* temp=head;
    cout<<"Linkedlist";
    while(temp!=nullptr){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}



int main(){
    Node *head=NULL;
    insertBegin(head,10);
    insertEnd(head,20);
    insertPos(head,30,2);

    traverse(head);
    return 0;
}