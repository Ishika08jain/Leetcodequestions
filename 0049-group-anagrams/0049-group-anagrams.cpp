class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map <string, vector <string>> mmp;
        int n = strs.size();
        string temp;
        for(int i =0;i<n;i++){
            temp = strs[i];
            sort(strs[i].begin(), strs[i].end());
            mmp[strs[i]].push_back(temp);
        }
        vector <vector <string>> ans;
        for(auto it = mmp.begin();it != mmp.end();it++){
            ans.push_back(it->second);
        }
        return ans;
        
        }
};