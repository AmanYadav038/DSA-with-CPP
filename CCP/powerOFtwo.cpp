#include <iostream>
using namespace std;
int main(){
    int n;
    cin >>n;
    int ans=1;
    for (int i=0;i<=30;i++){
        if(ans==n){
            cout<< "true";
        }
        if(ans < INT16_MAX/2){
            ans=ans*2;
        }
    }
}