#include <bits/stdc++.h>
using namespace std;

void nextPermutation(vector <int> &nums){
    int index=-1;
    int n=nums.size()-1;
    for (int i=n-1;i>0;i--){
        if (nums[i]<nums[i+1]){
            index=i;
            break;
        }
    }
    for (int i=n;i>index;i--){
        if (nums[i]>nums[index]){
            swap(nums[i],nums[index]);
            break;
        }
    }
    reverse(nums.begin()+index+1,nums.end());
}

void printCombo(vector <int> nums){
    for (int i=0;i<nums.size();i++){
        cout<<nums[i];
    }
}


int main(){
    vector <int> givenCombo={2,1,5,4,3,0};

    nextPermutation(givenCombo);

    printCombo(givenCombo);
}