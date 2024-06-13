#include<iostream>
using namespace std;

int main()
{
    int row;
    cout<<"Enter the no of rows in the 2d array : ";
    cin>>row;
    int col;
    cout<<"Enter the no of cols in the 2d array : ";
    cin>>col;
    
    int **arr = new int *[row];
    for(int i=0;i<row;i++)
    {
        arr[i]  = new int [col];
    }
    
    cout<<"Enter the matrix elements :-\n";
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<"element ["<<i<<"]["<<j<<"] : ";
            cin>>arr[i][j];
        }
    }
    
    cout<<"Entered elements are :-\n";
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    
    
    int option;
    cout<<"Enter 1 to calculate row wise sum or 2 to calculate col wise sum : ";
    cin>>option;
    int maxSum=0;
    int maxSumInd=-1;
    
    switch(option)
    {
        case 1 : cout<<"Row wise sum for the Array would be : ";
                 for(int i=0;i<row;i++)
                 {
                     int sum = 0;
                     for(int j=0;j<col;j++)
                     {
                        sum += arr[i][j]; 
                        if (maxSum<sum){
                            maxSum=sum;
                            maxSumInd=i;
                        }
                     }
                     
                     cout<<sum<<endl;
                 }
                 cout<<maxSum<<endl;
                 cout<<maxSumInd<<endl;
                 break;
                 
        case 2 : cout<<"Col wise sum for the Array would be : ";
                 for(int i=0;i<col;i++)
                 {
                     int sum = 0;
                     for(int j=0;j<row;j++)
                     {
                        sum += arr[j][i];
                        if (maxSum<sum){
                            maxSum=sum;
                            maxSumInd=i;
                        } 
                     }
                     cout<<sum<<endl;
                 }
                 cout<<maxSum<<endl;
                 cout<<maxSumInd<<endl;
                 break;         
    }
    
    
}