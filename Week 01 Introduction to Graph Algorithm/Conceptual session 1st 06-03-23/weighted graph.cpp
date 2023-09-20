#include<bits/stdc++.h>
using namespace std;
/*
    adjancey list representaion5

    node 5 and edge is 7

    5 7

    1 2 3
    1 3 4
    2 4 5
    3 4 6
    2 5 4
    4 5 3
    1 5 5



*/

const int maxN=100;
int main()
{
    int n,e;

    cin>>n>>e;
    vector<pair<int, int>>adjList[maxN+123];
//    v[1].push_back(2);
//    v[1].push_back(5);
//    v[1].push_back(1);
//
//    for(int i=0; i<v[1].size(); i++)
//    {
//        cout<<v[1][i]<<" ";
//    }

    for(int i=0; i<e; i++)
    {
        int u, v,w;
        cin>>u>>v>>w;
        adjList[u].push_back({v,w});
        adjList[v].push_back({u,w});
    }

    for(int i=0; i<n; i++)
    {
        cout<<i<<" -> ";
        for(auto j:adjList[i])
        {
            cout<<"{"<<j.first<<","<<j.second<<"}"<<" ";
        }
        cout<<endl;
    }
    return 0;
}


