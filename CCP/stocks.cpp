#include <bits/stdc++.h>
using namespace std;

int calculateProfit(vector <int> &arr){
    int index=-1;
    int mini=INT_MAX;

    for (int i=0;i<arr.size();i++){
        if (arr[i]<mini){
            mini=arr[i];
            index=i;
        }
    }

    int maxi=INT_MIN;
    for (int j=index;j<arr.size();j++){
        maxi=max(maxi,arr[j]);
    }
    return maxi-mini;
}


int main(){
    vector <int> arr={7,1,5,3,6,4};
    cout<<calculateProfit(arr)<<endl;
}