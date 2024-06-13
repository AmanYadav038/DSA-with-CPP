#include<iostream>
using namespace std;
int main(){
    char ch;
    cin>>ch;
    int a=ch;
    // cout<<a;
    if (a>=97 && a<=122){
        cout<<"it is a small case character"<<endl;
    }
    else if(a>=65 && a<=90){
        cout<<"it is a capital case character"<<endl;
    }
    else if(a>=48 && a<=57){
        cout<<"it is between 0-9"<<endl;        
    }
    return 0;
}