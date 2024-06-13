#include<iostream>
using namespace std;
bool isPrime(int k){
    for (int i=2;i<k;i++){
        if (k%i==0){
            return false;
        }
    }
    return true;
}
int main(){
    int min,max;
    cout<<"enter limits:";
    cin>>min>>max;
    for (int i=min;i<=max;i++){
        if(isPrime(i)){
            cout<<i<<endl;
        }
    }
}