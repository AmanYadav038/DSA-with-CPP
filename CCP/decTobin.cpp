// #include <iostream>
// using namespace std;
// int decToBin(int a){
//     int x=1,ans=0;
//     while(x<=a){
//         x=x*2;
//     }
//     x=x/2;
//     while(x>0){
//         int c=a/x;
//         a=a-c*x;
//         ans=ans*10+c;
//         x=x/2;
//     }
//     return ans;
// }
// int main(){
//     int n;
//     cin>>n;
//     cout<<decToBin(n)<<endl;
// }


#include <iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    float ans=0;
    int i=0;
    while (n!=0){
        int c=n&1;
        n=n>>1;
        ans=(c * pow(10,i) )+ans;
        i++;
    }
    cout<<ans<<endl;
}