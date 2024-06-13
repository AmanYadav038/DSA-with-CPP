#include <bits/stdc++.h>
using namespace std;
int hexToDec(string s){
    int result=0;
    int x=1;
    int l=s.size();
    for(int i=(l-1);i>=0;i--){
        if (s[i]>='0' && s[i]<='9'){
            result+=x*(s[i]-'0');
        }
        else if (s[i]>='A' && s[i]<='F'){
            result+=x*((s[i]-'A')+10);
        }
        x=x*16;
    }
     return result;
}
int main(){
    string n;
    cin>>n;
    cout<<hexToDec(n)<<endl;

}