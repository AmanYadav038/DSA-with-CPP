#include<bits/stdc++.h>
using namespace std;
void insertionSort(int arr[],int size){
    if (size ==0 || size == 1){
        return ;
    }
    //solve one case
    int temp=arr[size-1];
    int j=size-2;
    while(j>=0 && arr[j]>temp){
        arr[j+1]=arr[j];
        j--;
    }
    arr[j+1]=temp;
    
    return insertionSort(arr,size-1);
    
}

void printArr(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[]={4,2,1,3,5};
    insertionSort(arr,5);
    printArr(arr,5);
}