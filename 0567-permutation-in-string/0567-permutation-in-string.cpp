class Solution {
public:
    bool checkInclusion(string s1, string s2) {if(s1.size() > s2.size()) return false;

        vector<int> f1(26, 0), f2(26, 0);
        for(char c: s1) f1[c - 'a'] ++;

        int k =  s1.size();
        for(int i = 0; i < k - 1; i ++) f2[s2[i] - 'a'] ++;

        for(int i = k - 1; i < s2.size(); i ++){
            f2[s2[i] - 'a'] ++;
            if(f1 == f2) return true;
            f2[s2[i - (k - 1)] - 'a'] --;
        }
        return false;
    }
};

