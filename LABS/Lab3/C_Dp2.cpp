#include<bits/stdc++.h>
using namespace std;
long dp[2001][2001];
long int count(int n,long coin[],int j)
{
    if(n==0)
        return 1;
    if(n<0 or j<=0)
        return 0;
    if(dp[n][j]!=-1)
        return dp[n][j];
    dp[n][j]=count(n,coin,j-1)+count(n-(int)coin[j-1],coin,j);
    return dp[n][j];
}
int main()
{

    int n;
    int c;
    cin>>n>>c;
    long coins[c];
    for(int i=0; i<c; i++)
    {
        cin>>coins[i];
    }

    memset(dp,-1,sizeof(dp));
    cout<<count(n,coins,c);
}










