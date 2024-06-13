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
void reverse(int arr[], int n,int beg, int end) {
    while (beg < end) {
        swap(&arr[beg], &arr[end]);
        beg++;
        end--;
    }
}
void rotate(int arr[],int n,int d){
    reverse(arr,n,0,d-1);
    reverse(arr,n,d,n-1);
    reverse(arr,n,0,n-1);
    print(arr,n);
}

int main(){
    int n;
    int arr[8]={1,2,3,4,5,6,7,8};
    print(arr,8);
    cout<<"\nrotating array till what places:\n";
    cin>>n;
    rotate(arr,8,n);
}