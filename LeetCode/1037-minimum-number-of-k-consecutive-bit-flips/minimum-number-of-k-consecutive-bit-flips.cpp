class Solution {
public:
    int minKBitFlips(vector<int>& nums, int k) {

        //Approach 1
        // unordered_map <int,int> mpp;
        // int n=nums.size();
        // int flip=0;
        // int flipCount=0;
        // int ansCount=0;
        // for(int i=0;i<n;i++){
        //     if(i>=k && mpp.find(i-k)!=mpp.end()){
        //         flipCount--;
        //     }
        //     if(nums[i]==flipCount%2){
        //         flip++;
        //         flipCount++;
        //         mpp[i]++;
        //         if(i+k>n){
        //         return -1;
        //     }
        // }
        // }
        // return flip;

        //Approach 2
        int n=nums.size();
        int flip=0;
        int flipCount=0;
        int ansCount=0;
        for(int i=0;i<n;i++){
            if(i>=k && nums[i-k]==5){
                flipCount--;
            }
            if(nums[i]==flipCount%2){
                flip++;
                flipCount++;
                nums[i]=5;
                if(i+k>n){
                return -1;
            }
        }
        }
        return flip;
    } 
};