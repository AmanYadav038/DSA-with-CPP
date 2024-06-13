#include<bits/stdc++.h>
using namespace std;
//functional way
int sumf(int n){
    if (n==0){
        return 0;
    }
    return n+sumf(n-1);
}
// parameterized way
void sump(int n,int sum){
    if (n==0){
        cout<<"Sum is :"<<sum<<endl;
        return;
    }
    return sump(n-1,sum+n);
}
int main(){
    sump(6,0);
    int a=sumf(6);
    cout<<a<<endl;
}