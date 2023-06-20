class Solution {
public:
    string frequencySort(string s) {
         unordered_map <char, int> m;
        for(int i =0;i< s.length();i++){
            m[s[i]]++;
        }
        priority_queue<pair<int, char>> q;
        for(auto x:m){
            q.push({x.second,x.first});
            
        }
        string ans;
        while(!q.empty()){
            int f = q.top().first;
            char ch = q.top().second;
            q.pop();
        
            for(int i =0;i<f;i++)
                ans+=ch;
                
            
        }
        
        return ans;
    
        
    }
};