#include<iostream>
using namespace std;
int binarySearch(int arr[],int beg,int end,int key){
    int mid=beg+(end-beg)/2;
    while(beg<end){
        if (arr[mid]==key){
            return mid;
        }
        else if(arr[mid]>key){
            end=mid-1;
        }
        else{
            beg=mid+1;
        }    
    }
    return beg;
}
int searchRota(int arr[], int n, int key){
    int s=0;
    int e=n-1;
    int mid=s+(e-s)/2;
    while(s<e){
        if (arr[mid]>=arr[0]){
            s=mid+1;
        }
        else{
            e=mid;
        }
        mid=s+(e-s)/2;
    }
    if (key>=arr[s] && key<=arr[n-1]){
        return binarySearch(arr,s,n-1,key);
    }
    else{
        return binarySearch(arr,0,s-1,key);
    }
    
}
int main(){
    int arr[6]={3,8,10,17,1,2};
    int m=2;
    cout<<"index of m is "<<searchRota(arr,6,m);
}