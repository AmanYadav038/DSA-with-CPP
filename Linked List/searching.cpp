#include<bits/stdc++.h>
using namespace std;
class Node{
    public :
    int data;
    Node *next;

    Node(int data1,Node *next1){
        data=data1;
        next=next1;
    }
};
void searchLL(Node *head,int k){
    //k is the key to find
    int flag=-1;
    int indx=0;
    Node *temp=head;
    while(temp){
        if (temp->data==k){
            flag=0;
            break;
        }
        else{indx++;}
        temp=temp->next;
    }
    if (flag ==0){
        cout<<"Found at "<<indx<<" index"<<endl;
    }
    else {
        cout<<"Not Found";
    }
}
