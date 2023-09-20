#include<bits/stdc++.h>
using namespace std;
/*
    >> maximum node value er soman sizer matrix nite hobe.(max node value suppose = n)
    >> node = n->(n*n)
    >> sob node 0 dia fill kore dibo.

*/

const int maxN=100;
int main()
{
    int n,e;
    cin>>n>>e;
    int adjMatrix[maxN][maxN];
    // 0 dia fill kore dite hobe;
    for(int i=0; i<e; i++)
    {
        int u,v;
        cin>>u>>v;
        adjMatrix[u][v]=1;
        adjMatrix[v][u]=1;  //for accoeding sto question
    }
    //print kore nite hobe
    for(int i=0; i<e; i++)
    {
        for(int j=0; j<n; j++)
        {
            cout<<adjMatrix[i][j]<<" ";
        }
        cout<<endl;
    }


    return 0;
}


/*
Graph : present in graph some nodes/vertices and some edges.

*/
