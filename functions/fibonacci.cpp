#include <iostream>
using namespace std;
void fibonacci(int a){
    int t1=0;
    int t2=1;
    int nexTerm;
    for (int i=1;i<=a;i++){
        cout<<t1<<endl;
        nexTerm=t1+t2;
        t1=t2;
        t2=nexTerm;
    }
}


int main(){
    int n;
    cin>> n;
     
    fibonacci(n);
}