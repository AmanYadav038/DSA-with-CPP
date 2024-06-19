class Solution {
public:
    bool bouquetPossible(vector<int>& bloomDay,int mid,int m,int k){
        int bCount=0;
        int count=0;
        for(int i=0;i<bloomDay.size();i++){
            if(bloomDay[i]<=mid){
                count++;
                if(count==k){
                    bCount++;
                    count=0;
                }
            }else{
                count=0;
            }
        }
        if(bCount>=m){
            return true;
        }else{
            return false;
        }
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        int s=0;
        int e=*max_element(bloomDay.begin(),bloomDay.end());
        int mid=s+(e-s)/2;
        int res=-1;
        while(s<=e){
            if(bouquetPossible(bloomDay,mid,m,k)){
                e=mid-1;
                res=mid;
            }else{
                s=mid+1;
            }
            mid=s+(e-s)/2;
        }
        return res;
    }
};