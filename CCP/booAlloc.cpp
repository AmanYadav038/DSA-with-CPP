#include <iostream>
using namespace std;
bool possibleAlloc(int arr[],int n,int mid,int m){
    int studCount=1;
    int totalPages=0;
    for (int i=0;i<n;i++){
        if (totalPages+arr[i]<=mid){
            totalPages=totalPages+arr[i];
        }
        else{
            studCount++;
            if (studCount > m || arr[i] > mid){
                return false;
            }
            totalPages+=arr[i];
        }
    }
    return true;
}
int bookAlloc(int arr[],int n,int m){
    int s=0;
    int sum=0;
    for (int i=0;i<n;i++){
        sum+=arr[i];
    }
    int e=sum;
    int mid=s+(e-s)/2;
    int ans=0;
    while (s<=e){
        if (possibleAlloc(arr,n,mid,m)){
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
    cout<<bookAlloc(arr,4,2);
}