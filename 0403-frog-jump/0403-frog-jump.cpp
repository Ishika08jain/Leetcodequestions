class Solution {
public:
    bool canCross(vector<int>& stones) {
        int n = stones.size();
        unordered_map <int, unordered_set <int>> ans;
        ans[stones[0]] ={0};
        for(int i=0;i<n;i++){
            int pos = stones[i];
            for(auto it : ans[pos]){
                for(int jump = it-1;jump <=it+1;++jump){
                    if(jump >0){
                        ans[stones[i]+jump].insert(jump);
                    }
                }
            }
        }
        return !ans[stones.back()].empty();
        
        
        
    }
};