#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    int *arr=new int[n];

    for (int i=0;i<5;i++){
        int num;
        cin>>num;
        arr[i]=num;
    }

    //printing
    for(int i=0;i<5;i++){
        cout<<arr[i]<<endl;
    }
}