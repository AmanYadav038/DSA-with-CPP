#include <iostream>
using namespace std;
bool check(int a,int b,int c){
    int u,v,w;
    u=max(a,max(b,c));
    if (u==a){
        v=b;
        w=c;
    }
    else if(u==b){
        v=a;
        w=c;
    }
    else{
        v=b;
        w=a;
    }
    if (u*u==v*v+w*w){
        return true;
    }
    else {
        return false;
    }
}
int main(){
    int x,y,z;
    cin>>x>>y>>z;
    if (check(x,y,z)){
        cout<<"Pyhtagorean Triplet";
    }
    else{
        cout<<"not a pythagorean triplet";
    }
}