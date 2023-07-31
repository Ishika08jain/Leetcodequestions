class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        vector <double> ans;
        double kel = celsius + 273.15;
        double far = celsius * 1.80 + 32.00;
        ans.push_back(kel);
        ans.push_back(far);
        return ans;
    }
};