#include<iostream>
#include <vector>
using namespace std;
int main(){
    vector <int> b(5,0);
    for (auto i=b.begin();i!=b.end();i++){
        cout<<*i<<" ";
    }
}