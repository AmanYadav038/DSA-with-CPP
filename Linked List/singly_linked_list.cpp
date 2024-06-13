#include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node *next;

    Node(int element){
        this->data=element;
        this->next=NULL;
    }
};

void insertAtHead(Node* &head,int data){
    Node *newNode=new Node(data);
    Node *temp=head;
    head=newNode;
    newNode->next=temp;
}

void insertAtTail(Node* &head,int data){
    Node *newNode=new Node(data);
    Node *temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=newNode;
}

void insertAtPosition(Node* &head,int data,int position){
    Node *newNode=new Node(data);
    Node *temp=head;
    Node *prev;
    int count=1;
    while(count!=position && temp!=NULL){
        count++;
        prev=temp;
        temp=temp->next;
    }

    if(temp==NULL){
        cout<<"No such Location"<<endl;
        return;
    }

    prev->next=newNode;
    newNode->next=temp;
}

void deleteHead(Node* &head){
    Node *temp=head;
    head=head->next;
    delete temp;
}
void deleteTail(Node* &head){
    Node *temp=head;
    Node *prev;
    while(temp->next!=NULL){
        prev=temp;
        temp=temp->next;
    }
    prev->next=NULL;
    delete temp;
    
}

void deleteFromPosition(Node* &head,int position){
    Node *temp=head;
    Node *prev;
    int count=1;
    while(count!=position){
        prev=temp;
        temp=temp->next;
        count++;
    }
    prev->next=temp->next;
    delete temp;
}

void deleteByValue(Node* &head,int value){
    Node *temp=head;
    Node *prev=NULL;
    while(temp->data != value){
        prev=temp;
        temp=temp->next;
    }
    prev->next=temp->next;
    delete temp;
}

void printLL(Node *head){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<endl;
}

int main(){
    Node *head=new Node(10);
    printLL(head);
    insertAtTail(head,20);
    printLL(head);
    insertAtTail(head,30);
    insertAtTail(head,50);
    insertAtPosition(head,40,4);
    printLL(head);
    insertAtPosition(head,60,20);
    printLL(head);
    deleteHead(head);
    printLL(head);
    deleteTail(head);
    printLL(head);
    deleteFromPosition(head,2);
    printLL(head);
    deleteByValue(head,40);
    printLL(head);
}
