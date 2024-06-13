#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node *next;

    Node(int data1,Node *next1){
        data=data1;
        next=next1;
    }
};
int main(){
    int arr[5]={1,2,3,4,5};
    Node *y=new Node(arr[3],nullptr);
    cout<<y->data<<" "<<y->next;
}
