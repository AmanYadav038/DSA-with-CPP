//swaping alternate numbers of array
#include<iostream>
using namespace std;
int defArr(int arr[],int n){
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
}
void printArray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<endl;
    }
}
int swap(int *a,int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    defArr(arr,n);
    for (int i=0;i<n-1;i++){
        if(i+1<n){
            swap(arr[i],arr[i+1]);
        }
        i++;
    }
    printArray(arr,n);
}