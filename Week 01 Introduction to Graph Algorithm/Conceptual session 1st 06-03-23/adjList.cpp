#include<bits/stdc++.h>
using namespace std;

const int MaxN = 100;
int main()
{
    vector<int> adjList[MaxN];
    int n,e;
    cin>>n>>e;

    for(int i=0; i<e; i++)
    {
        int u,v;
        cin>>u>>v;
        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }

    for(int i=0; i<n; i++)
    {
        cout<<i<<"- >";
        for(auto j:adjList[i])
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }



    return 0;

}
