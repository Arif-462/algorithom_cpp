#include<bits/stdc++.h>
using namespace std;

const int N = 2e5;

vector<int>adjList[N];

int visited[N];

bool dfs(int node)
{
    visited[node]=1;
    for(int adjNode:adjList[node])
    {
        if(visited[adjNode]==0)
        {
            bool got_cycle = dfs[adjNode];
            if(got_cycle)
            {
                return true;
            }
        }

        else if(visited[adjNode] == 1)
        {
            return true;
        }

    }
    return false;

}

int main()
{
    int n, m;
    cin>>n>>m;

    for(int i=0; i<m; i++)
    {
        int u, v;
        cin>>u>>v;
        adjList[u].push_back(v);

    }

    bool exist_cycle = false;

    for(int i=0; i<n; i++)
    {
        if(visited[i] == 0)
        {
            bool got_cycle = dfs(i);
            if(got_cycle)
            {
                exist_cycle = true;
                break;
            }
        }
    }

    if(exist_cycle)
    {
        cout<<"cycle Exist"<<"\n";
    }
    else
    {
        cout<<"IMPOSSIBLE\n";
    }

    return 0;
}


/*
    problem Link : https://cses.fi/problemset/task/1669

    Example

    Input:
    5 6
    1 3
    1 2
    5 3
    1 5
    2 4
    4 5

    Output:
    4
    3 5 1 3

*/
