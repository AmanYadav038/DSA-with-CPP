#include <bits/stdc++.h>
using namespace std;

bool  possibleNeedle(string haystack,string needle,int windowSize,int currentIndex)
{
    int i=0;
    for (int j=currentIndex;j<currentIndex+windowSize;j++){
        if(haystack[j] != needle[i]){
            return false;
        }
        i++;
    }
    return true;
}
int indexOfOcc(string haystack,string needle)
{
    int windowSize=needle.size();
    for (int i=0;i<haystack.size();i++){
        if (possibleNeedle(haystack,needle,windowSize,i)){
            return i;
        }
    }
    return -1;
}

int main(){
    string haystack="masterofleetcode";
    string needle="leeto";
    int atIndex=indexOfOcc(haystack,needle);
    cout<<atIndex<<endl;
}