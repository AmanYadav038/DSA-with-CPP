#include<iostream>
using namespace std;
void printArray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<endl;
    }
}
int main(){
    int arr[5]={12,6,4,2,11};
    //min=2;max=12;
    int min=arr[0];
    int max=arr[0];
    for(int i=0;i<=5;i++){
        if(arr[i]<=min){
            min=arr[i];
        }
        else if(arr[i]>=max){
            max=arr[i];
        }
    }
    printArray(arr,5);
    cout<<min<<" "<<max<<endl;
}