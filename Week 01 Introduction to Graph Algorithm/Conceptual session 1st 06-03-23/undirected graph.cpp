#include<bits/stdc++.h>
using namespace std;
/*
    adjancey list representation

*/

const int maxN=10;
int main()
{
    int n,e;
    cin>>n>>e;
    vector<int>adjList[n+1];


//    v[1].push_back(2);
//    v[1].push_back(5);
//    v[1].push_back(1);
//
//    for(int i=0; i<v[1].size(); i++)
//    {
//        cout<<v[1][i]<<" ";
//    }



    for(int i=1; i<=e; i++)
    {
        int u, v;
        cin>>u>>v;
        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }

    for(int i=1; i<=n; i++)
    {
        cout<<i<<" => ";
        for(auto j:adjList[i])
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}


/*
    1-2-3
    2-1-3-7-8
    3-1-2
    4
    5
    6-7-9
    7-6-2-8
    8-2-9-7
    9-62-3

*/
