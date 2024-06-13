#include <iostream>
using namespace std;
int main(){
    int n,fact;
    cin>>n;
    fact=1;
    while (n>=1){
        fact=fact*n;
        n=n-1;
    }
    cout<<"factorial is :"<<fact;
}