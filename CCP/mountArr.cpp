#include<iostream>
using namespace std;
int main(){
    int arr[4]={3,7,6,1};
    int s=0;
    int e=3;
    int mid=(s+e)/2;
    while (s<e){
        if (arr[mid]<arr[mid+1]){
            s=mid+1;
        }
        else{
            e=mid;
        }
        mid=(s+e)/2;
    }
    cout<<arr[mid];
}