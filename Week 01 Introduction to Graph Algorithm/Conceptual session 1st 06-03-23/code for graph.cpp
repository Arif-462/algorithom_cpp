#include<bits/stdc++.h>
using namespace std;
/*
    >> maximum node value er soman sizer matrix nite hobe.(max node value suppose = n)
    >> node = n->(n*n)
    >> sob node 0 dia fill kore dibo.

    Question dibe:
    No of node/vetices
    no of edge


    5 5

    1 2
    1 3
    2 3
    4 2
    3 4


*/

const int maxN = 100;

int main()
{
    int n, m;
    cin>>n>>m;

    int adjMatrix[n+1][n+1];

    for (int i=0; i<n; i++ )
    {
        for(int j=0; j<n; j++)
        {
            adjMatrix[i][j] = 0;
        }
    }


    for(int i=0; i<m; i++)
    {
        int u,v;
        cin>>u>>v;
        adjMatrix[u][v]=1;
        adjMatrix[v][u]=1;
    }


    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout<<adjMatrix[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}

