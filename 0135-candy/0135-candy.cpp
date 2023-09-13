class Solution {
public:
    int candy(vector<int>& ratings) {
        int n  = ratings.size();
        int left[n];
        int right[n];
        for(int i =0;i<n;i++){
            left[i] = right[i] = 1;
        }
        for(int i =1;i<n;i++){
            if(ratings[i] > ratings[i-1]){
                left[i] = left[i-1] +1;
            }
        }
        for(int i = n-2;i>=0;i--){
            if(ratings[i] > ratings[i+1]){
             right[i] = right[i+1] +1;   
            }
        }
        int res[n];
        for(int i =0;i<n;i++){
            res[i] = max(left[i], right[i]);
        }
        int ans = accumulate(res, res+n,0);
        return ans;
    }
};