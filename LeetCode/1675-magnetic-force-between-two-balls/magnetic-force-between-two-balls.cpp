class Solution {
public:
    bool distancePossible(vector<int>& position,int m,int mid){
        int balls=1;
        int force=position[0];
        for (int i=1;i<position.size();i++){
            if(position[i]-force >= mid){
                balls++;
                if(balls==m){
                    return true;
                }
                force=position[i];
            }
        }
        return false;
    }
    int maxDistance(vector<int>& position, int m) {
        sort(position.begin(),position.end());
        int mini=0;
        int maxi=position[position.size()-1];
        int ans=-1;
        while(mini<=maxi){
            int mid=mini+(maxi-mini)/2;
            if (distancePossible(position,m,mid)){
                ans=mid;
                mini=mid+1;
            }
            else{
                maxi=mid-1;
            }
        }
        return ans;
    }
};