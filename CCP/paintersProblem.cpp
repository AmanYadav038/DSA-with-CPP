#include<iostream>
using namespace std;
bool isPossible(int arr[],int n,int mid,int key){
    int totalArea=0;
    int totalPainters=1;
    for (int i=0;i<n;i++){
        if (totalArea+arr[i]<=mid){
            totalArea=+arr[i];
        }
        else{
            totalPainters++;
            if (totalPainters>key || arr[i]>mid){
                return false;
            }
            totalArea+=arr[i];
        }
    }
    return true;
}


int areaDivided(int arr[],int n,int m){
    int s=0;
    int sum=0;
    int ans=0;
    for (int i=0;i<n;i++){
        sum+=arr[i];
    }
    int e=sum;
    int mid=s+(e-s)/2;
    while(s<=e){
        if (isPossible(arr,n,mid,m)){
            ans=mid;
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}


int main(){
    int arr[4]={10,20,30,40};
    cout<<areaDivided(arr,4,2);
}