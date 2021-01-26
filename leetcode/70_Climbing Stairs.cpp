class Solution {

public:
    int stairs = 0;
    int dp[50];

    int ways(int n){
        int way = 0;
        if(n < 0) return 0;
        if(dp[n] > 0) return dp[n];
        if(n == 0)
                return 1;
        if(n >= 0){
            way = ways(n-1)+ ways(n-2);
        }

        return dp[n] = way;
    }

    int climbStairs(int n) {
       return ways(n);
    }
};
