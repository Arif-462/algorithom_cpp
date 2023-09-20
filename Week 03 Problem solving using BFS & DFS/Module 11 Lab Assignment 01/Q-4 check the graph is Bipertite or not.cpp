#include<bits/stdc++.h>
using namespace std;

const int N = 1000;

int visited[N];
int color[N];

vector<int >adj_list[N];

bool detect_bipartite(int node)
{

    visited[node] = 1;

    for(int adj_node:adj_list[node])
    {
        if(visited[adj_node] == 0)
        {
            if(color[node] == 1) // assign different value to adj node;
            {
                color[adj_node] = 2;
            }
            else
            {
                color[adj_node] = 1;
            }

            bool is_bipartite = detect_bipartite(adj_node);
            {
                if(!is_bipartite)
                {
                    return false;
                }
            }
        }
        else
        {

            if(color[node] == color[adj_node])
            {
                return false;
            }
        }
    }

    return true;
}

int main()
{
    int n, m;
    cin>>n >>m;
    for(int i=0; i<m; i++)
    {
        int u, v;
        cin>>u>>v;
        adj_list[u].push_back(v);
        adj_list[v].push_back(u);

    }

    bool is_bipartite = true;

    for(int i=0; i<n; i++)
    {
        if(visited[i] == 0)
        {
            color[i] = 1;

            bool ok = detect_bipartite(i);

            if(!ok)
            {
                is_bipartite = false;
                break;
            }
        }
    }

    if(is_bipartite)
    {
        cout<<"YES\n";
    }
    else
    {
        cout<<"NO\n";
    }

    return 0;
}

