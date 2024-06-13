#include<iostream>
using namespace std;
int main(){
    int arr[100];
    int n;
    cin>>n;
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    int prodct=1;
    for (int i=0;i<n;i++){
        prodct=prodct*arr[i];
    }
    cout<<prodct;
}