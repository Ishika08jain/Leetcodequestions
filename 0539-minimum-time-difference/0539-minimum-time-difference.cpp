class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        vector <int> minu;
        for(int i =0;i<timePoints.size();i++){
            string current = timePoints[i];
            int hours = stoi(current.substr(0,2));
            int minutes = stoi(current.substr(3,2));
            int totalMinutes = hours * 60 + minutes;
            minu.push_back(totalMinutes);

            //min string ban jayegi isko solve karke
        }
        sort(minu.begin(), minu.end());
        int mini = INT_MAX;
        int n = minu.size();
        for(int i =0;i<n-1 ;i++){
           int diff = minu[i+1] - minu[i];
           mini = min(mini,diff);
    }
    int lastdiff = (minu[0] + 1440) - minu[n-1];
    mini = min(mini, lastdiff);

    return mini;
    }
};