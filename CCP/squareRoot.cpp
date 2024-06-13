#include<iostream>
using namespace std;
int squareRootW(int n){
    int ans=0;
    int beg=0;
    int end=n;
    int mid=beg+(end-beg)/2;
    while (beg<=end){
        if (mid*mid==n){
            ans=mid;
        }
        if(mid*mid >n){
            end=mid-1;
        }
        else{
            ans=mid;
            beg=mid+1;
        }
        mid=beg+(end-beg)/2;
    }
    return ans;
}
double squareRootF(int n,int precision,int wPart){
    double Factor=1;
    double ans=wPart;
    for (int i=1;i<=precision;i++){
        Factor=Factor/10;
        for (double j=ans;j*j<n;j=j+Factor){
            ans=j;
        }
    }
    return ans;

}
int main(){
    int num=101;
    cout<<squareRootF(num,8,squareRootW(num));
}