#include<bits/stdc++.h>
using namespace std;
int getLength(string name){
    int count=0;
    for (int i=0;name[i]!='\0';i++){
        count++;
    }
    return count;
}
void reverseString(string name){
    string res;
    int i=0;
    int j=getLength(name)-1;
    while(i<j){
        swap(name[i],name[j]);
        i++;
        j--;
    }
}
bool checkPalindrome(string s)
{
    int i=0;
    int j=s.size()-1;
    while(i<j){
        if (s[i++]==s[j--]){
            continue;
        }
        else{
            return false;
        }
    }
    return true;

}
int main(){
    string name;
    cout<<"enter your name:";
    cin>>name;
    cout<<"your name is:"<<name;
    cout<<getLength(name)<<endl;
    cout<<"After Reverse";
    reverseString(name);
    cout<<name;
    cout<<checkPalindrome(name)<<endl;
}