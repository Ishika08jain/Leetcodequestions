class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& arr, int k) {
        deque <int> q;
        vector <int> ans;
        
 for(int i =0;i<k;i++){
    while(!q.empty() && arr[i] >= arr[q.back()]){
        q.pop_back();
            }
     q.push_back(i);
 }
 //remaining window
ans.push_back(arr[q.front()]);
        for(int i =k;i<arr.size();i++){
            if(!q.empty() && i-q.front() >=k){
                q.pop_front();
            }
             while(!q.empty() && arr[i] >= arr[q.back()]){
        q.pop_back();
            }
     q.push_back(i);
            
        
        ans.push_back(arr[q.front()]);
        
 //answer dedo purani window ka
    
        
    }
    return ans;

    }



        
    
};