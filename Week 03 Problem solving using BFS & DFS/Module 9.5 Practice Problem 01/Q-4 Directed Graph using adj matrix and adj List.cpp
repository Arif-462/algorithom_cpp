#include<bits/stdc++.h>
using namespace std;

bool isBidirectional(vector<vector<int>>& graph) {
    int n = graph.size();
    vector<unordered_set<int>> outgoing(n);
    for (int i = 0; i < n; i++) {
        for (int j : graph[i]) {
            outgoing[i].insert(j);
        }
    }

    for(int i=0; i<n; i++)
    {
        for(int j:graph[i])
        {
            if(outgoing[j].count(i) == 0)
            {
                return false;
            }
        }
    }
    return true;
}


int main()
{
    int node, edge;
    cin>>node>>edge;

    vector<vector<int>> graph(node);
    for (int i = 0; i < edge; i++) {
        int u, v;
        cin >> u >> v;
        graph[u].push_back(v);
    }

    bool is_bidirectional = isBidirectional(graph);
    if (is_bidirectional) {
        cout << "The graph is bi-directional." << endl;
    } else {
        cout << "The graph is not bi-directional." << endl;
    }
    return 0;
}
