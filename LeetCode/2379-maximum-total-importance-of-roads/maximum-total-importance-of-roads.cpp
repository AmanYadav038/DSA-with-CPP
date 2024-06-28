class Solution {
public:
    long long maximumImportance(int n, vector<vector<int>>& roads) {
        unordered_map <int,int> mpp;
        for(int i=0;i<n;i++){
            mpp[i]++;
        }
        for(int i=0;i<roads.size();i++){
            mpp[roads[i][0]]++;
            mpp[roads[i][1]]++;
        } 
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> tempQueue;
        for(auto x:mpp){
            tempQueue.push({x.second,x.first});
        }
        for (int i=0;i<n;i++){
            int ele=tempQueue.top().second;
            mpp[ele]=i+1;
            tempQueue.pop();
        }
        long long sum=0;
        for(int i=0;i<roads.size();i++){
            sum+=mpp[roads[i][0]]+mpp[roads[i][1]];
        }
        return sum;
    }
};