#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+5;
const int INF = 1e9;

int dst[N];
int visited[N];
int n,m;

vector<pair<int, int>>adj_list[N];

void dijkstra(int src)
{
    for(int i=1; i<=n; i++)
    {
        dst[i]= INF;
    }
    dst[src]=0;

    for(int i=0; i<n; i++)
    {
        int selected_node = -1;
        for(int j=1; j<=n; j++)
        {
            if(visited[j] == 1)continue;

            if(selected_node == -1 || dst[selected_node] > dst[j])
            {
                selected_node = j;
            }
        }
        visited[selected_node] = 1;

        for(auto adj_entry:adj_list[selected_node])
        {
            int adj_node = adj_entry.first;
            int edge_cost = adj_entry.second;

            if(dst[selected_node]+ edge_cost < dst[adj_node])
            {
                dst[adj_node] = dst[selected_node] + edge_cost;
            }
        }

    }
}

int main()
{

    cin>>n>>m;

    for(int i=0; i<m; i++)
    {
        int u,v,w;
        cin>>u>>v>>w;
        adj_list[u].push_back({v, w});
        adj_list[v].push_back({u, w});
    }

    int src = 2;
    dijkstra(src);

    for(int i=1; i<=n; i++)
    {
        cout<<dst[i]<<" ";
    }
    cout<<endl;
    return 0;
}
