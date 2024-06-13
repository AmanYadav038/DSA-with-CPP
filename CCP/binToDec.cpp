#include <iostream>
using namespace std;
int binTodec(int a){//00101
    int c;
    int dec=0;
    int x=1;
    while(a>0){
        c=a%10;
        dec=dec+c*x;
        x=x*2;
        a=a/10;
    }
    return dec;
}
int main(){
    int n;
    cin>>n;
    cout<<binTodec(n)<<endl;
}