#include <iostream>
using namespace std;
int main(){
    int i,j;
    for (i=1;i<=5;i++){
        for (j=1;j<=i;j++){
            cout<<"*";
        }
        int space=2*5-2*i;
        for (j=1;j<=space;j++){
            cout<<" ";
        }
        for (j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<"\n";
    }
    for (i=4;i>=1;i--){
        for (j=1;j<=i;j++){
            cout<<"*";
        }
        int space=2*5-2*i;
        for (j=1;j<=space;j++){
            cout<<" ";
        }
        for (j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<"\n";
    }
}
