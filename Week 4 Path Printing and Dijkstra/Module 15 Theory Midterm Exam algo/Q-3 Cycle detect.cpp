
#include<bits/stdc++.h>
using namespace std;
const int N = 1e5;
vector<int> adj[N];

bool visited[N];

bool cycle = false;

void dfs(int node, int parent)
{
    visited[node] = true;
    for(int child: adj[node])
        {
        if(!visited[child])
            {
                dfs(child, node);
            }
        else if(child != parent)
            {
                cycle = true;
            }
    }
}

int main(){
    int n, m;
    cin >> n >> m;
    for(int i=1; i<=m; i++){
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    for(int i=1; i<=n; i++){
        if(!visited[i]){
            dfs(i, -1);
        }
    }
    if(cycle){
        cout << "Cycle Exist"<<'\n';
    }
    else{
        cout << "No Cycle"<<'\n';
    }
    return 0;
}
