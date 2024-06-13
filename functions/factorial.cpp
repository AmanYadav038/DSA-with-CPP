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
    int n;
    cin>>n;

    cout<<factorial(n);
}