class Solution {
public:
    int maxProfit(vector<int>& prices){
        int cur = prices[0];
        int max_profit =0;
        for(int i =1;i<prices.size();i++){
            if(prices[i] < cur){
               cur = prices[i];
                
            }
            else if(prices[i] - cur > max_profit){
                max_profit = prices[i] - cur;
            }
        }
        return max_profit;
}
  
};