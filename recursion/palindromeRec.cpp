#include<bits/stdc++.h>
using namespace std;
bool checkPalindrome(string s,int i,int j){
    if (i>=j){
        return true;
    }
    if (s[i]!=s[j]){
        return false;
    }
    i++;
    j--;
    return checkPalindrome(s,i,j);
}
int main(){
    string s="madama";
    cout<<checkPalindrome(s,0,s.length()-1)<<endl;
}