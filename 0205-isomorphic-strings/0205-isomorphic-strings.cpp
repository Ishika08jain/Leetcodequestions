class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, char> charCount;
   
  
    for (int i = 0; i < s.length(); i++)
    {
        if (charCount.count(s[i]))
        {
            if (charCount[s[i]] != t[i]) {
                return false;
            }
        }
   
        else {
           
            vector<char> values;
            for (auto it : charCount) {
                values.push_back(it.second);
            }
            if (find(values.begin(), values.end(), t[i])
                != values.end()) {
                return false;
            }
            else {
                charCount[s[i]] = t[i];
            }
        }
    }
    return true;
        
    }
};