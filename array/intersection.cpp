#include<iostream>
using namespace std;
int main(){
    int arr1[5]={2,3,3,4,5};
    int arr2[3]={3,3,4};
    for (int i=0;i<5;i++){
        int element=arr1[i];
        for (int j=0;j<3;j++){
            if (arr2[j]==element){
                cout<<arr2[j]<<endl;
            }
        }
    }

}