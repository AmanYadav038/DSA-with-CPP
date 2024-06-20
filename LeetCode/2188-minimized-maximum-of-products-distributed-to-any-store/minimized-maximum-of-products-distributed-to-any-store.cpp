class Solution {
public:
    bool possibleDistribution(int n,vector<int> quantities,int mid){
        int shop=0;
        int j=0;
        while(j<quantities.size()){
            shop+=(quantities[j]+mid-1)/mid;
            j++;
            if(shop>n){
                return false;
            }
        }
        return true;
        
    }
    int minimizedMaximum(int n, vector<int>& quantities) {
        if (quantities.size()==1){
            return (quantities[0]+n-1)/n;
        }
        int maxi=*max_element(quantities.begin(),quantities.end());
        int s=1;
        int e=maxi;
        int ans=0;
        while(s<=e){
            int mid=s+(e-s)/2;
            if(possibleDistribution(n,quantities,mid)){
                ans=mid;
                e=mid-1;
            }
            else{
                s=mid+1;
            }
        }
        return ans;
    }
};