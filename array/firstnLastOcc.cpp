#include <iostream>
using namespace std;
int firstOcc(int arr[],int n,int key){
    int start=0,end=n-1;
    int cont=0;
    int mid=(start+end)/2;
    while (start<=end){
        if (arr[mid]==key){
            cont=mid;
            end=mid-1;
        }
        else if(arr[mid]<key){
            start=mid+1;
        }
        else if(arr[mid]>key){
            end=mid-1;
        }
        mid=(start+end)/2;
    }
    return cont;
}
int lastOcc(int arr[],int n,int key){
    int start=0,end=n-1;
    int cont=0;
    int mid=(start+end)/2;
    while (start<=end){
        if (arr[mid]==key){
            cont=mid;
            start=mid+1;
        }
        else if(arr[mid]<key){
            start=mid+1;
        }
        else if(arr[mid]>key){
            end=mid-1;
        }
        mid=(start+end)/2;
    }
    return cont;
}
int totalOcc(int arr[],int n,int key){
    int f=firstOcc(arr,n,key);
    int l=lastOcc(arr,n,key);
    return l-f;
}
int main(){
    int arr[5]={1,4,4,4,4};
    // int idx=firstOcc(arr,5,4);
    // int idx2=lastOcc(arr,5,4);
    int s=totalOcc(arr,5,4);
    cout<<s;
}