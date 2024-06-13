#include<bits/stdc++.h>
#include "Heroine.cpp"
using namespace std;

class Hero{
    public:
    static int timeToComplete;
    int number;
    char *name;
    void setNumber(int num){
        number=num;
    }
    void getNumber(){
        cout<<number<<endl;
    }

    static void updateTime(int number){
        timeToComplete=number;
    }

    Hero (){
        name=new char[10];
    }

    Hero(Hero & temp){
        char *ptr=new char[strlen(temp.name)+1];
        strcpy(ptr,temp.name);
        this->name=ptr;
    }
    //destructor
    ~Hero(){
        cout<<"destructor called"<<endl;
    }
};

int Hero::timeToComplete=10;

int main(){
    // Hero h1;
    // // cout<<sizeof(h1);
    // h1.setNumber(12);
    // h1.getNumber();

    // //dynamically
    // Hero *h3=new Hero;
    // h3->name="aman";
    // cout<<h3->name<<endl;
    // cout<<(*h3).name<<endl;
    // Heroine h2;
    // cout<<sizeof(h2);

    // Hero h4("Krishna");
    // cout<<h4.name<<endl;
    // cout<<&h4<<endl;

    // //copy constructor
    // Hero h5(h4);
    // cout<<&h5<<endl;
    // cout<<h5.name<<endl;


    //shallow coping

    // Hero h4;
    // char name1[]="aman";
    // h4.name=name1;
    // cout<<h4.name<<endl;
    // Hero h5(h4);
    // cout<<h5.name<<endl;
    // h4.name[1]='b';
    // cout<<h4.name<<endl;
    // cout<<h5.name<<endl;
    // cout<<&h4.name <<endl;
    // cout<<&h5.name<<endl;
    //now updated the copy constructor by deep copying

    Hero *b=new Hero();
    delete b;

    cout<<Hero::timeToComplete<<endl;
    Hero::updateTime(20);
    cout<<Hero::timeToComplete<<endl;
    

}


//access modifiers
// public 
//private
//protected



//notes.
//objects created statically, their destructor is automatically called
//whereas for dynamic once ,we need to do;