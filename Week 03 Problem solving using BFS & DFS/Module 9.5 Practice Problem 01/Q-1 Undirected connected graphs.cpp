#include<bits/stdc++.h>
using namespace std;

//const int N = 8;

void DFS(vector<int> grap[], int u, vector<bool>& visited) {
    visited[u] = true;
    for (int v : grap[u]) {
        if (!visited[v]) {
            DFS(grap, v, visited);
        }
    }
}


int countConnectedComponents(vector<int> grap[], int n) {
    vector<bool> visited(n, false);
    int count = 0;
    for (int i = 1; i <= n; i++) {
        if (!visited[i]) {
            DFS(grap, i, visited);
            count++;
        }

    }
    return count;
}

void graphNode(vector<int>graph[], int src, int dst)
{
    graph[src].push_back(dst);
    graph[dst].push_back(src);
}

void display_graphNode(vector<int>graph[], int n)
{
    for(int i=1; i<=n; i++)
    {
        cout<<"Node-> "<<i<<" & adjacency Node -> ";
        for(int adjacentNode:graph[i])
        {
            cout<<adjacentNode<<" ";
        }
        cout<<endl;
    }
}

int main() {

    int n, m;
    cin>>n>>m;
    vector<int>graph[n+1];
    for(int i = 0; i<m; i++)
    {
        int u,v;
        cin>>u>>v;
        graph[u].push_back(v);
        graph[v].push_back(u);
    }



    graphNode(graph,1,2);
    graphNode(graph,1,3);
    graphNode(graph,2,3);

    graphNode(graph,4,5);

    graphNode(graph,6,6);

    display_graphNode(graph,n);

     int connectedComponents = countConnectedComponents(graph,n);
    cout << "Number of connected components: " << connectedComponents << endl;

    return 0;
}
