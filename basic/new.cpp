#include<iostream>
#include <math.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    // int bit;
    // float ans=0;
    // int i=0;
    // while(n!=0){
    //     bit=n&1;
    //     n=n>>1;
    //     ans=(bit * pow(10,i))+ans;
    //     i++;
    // }
    // cout<<ans;
    
    

    int c=~n;
    cout<<c;
}