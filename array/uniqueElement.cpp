#include <iostream>
using namespace std;
int unique1(int arr[],int n){
    int uni=0;
    for (int i=0;i<5;i++){
        int count =0;
        for(int j=0;j<5;j++){
            if(arr[i]==arr[j]){
                count+=1;
            }
        }
        if(count==1){
            return arr[i];
        }
    }
}
int unique2(int arr[],int size){
    int ans=0;
    for (int i=0;i<size;i++){
        ans=ans^arr[i];
    }
    return ans;
}
int uniqCount(int arr[],int n){
    int i=0;
    for (int j=1;j<n;j++){
        if(arr[j]!=arr[i]){
            arr[i+1]=arr[j];
            i++;
        }
    }
    return i;
}
int main(){
    int arr[5]={1,4,1,3,2};
    // int count=unique1(arr,5);
    // cout<<unique1(arr,5);
    // cout<<unique2(arr,5);
    cout<<"number of unique elements :"<<endl;
    cout<<uniqCount(arr,5);
}