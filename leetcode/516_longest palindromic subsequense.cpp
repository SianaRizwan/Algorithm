class Solution {
public:
    int longestPalindromeSubseq(string s) {
        int N = s.size();
        int dp[N+10][N+10];
        memset(dp,0,sizeof(dp));
        for (int i = 1; i <= N; ++i) {
            for (int j = 1; j <= N; ++j) {
                if (s[i - 1] == s[N - j]) dp[i][j] = 1 + dp[i - 1][j - 1];
                else dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
        return dp[N][N];
    }
};
