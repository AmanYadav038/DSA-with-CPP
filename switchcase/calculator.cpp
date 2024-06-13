//calculator
#include <iostream>
using namespace std;
int main(){
    int n1,n2;
    char c;
    cout<<"enter two numbers:\n";
    cin>>n1>>n2;
    cout<<"enter operation:";
    cin>>c;
    switch (c)
    {
    case '+':cout<<n1+n2;
        break;
    case '-':cout<<n1-n2;
        break;
    case '/':cout<<n1/n2;
        break;
    case '*':cout<<n1*n2;
        break;
    default:cout<<"no operation related found!!";
        break;
    }
    
}