#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter amount:";
    cin>>n;
    switch (n)
    {
    case 1:cout<<n/100;
    case 2:cout<<n/50;
    case 3:cout<<n/20;
    case 4:cout<<n/10;
    }
}