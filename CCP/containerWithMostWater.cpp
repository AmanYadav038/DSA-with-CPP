#include<bits/stdc++.h>
using namespace std;
int maximumWaterArea(vector <int> &arr){
    int i=0;
    int j=arr.size()-1;
    int maxiArea=0;
    while(i<j){
        int length=j-i;
        int breadth=min(arr[i],arr[j]);
        int area=length*breadth;
        maxiArea=max(maxiArea,area);
        if (arr[i]<arr[j]){
            i++;
        }
        else{
            j--;
        }
    }
    return maxiArea;
}
int main(){
    vector <int> height={1,8,6,2,5,4,8,3,7};
    cout<<maximumWaterArea(height)<<endl;
}
