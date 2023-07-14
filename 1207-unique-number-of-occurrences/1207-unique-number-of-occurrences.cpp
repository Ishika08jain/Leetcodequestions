class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map <int, int> freq;
        bool ans = true;
        unordered_set <int> s;
        
        for(auto i: arr){
            freq[i]++;
        }
        
       
        for(const auto & pair: freq){
             
                    if(!s.insert(pair.second).second){
                        return false;
                    }
            
             

        }
       
        return true;
        
    }
};