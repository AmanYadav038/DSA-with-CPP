#include<bits/stdc++.h>
using namespace std;
void wbt(int n,int i){//with backtrack
    if (i>n){
        return;
    }
    wbt(n,i+1);
    cout<<i<<endl;
}
void nbt(int n,int i){//no backtrack
    if(i<1){
        return;
    }
    cout<<i<<endl;
    nbt(n,i-1);
}
int main(){
    nbt(9,9);
    wbt(9,0);
}