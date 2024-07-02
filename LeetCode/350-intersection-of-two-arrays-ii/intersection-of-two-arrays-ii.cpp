class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int> res;
        unordered_map <int,int> mpp;
        for(int i:nums1){
            mpp[i]++;
        }
        for(int j=0;j<nums2.size();j++){
            if(mpp[nums2[j]]!=0){
                res.push_back(nums2[j]);
                mpp[nums2[j]]--;
            }
        }
        return res;
    }
};