//created traversal program in the same
//calculation of length of linked list
#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node *next;

    Node (int data1,Node *next1){
        data=data1;
        next=next1;
    }
};
Node* arr2LL(int arr[],int size){
    Node *head=new Node(arr[0],nullptr);
    Node *newNode=head;
    for (int i=1;i<size;i++){
        Node *temp=new Node(arr[i],nullptr);
        newNode->next=temp;
        newNode=temp;
    }
    return head;
}
void traversalLL(Node *head){
    Node *temp=head;
    while(temp->next != nullptr){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<temp->data<<endl;
}
int lengthLL(Node *head){
    int count=0;
    Node *temp=head;
    while(temp){
        count++;
        temp=temp->next;
    }
    return count;
}

int main(){
    int arr[5]={1,2,3,4,5};
    Node *head=arr2LL(arr,5);
    cout<<head->data<<endl;
    cout<<head->next->data<<endl;
    traversalLL(head);
    cout<<"Length of Linked List:"<<lengthLL(head)<<endl;
    searchLL(head,3);
}
