#include<iostream>
using namespace std;
int main(){
    int arr[100];
    int n;
    cout<<"size of array"<<endl;
    cin>>n;
    for (int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sum=0;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
    }
    cout<<sum;
}