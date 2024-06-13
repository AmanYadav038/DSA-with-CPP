//these operators shift the whole binary combination
//with provided bits
//forEx:5<<3;
//00000.....00101becomes 000000...01010 i.e10
#include <iostream>
using namespace std;
int main(){
    int a,b;
    int target=8;
    int nums[5]={1,3,5,7,2};

        for (int i=0;i<5;i++){
          a=nums[i];
          for (int j=0;j<5;j++){
            b=nums[j];
            if(a+b==target){
              cout<<i<<" "<<j<<endl;
              break;
            }
          }
        }
    }