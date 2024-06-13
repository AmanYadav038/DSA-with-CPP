#include<bits/stdc++.h>
using namespace std;

void merge(int arr[],int s,int mid,int e){
    int left_size=mid-s+1;
    int right_size=e-mid;

    int arr_left[left_size],arr_right[right_size];

    for (int i=0;i < left_size;i++){
        arr_left[i]=arr[s+i];
    }
    for (int i=0;i<=right_size;i++){
        arr_right[i]=arr[mid+1+i];
    }

    int arrlP=0;
    int arrrP=0;
    int arrP=s;

    while(arrlP<left_size && arrrP<right_size){
        if(arr_left[arrlP]<=arr_right[arrrP]){
            arr[arrP]=arr_left[arrlP];
            arrlP++;
        }
        else{
            arr[arrP]=arr_right[arrrP];
            arrrP++;
        }
        arrP++;
    }
    while(arrlP<left_size){
        arr[arrP]=arr_left[arrlP];
        arrP++;
        arrlP++;
    }

    while(arrrP<right_size){
        arr[arrP]=arr_right[arrrP];
        arrP++;
        arrrP++;
    }
}

void mergeSort(int arr[],int s,int e){
    if (s>=e){
        return ;
    }

    int mid=s+(e-s)/2;
    //left part
    mergeSort(arr,s,mid);
    
    //right part
    mergeSort(arr,mid+1,e);

    //merge
    merge(arr,s,mid,e);

}

void printArr(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}


int main(){
    int n=5;
    int arr[n]={4,2,1,3,5};
    mergeSort(arr,0,n);
    printArr(arr,n);
}