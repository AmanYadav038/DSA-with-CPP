#include <bits/stdc++.h>
using namespace std;
int maximumSubarraySum(vector <int> &arr){
    int i=0;
    int sum=0;
    int res=0;
    while (i<arr.size()){
        sum+=arr[i];
        if (sum<0){
            sum=0;
        }
        res=max(res,sum);
        i++;
    }
    return res;
}

int main(){
    vector <int> arr={-2,1,-3,4,-1,2,1,-5,4};
    cout<<maximumSubarraySum(arr)<<endl;
}