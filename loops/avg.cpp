#include <iostream>
using namespace std;
int main(){
    int sum,n,avg,num;
    n=1;
    sum=1;
    while(n<=10){
        cout<<"enter a number:";
        cin>>num;
        sum=sum+num;
        n++;
    }
    avg=sum/10;
    cout<<avg;
}