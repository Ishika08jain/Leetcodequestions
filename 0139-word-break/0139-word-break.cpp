class Solution {
public:
    int dp[301];
    bool solve(string s, int i, set <string> &wordDict){
     if(i==s.size()){
            return 1;
        }
        if(dp[i] != -1){
            return dp[i];
        }
        string temp;
        for(int j =i;j<s.size();j++){
            temp += s[j];
            if(wordDict.find(temp) != wordDict.end()){
                if(solve(s,j+1,wordDict)){
                    return  dp[i]=1;
                }
            }        
        }
        return dp[i]= 0;
        
    }
    bool wordBreak(string s, vector<string>& wordDict) {
       set <string> st;
        memset(dp, -1, sizeof dp);
      for(auto i: wordDict){
          st.insert(i);
      }
        return solve(s,0,st);
        
    }
};