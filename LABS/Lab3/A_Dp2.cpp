#include <bits/stdc++.h>
#include <string.h>
using namespace std;
string s1;
char s2[6001];
int dp[6001][6001];
int vis[6001][6001];
int lcs(int i, int j) {
    if(i>=s1.length()||j>=s1.size())return 0;
    if(vis[i][j]==1)return dp[i][j];
    vis[i][j]=1;
    if(s1[i]==s2[j]){
        return dp[i][j]=1+lcs(i+1,j+1);
    } else{
        return dp[i][j]=max(lcs(i,j+1),lcs(i+1,j));

    }
}
int main() {
    int n;
    cin>>n;
    cin>>s1;
    s1.copy(s2,s1.length());
    reverse(s1.begin(),s1.end());
    //cout<<s1<<s2;
   int ans = n-lcs(0,0);
    cout<<ans;
    return 0;
}
