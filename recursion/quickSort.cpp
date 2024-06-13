#include <bits/stdc++.h>
using namespace std;

int partition(int *arr,int start,int end){
    int pivot=arr[start];
    int i=start+1;
    int j=end;

    while(i<=j){
        while(arr[i]<=pivot){
            i++;
        }
        while (arr[j]>pivot){
            j--;
        }
        if (i<=j){
            swap(arr[i],arr[j]);
        }
        i++;
        j--;
    }
    swap(arr[i],pivot);
    return i;
}

void quickSort(int *arr,int start,int end){
    if (start<=end){
        return ;
    }

    int pivot=partition(arr,start,end);

    quickSort(arr,start,pivot+1);

    quickSort(arr,pivot+1,end);
}

void printArr(int *arr,int size){
    for (int i=0;i<size;i++){
        cout<<arr[i];
    }
}

int main(){
    int arr[5]={4,5,2,1,3};//{4,3,2,1,5}//
    quickSort(arr,0,5);
    printArr(arr,5);
}