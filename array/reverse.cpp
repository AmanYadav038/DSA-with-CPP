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
    int start=0;
    int end=4;
    while (start<end)
    {
        swap(arr[start],arr[end]);
        start++;
        end--;
    }
    printArray(arr,5);
    
}