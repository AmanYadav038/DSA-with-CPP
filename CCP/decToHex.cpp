#include<iostream>
using namespace std;
string decToHex(int a){
    int x=1;
    string ans="";
    while(x<=a){
        x*=16;
    }
    x/=16;
    while (x>0){
        int c=a/x;
        a=a-c*x;
        x/=16;
        if (c<=9){
            ans=ans+to_string(c);
        }
        else{
            char ch='A'+c-10;
            ans.push_back(ch);
        }
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    cout<<decToHex(n)<<endl;
}