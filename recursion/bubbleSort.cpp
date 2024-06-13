#include<bits/stdc++.h>
using namespace std;
void bubbleSort(int arr[],int size){
    if(size==0 || size==1){
        return ;
    }
    //solve one case
    for(int i=0;i<size;i++){
        if (arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
        }
    }

    return bubbleSort(arr,size-1);
}
void printArr(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int arr[]={4,2,1,3,5};
    bubbleSort(arr,5);
    printArr(arr,5);
}