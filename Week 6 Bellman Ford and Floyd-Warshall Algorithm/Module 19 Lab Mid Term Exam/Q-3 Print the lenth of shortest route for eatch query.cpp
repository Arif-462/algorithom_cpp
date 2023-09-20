#include<bits/stdc++.h>
using namespace std;

const int N = 1e3 + 3;
const long long INF = 1e18;
long long  dst[N][N];

//https://cses.fi/problemset/task/1672/

int main()
{
    int n,m,q;
    cin>>n>>m>>q;

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n; j++)
        {
            dst[i][j] = INF;
        }
    }

    for(int i=0; i<m; i++)
    {
        int u,v;
        long long w;
        cin>>u>>v>>w;
        dst[u][v] = min(dst[u][v], w);
        dst[v][u] = min(dst[v][u], w);

    }

    for(int i=1; i<=n; i++)
    {
        dst[i][i] = 0;
    }

    for(int k=1; k<=n; k++)
    {
        for(int u=1; u<=n; u++)
        {
            for(int v=1; v<=n; v++)
            {
                dst[u][v] = min(dst[u][v], dst[u][k] + dst[k][v]);
            }
        }
    }

    for(int i=0; i<q; i++)
    {
        int u, v;
        cin>>u>>v;

        if(dst[u][v] == INF)
            cout<< -1 << endl;

        else
            cout<<dst[u][v]<<"\n";
    }

    return 0;
}
