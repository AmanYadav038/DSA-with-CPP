#include<iostream>
using namespace std;
int decToOctal(int a){
    int ans=0;
    int x=1;
    while(x<=a){
        x*=8;
    }
    x/=8;
    while(x>0){
        int c=a/x;
        a-=c*x;
        x/=8;
        ans=ans*10+c;
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    cout<<decToOctal(n)<<"";
}