#include<iostream>
using namespace std;
int main(){
    int n,lastdigit;
    cin>>n;
    int sum=0;
    int orignum=n;
    while(n!=0){
        lastdigit=n%10;
        sum+=lastdigit*lastdigit*lastdigit;
        n=n/10;
    }
    cout<<sum;
    if (sum==orignum){
        cout<<orignum<<"is armstrong number";
    }
    else{
        cout<<orignum<<"is not a armstrong number";
    }
    return 0;
}