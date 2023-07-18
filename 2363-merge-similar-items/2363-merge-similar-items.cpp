class Solution {
public:
    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& items1, vector<vector<int>>& items2) {
        map <int, int> map1;
        for(int i =0;i<items1.size();i++){
            map1.insert({items1[i][0],items1[i][1]});
        }
      for(int i=0;i<items2.size();i++){
          if(map1.find(items2[i][0]) != map1.end()){
              
              map1[items2[i][0]] = map1[items2[i][0]] + items2[i][1];
          }else{
             map1.insert({items2[i][0],items2[i][1]});
          }
      }
        vector <vector <int>>ans;
        for(auto e: map1){
            ans.push_back({e.first, e.second});
        }
        return ans;
        
    }
};