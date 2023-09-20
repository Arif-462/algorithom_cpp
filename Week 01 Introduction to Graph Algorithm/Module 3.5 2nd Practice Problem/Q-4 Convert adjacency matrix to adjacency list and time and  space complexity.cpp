#include<bits/stdc++.h>
using namespace std;
/*
    Graph Representation
    --------------------
    --------------------

    0----------1
              / \
             /   \
            2-----3

    0--1;
    1--0;
    1--2;
    2--1;
    2--3;
    3--2;
    1--3;
    3--1;

    Adjacency matrix:
    0 1 0 0
    1 0 1 1
    0 1 0 1
    0 1 1 0

    adjacency List:
    0 -> 1
    1 -> 0,2,3;
    2 -> 1, 3
    3 -> 1,2




*/

const int maxN = 100;
int main()
{
    //time complexity = O(n^2)
    //space complexity = O(n^2)


    int adj_matrix[maxN][maxN]={};

    int n, e;
    cin>>n>>e;

    int u, v;
    for(int i=0; i<e; i++)
    {

        cin>>u>>v;
        adj_matrix[u][v]=1;
        adj_matrix[v][u]=1;
    }

    cout<<"Adjacency matrix\n";
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<e; j++)
        {
            cout<<adj_matrix[i][j]<<" ";
        }
        cout<<endl;
    }

    cout<<"\nAdjacency List \n";

    vector<int>adj_list[maxN];
//    adj_list[0] = {1};
//    adj_list[1] = {0, 2, 3};
//    adj_list[2] = {1, 3};
//    adj_list[3] = {1, 2};

    for(int i=0; i<e; i++)
    {
        cin>>u>>v;
        adj_list[u].push_back(v);
        adj_list[v].push_back(u);
    }

    for( int i=0; i<n; i++)
    {
        cout<<i<<" -> ";
        for(int j=0; j<adj_list[i].size(); j++)
        {
            cout<<adj_list[i][j]<<" ";
        }
        cout<<endl;
    }


    return 0;
}

