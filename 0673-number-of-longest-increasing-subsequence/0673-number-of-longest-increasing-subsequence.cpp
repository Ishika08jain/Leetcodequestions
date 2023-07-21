class Solution {
public:
        
        
    int findNumberOfLIS(vector<int>& nums) {
        int max_seq = 1;
        unordered_map<int,int> m;
        vector<pair<int,int>> dp(nums.size());
        for(int i=0;i<nums.size();i++){
            int sub_ans = 0; 
            int freq = 1; 
            for(int j=i-1;j>=0;j--){
                if(nums[j]<nums[i]){
                    if(sub_ans<dp[j].first){
                        sub_ans = dp[j].first;
                        freq = dp[j].second; 
                    }
                    else if(sub_ans==dp[j].first) freq+=dp[j].second;
                }
            }
            dp[i] = {1+sub_ans,freq};
            m[dp[i].first] += freq; //adding the relevant freq in map
            max_seq = max(max_seq,dp[i].first);
        }
        return m[max_seq];
    
        
    }
};