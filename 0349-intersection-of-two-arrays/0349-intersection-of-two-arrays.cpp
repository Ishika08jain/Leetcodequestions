class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set <int> ans1;
        set <int> ans2;
        for(int i =0;i<nums1.size();i++){
            ans1.insert(nums1[i]);
        }
        for(int i=0;i<nums2.size();i++){
        int key = nums2[i];
            if(ans1.find(key) != ans1.end()){
                ans2.insert(nums2[i]);
            }
            
        }
        vector <int> ans;
        for(auto it = ans2.begin(); it != ans2.end();it++){
            ans.push_back((*it));
        }
        return ans;
        
        
    }
};