class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int curr = 0;
        int maxAlt = 0;
        for(int i =0;i< gain.size();i++){
            curr+= gain[i];
              maxAlt = max(curr, maxAlt);
           
        }
      
        return maxAlt;
        
    }
};