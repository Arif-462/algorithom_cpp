#include<bits/stdc++.h>
using namespace std;

const int N =1e5;

vector<int>adj_list[N];

int visited[N];

void BFS(int src)
{
    queue<int>q;
    visited[src] = 1;
    q.push(src);

    while(!q.empty())
    {
        int head = q.front();
        q.pop();
        cout<<head<<" ";

        for(int adj_node:adjList[head])
        {
            if(!visited[adj_node])
            {
                visited[adj_node]=1;
                q.push(adj_node);
            }
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
    BFS(src);




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
    2 4
    5 4


    6 6


    2 3
    2 6
    3 4
    1 4
    1 6
    4 5




*/
