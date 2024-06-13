//move zeroes to the left of the array
#include <iostream>
using namespace std;
void print(int arr[],int n){
    for (int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return;
}
void swap(int *a,int *b){
    int temp=*a;
    *a = *b;
    *b = temp;
    return;
}
void moveZeroes1(int arr[],int n){
    for (int j=0;j<n;j++){
        for (int i=0;i<n-j-1;i++){
            if (arr[i]==0){
                arr[i]=arr[i+1];
                arr[i+1]=0;
            }
        }
    }
    return;
}

void moveZeroes2(int arr[],int n){
    int i=-1;
    for (int j=0;j<n;j++){
        if(arr[j]==0){
            i=j;
            break;
        }
    }
    if (i==-1){
        return;
    }
    for (int j=i+1;j<n;j++){
        if (arr[j]!=0){
            swap(arr[j],arr[i]);
            i++;
        }
    }
}
int main(){
    int arr[8]={1,2,4,0,0,0,2,4};
    moveZeroes2(arr,8);
    print(arr,8);
}