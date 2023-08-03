class Solution {
public:
    int jump(vector<int>& nums) {
        int n = nums.size()-1;
        int reachable  =0;
        int count =0;
        int curr  =0;
        for(int  i= 0;i<n;i++){
            
              
            reachable = max(reachable, i + nums[i]);
            if(curr == i){
                curr = reachable;
            
            count++;
            }
            
        }
        return count;
        
    }
};