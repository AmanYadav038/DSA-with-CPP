#include <bits/stdc++.h>
using namespace std;

int missingInt(vector <int> nums){
    int n=nums.size()-1;
    sort(nums.begin(),nums.end());
    int maxi=nums[n];
    int mini=nums[0];
    unordered_map <int,int> mpp;
    for (int i=mini;i<=maxi;i++){
        mpp[i]++;
    }
    for (int i=0;i<=n;i++){
        if (mpp.find(nums[i]) != mpp.end()){
            mpp[nums[i]]++;
        }
    }
    int res=0;

    for (auto x:mpp){
        if (x.second==1){
            res=x.first;
        }
    }
    return res;
}

int main(){
    vector <int> nums = {12,14,13,15,17};
    cout<<missingInt(nums)<<endl;
}