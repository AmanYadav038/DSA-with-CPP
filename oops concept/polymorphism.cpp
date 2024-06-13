#include<bits/stdc++.h>
using namespace std;
//overloading comes under compile time polymorphism
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

//operator overloading

class B{
    public:
    int a;
    int b;

    public:
    int add(){
        return a+b;
    }

    void operator+ (B &obj){
        int value1= this->a;
        int value2=obj.a;
        cout<<"output"<<value2 - value1<<endl;
    }
};

//overriding comes under run time polymorphism

class Human{
    public :
    void speak(){
        cout<<"speaking"<<endl;
    }
};

class Dog : public Human{
    public:
    void speak(){
        cout<<"barking"<<endl;
    }
};

int main(){
    A obj;
    // obj.sayHello("Aman");

    B obj1;
    B obj2;

    obj1.a=4;
    obj2.a=1;

    obj1+obj2;//doing substraction


    Dog sheru;
    sheru.speak();

    Human moti;
    moti.speak();
}