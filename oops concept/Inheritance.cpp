#include <bits/stdc++.h>
using namespace std;
class Human{
    public:
    string name;
    int level;
    public:
    void setName(string naam){
        this->name=name;
    }
    void setLevel(int lvl){
        this->level=lvl;
    }
};

class Man :public Human{
    public:
    bool adult;
    void getPuberty(){
        cout<<this->adult;
    }
};

//ambiguos inheritance
class Woman :public Human{
    public :
    bool adult;
    void getPublerty(){
        cout<<this->adult;
    }
};

int main(){
    Man rahul;
    cout<<rahul.name<<endl;
    rahul.getPuberty();
}