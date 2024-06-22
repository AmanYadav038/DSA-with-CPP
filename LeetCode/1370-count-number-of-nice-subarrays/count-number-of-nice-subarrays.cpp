class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        unordered_map <int,int> mpp;
        mpp[0]=1;
        int oddCount=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2!=0){
                oddCount++;
            }
            mpp[oddCount]++;
        }

        int ansCount=0;
        oddCount=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2!=0){
                oddCount++;
            }
            int rem=oddCount-k;
            if(mpp.find(rem)!=mpp.end()){
                ansCount+=mpp[rem];
            }
        }
        return ansCount;
    }
};