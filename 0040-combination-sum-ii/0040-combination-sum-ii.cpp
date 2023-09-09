class Solution {
public:
    void solve(int idx, int target, vector<int> &arr, vector <vector <int>>&res, vector <int> &ds){
        if(target ==0){
            res.push_back(ds);
            return;
        }
        for(int i = idx;i<arr.size();i++){
            if(i > idx && arr[i]== arr[i-1])
                continue;
            
            if(arr[i] > target)
                break;
            
            ds.push_back(arr[i]);
            solve(i+1, target - arr[i], arr, res, ds);
            ds.pop_back();
        }
        
    }
    vector<vector<int>> combinationSum2(vector<int>& arr, int target) {
        sort(arr.begin(),arr.end());
        vector <vector <int>> res;
        vector <int> ds;
        solve(0, target, arr, res, ds);
        return res;
    }
};