#include <iostream>
using namespace std;
int main(){
    int len,wid;
    cin>>len>>wid;
    if (len==wid){
        cout<<"it is a square";
    }
    else{
        cout<<"a rectangle";
    }
    return 0;
}