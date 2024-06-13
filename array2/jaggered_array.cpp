#include <bits/stdc++.h>
using namespace std;

int main(){
    int rows,cols;
    cin >> rows;

    int **arr=new int*[rows];//creating 2d array dynamically
    int *sizes=new int[rows];
    for (int i=0;i<rows;i++){
        cin>>cols;
        sizes[i]=cols;
        arr[i]=new int[cols];
    }
    for (int i = 0; i < rows; i++) { 
        for (int j = 0; j < sizes[i]; j++) { 
            cin>>arr[i][j];
        }
    }
    //printing;
    for (int i = 0; i < rows; i++) { 
        for (int j = 0; j < sizes[i]; j++) { 
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }


}