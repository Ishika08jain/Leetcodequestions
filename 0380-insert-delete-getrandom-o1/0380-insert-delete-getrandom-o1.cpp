class RandomizedSet {
public:
    vector <int> ans;
    unordered_map <int, int> myMap;
    RandomizedSet() {
        
    }
    
    bool insert(int val) {
        if(myMap.find(val) != myMap.end() ){
            return false;
        }
        ans.push_back(val);
        myMap[val] = ans.size()-1;
        return true;
        
        
    }
    
    bool remove(int val) {
        if(myMap.find(val) == myMap.end())
            return false;
        
        auto it=  myMap.find(val);
        ans[it->second] = ans.back();
        ans.pop_back();
        myMap[ans[it-> second]] = it-> second;
        myMap.erase(val);
        return true;
    }
    
    int getRandom() {
        return ans[rand() % ans.size()];
    }
};

/**
 * Your RandomizedSet object will be instantiated and called as such:
 * RandomizedSet* obj = new RandomizedSet();
 * bool param_1 = obj->insert(val);
 * bool param_2 = obj->remove(val);
 * int param_3 = obj->getRandom();
 */