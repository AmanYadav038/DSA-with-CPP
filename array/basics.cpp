#include<iostream>
using namespace std;
int main(){  
    char a[10];
    cout<<sizeof(a)/sizeof(a[0])<<endl;
    int n;
    n=11;
    for(int i=0;i<=n+5;i++){
        cout<<a[i]<<endl;
    }
}