#include <bits/stdc++.h>
using namespace std;
void combos(string number,vector <string> &ans,int index,vector <string> mapping,string output){
    if (index>=number.length()){
        ans.push_back(output);
        return ;
    }
    
    int num=number[index]-'0';
    string possibleChars=mapping[num];
    for (int i=0;i<possibleChars.size();i++){
        output.push_back(possibleChars[i]);
        combos(number,ans,index+1,mapping,output);
        output.pop_back();
    }

}
vector <string> phoneNum(string number){
    vector <string> ans;
    vector <string> mapping={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
    string output="";
    int index=0;
    combos(number,ans,index,mapping,output);
    return ans;
}
int main(){
    string number="23";
    vector <string> possibleCombo=phoneNum(number);
    for (int i=0;i<possibleCombo.size();i++){
        cout<<possibleCombo[i]<<" ";
    }
    
}