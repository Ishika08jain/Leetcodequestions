class Solution {
public:
    int solve(string &s,unordered_map <string,int>& mp, vector<int>& dp, int index){
        if(index == s.size()){
            return 0;
        }
        if(dp[index] != -1){
            return dp[index];
        }
        string ans = "";
        int n = s.size();
        for(int i=index;i<s.size();i++){
            ans.push_back(s[i]);
            int count = ((mp.count(ans)) ? 0 : ans.size()) + solve(s,mp,dp,i+1);
            n = min(n, count);
        }
        return dp[index] = n;
    }
    int minExtraChar(string s, vector<string>& dictionary) {
        vector <int> dp(s.size(),-1);
        unordered_map <string,int> mp;
        for(string& word: dictionary){
            mp[word]++;
        }
        int ans = solve(s,mp,dp,0);
        return ans;
    }
};