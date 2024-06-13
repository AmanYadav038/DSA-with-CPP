#include <iostream>
using namespace std;
int addBin(int n1,int n2){
    int sum=0;
    int Carry=0;
    while (n1>0 && n2>0){
        if (n1%2==0 && n2%2==0){
            sum=sum*10+Carry;
            Carry=0;
        }
        else if((n1%2==0 && n2%2==1) && (n1%2==1 && n2%2==0)){
            if (Carry==1){
                sum=sum*10+0;
                Carry=1;
            }
            else{
                sum=sum*10+1;
                Carry=0;
            }
        }
        else{
            sum=sum*10+1;
            Carry=1;
        }
        n1/=10;
        n2/=10;
        while (n1>0){
            if (Carry==1){
                if (n1%2==1){
                    sum=sum*10+0;
                    Carry=1;
                }
                else{
                    sum=sum*10+1;
                    Carry=0;
                }
            }
            else{
                sum=sum*10+(n1%2);
            }
            n1/=10;
        }
        while (n2>0){
            if (Carry==1){
                if (n2%2==1){
                    sum=sum*10+0;
                    Carry=1;
                }
                else{
                    sum=sum*10+1;
                    Carry=0;
                }
            }
            else{
                sum=sum*10+(n2%2);
            }
            n2/=10;
        }
    }
    return sum;
}
int main(){
    int a ,b;
    cin>>a>>b;
    cout<<addBin(a,b)<<endl;
}