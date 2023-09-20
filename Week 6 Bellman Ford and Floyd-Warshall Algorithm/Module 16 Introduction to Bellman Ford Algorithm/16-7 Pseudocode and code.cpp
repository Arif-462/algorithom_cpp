/*
Optimize solution:::

pseudocode of bellman Ford algorithm:

> input > A weighted graph and a src node (with no negative cycle).
>output > Shortest distance from src node to all other nodes.
///*
    u-------v

    d[u] + w < d[v // w is the edge cost of u to v;
    d[v] = d[u]+w


//


-> Create a distance array "d" with all values to infinity.//O(n)
-> d[src] = 0;//O(1)

-> negative_cycle = false;

-> for i=1 to n; // O(n*m)
    - for all edge e(u,v,w);
        - if d[u]+w < d[v];//O(1)
            d[v] = d[u]+w;//O(1)
            -if i == n  //O(1)
                negative_cycle = true;

-> print negative cycle exists.
-> Finally print the distance array "d"; //O(n)

// time complexity is O(n^2);
O(n)+O(1)+O(n*m)+O(n)
O(|v|*|E|)
O(n^2)


sc= O(n)
*/

#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+5;
const int INF = 1e5;

int d[N];

vector<pair<int, int>>adj_list[N];

int main()
{
    int n, m;
    cin>>n>>m;

    for(int i=1; i<=n; i++)
    {
        d[i] = INF;
    }

    for(int i=1; i<=m; i++)
    {
        int u,v,w;
        cin>>u>>v>>w;
        adj_list[u].push_back({u, w});

    }



    int src = 1;
    d[src] = 0;

    bool negative_cycle = false;

    for(int i=1; i<=n; i++)
    {
        for(int node = 1; node<= n; node++)
        {
            for(pair<int, int>adj_node:adj_list[node])
            {
                int u = node;
                int v = adj_node.first;
                int w = adj_node.second;



                if(d[u] + w < d[v])
                {
                    d[v] = d[u] + w;

                    if(i== n)
                    {
                        negative_cycle = true;
                    }
                }


            }

        }
    }
    if(negative_cycle == true)
        cout<< " negative cycle exists\n";
    else
    {
        for(int i=1; i<=n; i++)
        {
            cout<<d[i]<<" ";
        }
    }



    return 0;
}

