class Solution {
public:
    void DFS(int ancestor,vector<vector<int>>& res,int currNode,unordered_map<int,vector<int>>& mpp){
        for(int &x:mpp[currNode]){
            if(res[x].empty() || res[x].back()!=ancestor){
                res[x].push_back(ancestor);
                DFS(ancestor,res,x,mpp);
            }
        }
    }
    vector<vector<int>> getAncestors(int n, vector<vector<int>>& edges) {
        vector<vector<int>> res(n);
        unordered_map <int,vector<int>> mpp;
        //adjacency matrix
        for(vector<int> x:edges){
            int u=x[0];
            int v=x[1];
            mpp[u].push_back(v);
        }

        for(int i=0;i<n;i++){
            int ancestor=i;
            DFS(ancestor,res,i,mpp);
        }
        return res;
    }

};