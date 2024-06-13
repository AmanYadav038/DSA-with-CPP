#include<iostream>
using namespace std;
int swap(int *a,int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}
int main(){
    int n;
    cout<<"Enter size of array:";
    cin>>n;
    int arr[n];
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    for (int i=0;i<n-1;i++){
        for (int j=0;j<=n-2;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
    cout<<"sorted array:";
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    cout<<"\nsecond largest number in an array="<<arr[n-25];
}