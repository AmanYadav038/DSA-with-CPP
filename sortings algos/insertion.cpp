#include<iostream>
using namespace std;
int main(){
    int n=6;
    int arr[n]={12,31,25,8,32,17};
    for (int i=1;i<=n-1;i++){
        int temp=arr[i];
        for (int j=i-1;j>=0;j--){
            if(arr[j]>temp){
                arr[j+1]=arr[j];
                arr[j]=temp;
            }
        }
    }
    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}