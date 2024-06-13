#include <bits/stdc++.h>
using namespace std;
int arraySum(int arr[],int size){
    if (size==0){
        return 0;
    }
    return arr[0]+arraySum(arr+1,size-1);
}
int main(){
    int arr[]={1,2,3,4,15};
    int size=5;
    cout<<arraySum(arr,size)<<endl;
}