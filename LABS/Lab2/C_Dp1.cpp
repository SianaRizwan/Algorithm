#include <bits/stdc++.h>
using namespace std;

int main(){
    long long F[1001],G[1001],H[1001];
    F[0]=G[0]=H[0]=1;
    F[1]=H[1]=1;
    G[1]=2;


    for(int i = 2;i <= 1000;++i)
    {
        F[i]=F[i-1]+F[i-2]+2*G[i-2]+H[i-2];
        G[i]=F[i]+G[i-1];
        H[i]=F[i]+H[i-2];
    }

    int t,n;

    cin >> t;

    for(int i = 1;i <= t;++i){
        cin >> n;
        cout << i << " " << F[n] <<"\n";
    }

    return 0;
}
