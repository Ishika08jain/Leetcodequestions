class Solution {
public:
    vector<int> countBits(int n) {
        vector <int> ans;
        for(int i =0;i<=n;i++){
            int sum =0;
            int cnt =i;
            while(cnt !=0){
                sum += cnt %2;
                cnt = cnt/2;
            }
            ans.push_back(sum);
        }
        return ans;
    }
};