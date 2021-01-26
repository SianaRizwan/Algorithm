#include<bits/stdc++.h>
using namespace std;
string s1,s2;
int dp[1002][1002];

vector<char>V;

void path_print(int i,int j)
{
    if(i>=s1.size() or j>=s2.size()) return;

    if(s1[i]==s2[j])
    {
        V.push_back(s1[i]);
        path_print(i+1,j+1);
    }
    else
    {
        if(dp[i+1][j]>dp[i][j+1])
        {
            path_print(i+1,j);
        }
        else path_print(i,j+1);
    }
}
int lcs(int i,int j)
{
    if(i>=s1.size() or j>=s2.size()) return 0;
     if(dp[i][j]!=-1) return dp[i][j];

    if(s1[i]==s2[j])
    {
        return dp[i][j] = 1 + lcs(i+1,j+1);
    }
    else
    {
        return dp[i][j] = max(lcs(i+1,j),lcs(i,j+1));
    }
}




int main()
{

    while(cin>>s1>>s2)
    {
        memset(dp,-1,sizeof(dp));
        V.clear();
        lcs(0,0);
        path_print(0,0);
        int l1=0;
        int l2=0;
        for(int i=0; i<V.size(); i++)
        {
            while(l1<s1.size() && s1[l1]!=V[i])
            {
                cout<<s1[l1];
                l1++;
            }
            while(l2<s2.size() && s2[l2]!=V[i])
            {
                cout<<s2[l2];
                l2++;
            }
            cout<<V[i];
            l1++;
            l2++;
            //cout <<l1<<l2;
        }

        while(l1<s1.size())
        {
            cout<<s1[l1];
            l1++;
        }
        while(l2<s2.size())
        {
            cout<<s2[l2];
            l2++;
        }
        cout<<endl;

    }
}
