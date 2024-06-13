#include<bits/stdc++.h>
using namespace std;

//functions overloading by changing number of arguements

class A{
    public:
    void sayHello(){
        cout<<"Hello vulture"<<endl;
    }
    void sayHello(string name){
        cout<<"Hello"+name<<endl;
    }
    void sayHello(string name,int n){
        cout<<"Third Category"<<endl;
    }
};

int main(){
    A obj;
    obj.sayHello(Aman);
}