#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cin>>n;
    int adj_matrix[n][n];

    for(int i=0; i<n; i++)
    {
        for(int j = 0; j<n; j++)
        {
            cin>>adj_matrix[i][j];
        }
    }

    vector<vector<int>> AdjList(n);

    for(int i=0; i<n; i++)
    {
        for(int j = 0; j<n; j++)
        {
            if(adj_matrix[i][j]==1)
            {
                AdjList[i].push_back(j);
            }
        }
    }

    cout<<endl;
    for(int i=0; i<n; i++)
    {
        cout<<i<<" : ";
        for(int j = 0; j<AdjList[i].size(); j++)
        {
            cout<<AdjList[i][j]<<" ";
        }
        cout<<endl;
    }



    return 0;
}
