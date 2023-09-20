#include<bits/stdc++.h>
using namespace std;

const int N = 1000;

vector<int>graph[N];
int visited[N];

void dfs(int node){
    visited[node] = 1;

    for(int i=0; i<graph[node].size(); i++){
        int adj_node = graph[node][i];
        if(!visited[adj_node]){
            dfs(adj_node);
        }
    }
}

void count_connecte_components(int visited[], int nodes)
{
    int count = 0;
    for(int i=0; i<nodes; i++){
        if(!visited[i]){
            dfs(i);
            count++;
        }
    }
    cout<<count<<"\n";
}

int main()
{
    int nodes, edges;
    cin>>nodes>>edges;

    for(int i=0; i<edges; i++)
    {
        int u,v;
        cin>>u>>v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }

    cout<<endl;
    count_connecte_components(visited, nodes);

    return 0;
}
