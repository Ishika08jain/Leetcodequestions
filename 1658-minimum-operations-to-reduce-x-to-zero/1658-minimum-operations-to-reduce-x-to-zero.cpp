class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int n = nums.size();
        int sum =0;
        unordered_map <int,int>mpp;
        for(int i =0;i<n;i++){
            sum += nums[i];
            mpp[sum]=i;
        }
        int t = sum -x;
        sum =0;
        if(t <0)return -1;
        int res = INT_MIN;
        mpp[0]= -1;
        for(int i =0;i<n;i++){
            sum += nums[i];
            if(mpp.find(sum -t)!= mpp.end()){
                res = max(res, i - mpp[sum-t]);
            }
        }
        if(res == INT_MIN){
            return -1;
        }
        else
            return n- res;
    }
};