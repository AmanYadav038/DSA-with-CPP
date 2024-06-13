#include<bits/stdc++.h>
using namespace std;
bool found(int arr[],int size,int key){
    if(size==0){
        return false;
    }
    if (arr[0]==key){
        return true;
    }
    return found(arr+1,size-1,key);
}
int main(){
    int arr[]={12,2,3,4,32};
    int size=5;
    int key=1;
    if (found(arr,size,key)){
        cout<<"found"<<endl;
    }
    else{
        cout<<"not found"<<endl;
    }
}