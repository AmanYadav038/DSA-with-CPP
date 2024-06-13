//question:
// A shop will give discount of 10% if the cost of purchased quantity is more than 1000.
// Ask user for quantity
// Suppose, one unit will cost 100.
// Judge and print total cost for user.
#include <iostream>
using namespace std;
int main(){
    int unit,cost,costpayable,discount;
    cout<<"enter no. of untis wanna purchase:\n";
    cin>>unit;
    cost=unit*100;
    cout<<cost<<endl;
    cout<<"total amount after discount:\n";
    if (cost>1000){
        discount=cost*0.10;
        costpayable=cost-discount;
    }
    else{
        costpayable=cost;
    }
    cout<<costpayable;
}