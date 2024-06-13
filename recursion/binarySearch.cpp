#include<bits/stdc++.h>
using namespace std;
bool bs_found(int arr[],int start,int end,int key){
    if (start>end){
        return false;
    }
    int mid=start+(end-start)/2;
    if (arr[mid]>key){
        return bs_found(arr,start,mid-1,key);
    }
    else{
        return bs_found(arr,mid+1,end,key);
    }
}
int main(){
    int arr[]={12,2,3,4,32};
    int size=12;
    int key=1;
    if (bs_found(arr,0,size-1,key)){
        cout<<"found"<<endl;
    }
    else{
        cout<<"not found"<<endl;
    }
}