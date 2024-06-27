class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        // unordered_map <int,int> mpp;
        // for(int i=0;i<edges.size();i++){
        //     mpp[edges[i][0]]++;
        //     mpp[edges[i][1]]++;
        // }

        // for(auto x:mpp){
        //     if(x.second==edges.size()){
        //         return x.first;
        //     }
        // }
        // return 0;


        //simplest way
        return edges[0][0] == edges[1][0] || edges[0][0] == edges[1][1] ? edges[0][0] : edges[0][1];
    
    }
};