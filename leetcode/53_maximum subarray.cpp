class Solution {
public:
    int maxSubArray(vector<int>& nums) {
      int ans=INT_MIN, N = nums.size();
        int dp[N+1];
        memset(dp,0,sizeof(dp));
        for (int i = 0; i < N; ++i) ans = max(ans, dp[i + 1] = max(dp[i], 0) + nums[i]);
        return ans;
    }
};
