#include<bits/stdc++.h>
using namespace std;
const int N = 100;

vector<int>adjList[N];
bool visited[N];

void dfs(int src)
{
    cout<<src<<" ";
    visited[src]=1;
    for(int child:adjList[src])
    {
        if(!visited[child])
        {
            dfs(child);
        }
    }
}
int main()
{
    int n, e;
    cin>>n>>e;
    for(int i=1; i<=e; i++)
    {
        int u,v;
        cin>>u>>v;
        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }

    for(int i=1; i<=n; i++)
    {
        cout<<i<<"->";
        for(int child:adjList[i])
        {
            cout<<child<<" ";
        }
        cout<<endl;
    }

    int src = 1;
    dfs(src);

    return 0;
}

/*
10 9

1 2
1 3
2 4
3 4
3 6
9 6
6 7
6 8
8 9
*/
