#include<bits/stdc++.h>
#include<vector>
using namespace std;
void reverseA(vector <int> &nums,int beg,int end){
    if (beg>=end){
        return;
    }
    swap(nums[beg],nums[end]);
    return reverseA(nums,beg+1,end-1);
}
void reverseF(vector <int> &nums,int beg){
    int end=nums.size()-beg-1;
    if (beg>=end){
        return ;
    }
    swap(nums[beg],nums[end]);
    return reverseF(nums,beg+1);
}
int main(){
    vector <int> arr={1,2,3,4,5};
    for (int i=0;i<arr.size();i++){
        cout<<arr[i]<<",";
    }
    cout<<endl;
    reverseF(arr,0); 
    for (int i=0;i<arr.size();i++){
        cout<<arr[i]<<",";
    }
}