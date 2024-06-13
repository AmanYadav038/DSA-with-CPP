#include<bits/stdc++.h>
using namespace as std;

vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector <int> ans;
        int rows=matrix.size();
        int cols=matrix[0].size();
        int total=rows*cols;
        int count=0;
        int startRow=0;
        int startCol=0;
        int endRow=rows-1;
        int endCol=cols-1;
        while(count<total){
            for (int row=startCol;row<=endCol && count<total;row++){
                ans.push_back(matrix[startRow][row]);
                count++;
            }
            startRow++;
            for (int col=startRow;col<=endRow && count<total;col++){
                ans.push_back(matrix[col][endCol]);
                count++;
            }
            endCol--;
            for (int row=endCol;row>=startCol && count<total;row--){
                ans.push_back(matrix[endRow][row]);
                count++;
            }
            endRow--;
            for (int col=endRow;col>=startRow && count<total;col--){
                ans.push_back(matrix[col][startCol]);
                count++;
            }
            startCol++;
            }
        return ans;
}

int main(){
    
}
