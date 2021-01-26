class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minVal = INT_MAX, ans = 0;
        for (int k=0; k<prices.size(); k++) {
            int p = prices[k];
            minVal = min(minVal, p);
            ans = max(ans, p - minVal);
        }
        return ans;
    }
};
