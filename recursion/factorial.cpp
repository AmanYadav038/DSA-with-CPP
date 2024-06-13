#include<bits/stdc++.h>
using namespace std;
int factorial(int n){
    if (n==0 || n==1){
        return 1;
    }
    return n*factorial(n-1);
}
void factorialP(int n,int fact){
    if (n==1){
        cout<<fact<<endl;
        return ;
    }
    return factorialP(n-1,fact*n);
}
int main(){
    factorialP(6,1);
    cout<<factorial(6)<<endl;
}