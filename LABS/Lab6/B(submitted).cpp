#include<bits/stdc++.h>

using namespace std;
#define INF 999999
int n,pr[210],cap[210][210];


int bfs(int src,int des)
{
    int vis[210]= {0};
    vis[src]=1;
    pr[src]=-1;
    queue<int>Q;
    Q.push(src);

    while(!Q.empty())
    {
        int u=Q.front();
        Q.pop();
        for(int i=0; i<=2*(n+1); i++)
        {

            if(vis[i] or cap[u][i]<=0) continue;
            Q.push(i);
            vis[i]=1;
            pr[i]=u;

        }
    }

    return vis[des];
}
int maxFlow(int src,int des)
{

    int f=0;
    while(bfs(src,des))
    {

        int path=1e9;
        for(int i=des; i!=src; i=pr[i]) path=min(path,cap[pr[i]][i]);

        for(int i=des; i!=src; i=pr[i])
        {

            int u=pr[i];
            int v=i;
            cap[u][v] -= path;
            cap[v][u] += path;
        }

        f+=path;

    }
    return f;
}

void clear()
{

}


int main()
{
    int t,cs=0;
    cin >> t;
    while(t--)
    {

        int edge,t,i,val;
        cin >> n;
        int source = 0;
        int dest = 2 * (n + 1);
        for (i = 1; i <= n; i++)
        {
            cin >> val;
            int u = 2 * i - 1;
            int v = u + 1;

            cap[u][v] += val;
            cap[v][u] += val;

        }



        cin >>edge;

        for (i = 0; i < edge; i++)
        {
            int a, b, c;
            cin >> a >> b >> c;
            int u = 2 * a;
            int v = 2 * b - 1;

            cap[u][v] += c;

        }

        int b, d,k;
        cin >> b >> d;

        for (i = 1; i <= b; i++)
        {
            cin >> k;
            int u = 2 * k - 1;

            cap[source][u] = INF;

        }
        for (i = 1; i <= d; i++)
        {
            cin >> k;
            int u = 2 * k;

            cap[u][dest] = INF;

        }


        cout << "Case " << ++cs << ": " << maxFlow(source,dest) << "\n";

        memset(pr, -1, sizeof(pr));
        memset(cap, 0, sizeof(cap));
    }

}
