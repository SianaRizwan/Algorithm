#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    int cnt = 0;
    while (t--)
    {
        int n,i,j,k;

        int dp[205][205];
        int arr[205][205];
        memset(arr, 0, sizeof(arr));
        memset(dp, 0, sizeof(arr));
        cin >> n;
        for(i=1; i<=n; i++)
            for(j=1; j<=i; j++)
                cin >> arr[i][j];


        for(k=n-1; i<=2*n-1; k--,i++)
            for(j=1; j<=k; j++)
                cin >> arr[i][j];

        for(i=1; i<=n; i++)
            for(j=1; j<=i; j++)
                if(j==1)
                    dp[i][j]=arr[i][j]+dp[i-1][j];

                else if(j==n)
                    dp[i][j]=arr[i][j]+dp[i-1][j-1];

                else
                    dp[i][j]=arr[i][j]+max(dp[i-1][j-1],dp[i-1][j]);
        for(k=n-1; i<=2*n-1; i++,k--)
            for(j=1; j<=k; j++)
                dp[i][j]=arr[i][j]+max(dp[i-1][j],dp[i-1][j+1]);
        cnt++;

        cout << "Case " << cnt <<": "  << dp[2*n-1][1] << "\n";
    }
    return 0;
}
