#include<bits/stdc++.h>
using namespace std;/*
    Graph:
    0------1
          /  \
         /    \
        2------3


    Edges is:
    [0, 1]
    [1, 2]
    [1, 3]
    [2, 3]


*/

const int maxN = 100;
int main()
{
    vector<vector<int>>Edge_list;

    int n, e, u, v;
    cin>>n>>e;
    for(int i=0; i<e; i++)
    {
        cin>>u>>v;
        Edge_list[u].push_back(v);
        Edge_list[v].push_back(u);


    }
//    int n = 4 , m = 4;
//    //cin>>n>>m;
//    vector<vector<int>>Edge_list;
//    Edge_list.push_back({0, 1});
//    Edge_list.push_back({1, 2});
//    Edge_list.push_back({1, 3});
//    Edge_list.push_back({2, 3});

    for(int i=0; i<n; i++)
    {
        cout<<Edge_list[i][0]<<" "<<Edge_list[i][1]<<"\n";
    }

    return 0;
}
