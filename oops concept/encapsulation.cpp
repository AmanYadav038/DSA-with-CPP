//encapsulation is class containing data members and methods
//fully encapsulated class
//all are private
//advantages:
//data hiding->security
//code reusibilty

//note default access modifier is private
#include<bits/stdc++.h>
using namespace std;
class Employee{
    private:
    string name;
    int id;
    char rank;

    public:
    int getId(){
        return this->id;
    }
};
int main(){
    Employee *e1=new Employee();
    cout<<(*e1).getId();
}

