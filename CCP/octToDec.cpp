#include <iostream>
using namespace std;
int octTodec(int a){
    int c;
    int dec=0;
    int x=1;
    while(a>0){
        c=a%10;
        dec=dec+c*x;
        x=x*8;
        a=a/10;
    }
    return dec;
}
int main(){
    int n;
    cin>>n;
    cout<<octTodec(n)<<endl;
}