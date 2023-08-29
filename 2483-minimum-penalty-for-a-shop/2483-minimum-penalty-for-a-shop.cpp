class Solution {
public:
    int bestClosingTime(string customers) {
        int max_score =0;
        int score=0;
        int best_hour = -1;
        for(int i=0;i<customers.size();++i){
            if(customers[i] == 'Y'){
                score += 1;
                
            }else{
                score += -1;
                
            }
            if(score > max_score){
            max_score = score;
                best_hour = i;
            
        }
        
        }
        return best_hour +1;
    }
};