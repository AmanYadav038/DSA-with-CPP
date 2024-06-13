#include <bits/stdc++.h>
using namespace std;
bool valid(vector <int> arr,int mid,int n){
    int studentCount=0;
    int pageSum=0;
    for (int i=0;i<4;i++){
        if (pageSum + arr[i]<=mid){
            pageSum+=arr[i];
        }
        else{
            studentCount++;
            if (studentCount>n || arr[i]>mid){
                return false;
            }
            pageSum=arr[i];
        }
    }
    return true;
}
int bookAllocate(vector <int> arr,int n){
    int beg=0;
    int end=100;
    int mid=beg+(end-beg)/2;
    int ans=0;
    while(beg<=end){
        if (valid(arr,mid,n)){
            ans=mid;
            end=mid-1;
        }
        else{
            beg=mid+1;
        }
        mid=beg+(end-beg)/2;
    }
    return ans;
}
int main(){
    vector <int> pages={10,20,30,40};
    int noOfStudents=2;
    cout<<bookAllocate(pages,noOfStudents)<<endl;
}