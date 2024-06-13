#include <iostream>
#include <vector>
using namespace std;
// int main(){
//     vector <int> v={1,2,3,4};
//     cout<<v.size()<<endl;
//     vector<vector<int>> vi={{1,2,3},{4,5,6},{7,8,9}};
//     cout <<vi.size()<<endl;
//     for (int i=0;i<vi.size();i++){
//         for (int j=0;j<vi[i].size();j++){
//             cout<<vi[i][j]<<endl;
//         }
//     }
// }
int main(){
    // double p=1/6;
    // cout<<p;
//     vector<vector<int>> arr={{1,2,3},{4,5,6},{7,8,9}};
//     int rsum=0;
//     int lsum=0;
//     for (int i=0;i<arr.size();i++){
//         for (int j=0;j<arr[i].size();j++){
//             if (i==j){
//                 lsum=lsum+arr[i][i];
//             }
//             else if(i+j==arr[i].size()-1 || i==j){
//                 rsum=rsum+arr[i][j];
//                 // cout<<rsum<<endl;
//                 // cout<<arr[i][j]<<endl;
//             }
//         }
//     }
//     cout<<lsum<<endl;
//     cout<<rsum<<endl;
//     cout<<(lsum-rsum);
//     cout<<lsum/rsum<<endl;
//     float div=lsum+1/rsum;
//     cout<<div<<endl;
    int arr[5]={1,2,3,4,5};
    int arr1[5]={arr};
    for (int i=0;i<5;i++){
        cout<<arr1[i];
    }
}