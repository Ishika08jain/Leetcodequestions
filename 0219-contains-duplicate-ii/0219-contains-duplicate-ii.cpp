class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
       unordered_map <int, int> mpp;
        for(int i =0;i<nums.size();i++){
            if(mpp.find(nums[i]) != mpp.end()){
                int index = mpp[nums[i]];
                if(abs(index-i) <= k){
                    return true;
                }
            }
            mpp[nums[i]] = i;
        }
        return false;
    }
};