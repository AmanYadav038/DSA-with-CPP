#include<bits/stdc++.h>
using namespace std;
bool isPossible(vector <int> arr,int requiredWood,int mid){
    int woodSum=0;
    int i=0;
    while(i<arr.size()){
        if (woodSum>requiredWood){
            return false;
        }
        if (arr[i]>=mid){
            int leftpart=arr[i]-mid;
            woodSum=woodSum+leftpart;
        }
        i++;
    }
    if (woodSum==requiredWood){
        return true;
    }
    else{
        return false;
    }
}
int mirkoMachine(vector <int>arr,int requiredWood){
    sort(arr.begin(),arr.end());
    int start=arr[0];
    int end=arr.back();//last value is maximum
    int mid=start+(end-start)/2;
    int ans=0;
    while(start<=end){
        if (isPossible(arr,requiredWood,mid)){
            end=mid-1;
            ans=mid;
        }
        else{
            start=mid+1;
        }
        mid=start+(end-start)/2;
    }
    return ans;
}
int main(){
    vector <int> arr={4,42,40,26,46};
    int requiredWood=20;
    int ans=mirkoMachine(arr,requiredWood);
    cout<<ans<<endl;
}