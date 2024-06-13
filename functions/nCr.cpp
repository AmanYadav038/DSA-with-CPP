#include <iostream>
using namespace std;
int factorial(int a){
    int fact=1;
    while(a>1){
        fact=fact*a;
        a--;
    }
    return fact;
}
int main(){
    int n,r;
    cin>>n>>r;
    int result=factorial(n)/(factorial(n-r)*factorial(r));
    cout<<"nCr="<<result;
}