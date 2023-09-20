#include<bits/stdc++.h>
using namespace std;

const int n = 1e5;
int visited[n];

vector<int>adj_list[n];

void DFS(int node){

   cout<<node<<endl;

    visited[node] = 1;

    for(int adj_node: adj_list[node]){
        if(visited[adj_node] == 0){
            DFS(adj_node);
        }
    }
}


int main()
{
    int nodes, edges;
    cin>>nodes>>edges;

    for(int i = 0; i < edges; i++)
    {
        int u, v;
        cin>>u>>v;
        adj_list[u].push_back(v);
        adj_list[v].push_back(u);

    }
    int src = 0;
    DFS(src);


    return 0;
}


/*
    0-------1---------2--------3
            |         |
            |         |
            5---------4

    Total node = 6;
    Total edges = 5;

    List of adj Nodes ->

    6 6

    0 1
    1 2
    2 3
    1 5
    5 4
    2 4



*/
