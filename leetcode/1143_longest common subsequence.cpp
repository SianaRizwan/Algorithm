class Solution {
public:
    int longestCommonSubsequence(string text1, string text2) {
        int n = text1.size();
        int m=text2.size();
        int dp[n+1][m+1];
        memset(dp,0,sizeof(dp));

   for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(text1[i] == text2[j])
                dp[i+1][j+1]= 1 + dp[i][j];
            else
                dp[i+1][j+1]= max(dp[i+1][j],dp[i][j+1]);
        }
    }

    return dp[n][m];
    }
};
