// #include <iostream>
// using namespace std;
// int main(){
//     for (int i=5;i>=1;i--){
//         for (int j=1;j<=i;j++){
//             cout<<j<<" ";
//         }
//         cout<<"\n";
//     }
// }
#include <iostream>
using namespace std;
int main(){
    for (int i=1;i<=5;i++){
        for (int j=1;j<=5+1-i;j++){
            cout<<j<<" ";
        }
        cout<<"\n";
    }

}