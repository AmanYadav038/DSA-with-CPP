//tell whether a number given is prime or not
// #include <iostream>
// using namespace std;
// int main(){
//     int n,i;
//     cout<<"enter a number:";
//     cin>>n;
//     for (i=2;i<n;i++){
//         if(n%i==0){
//             cout<<n<<"is not prime";
//             break;
//         }
//     }
//     if(i==n){
//         cout<<n<<"is Prime";
//     }
    

// }
//tell in a given range list of prime numbers
#include <iostream>
using namespace std;
int main(){
    int min,max,i;
    cout<<"enter the range:";
    cin>>min>>max;
    for (int num=min;num<=max;num++){
        for (i=2;i<num;i++){
            if (num%i==0){
                break;
            }
        }
        if (i==num){
            cout<<num<<"\n";
        }
    }
}