class Solution {
public:
    int maxProfit(vector<int>& prices){
        int cur =0;
        for(int i =0;i<prices.size(); i++){
            for(int j =i+1;j<prices.size();j++){
                if(prices[i]<prices[j]){
                    int ans = prices[j] - prices[i];
                    if(ans>cur){
                        cur = ans;
                    }
                    else{
                        cur=cur;
                    }
                }
            else{
                break;
            }
        }
        
    }
    return cur;
}
  
};