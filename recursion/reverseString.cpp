#include <bits/stdc++.h>
using namespace std;
void reverse(string& s,int i,int j){
    if(i>=j){
        return ;
    }
    swap(s[i++],s[j--]);
    reverse(s,i,j);
}
int main(){
    string s="aman";
    reverse(s,0,s.length()-1);
    cout<<s<<endl;
}