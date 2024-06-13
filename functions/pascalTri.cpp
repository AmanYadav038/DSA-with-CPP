#include <iostream>
using namespace std;
int fact(int a){
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
    for (int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            int result=fact(i)/(fact(j)*fact(i-j));
            cout<<result<<" ";
        }
        cout<<"\n";
    }
}