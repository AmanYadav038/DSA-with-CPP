#include <iostream>
using namespace std;
int main(){
    char button;
    cout<<"enter a button:";
    cin>>button;
    switch (button)
    {
    case 'a':
        cout<<"Hello World";
        break;
    case 'b':
        cout<<"hola";
        break;
    case 'c':
        cout<<"moshi moshi";
        break;
    
    default:
        break;
    }
}