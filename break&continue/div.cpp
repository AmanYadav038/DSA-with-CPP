//remove number divisible by 3
#include <iostream>
using namespace std;
int main(){
    for (int i=1;i<=100;i++){
        if (i%3==0){
            continue;
        }
        else{
            cout<<i<<endl;
        }
    }
}