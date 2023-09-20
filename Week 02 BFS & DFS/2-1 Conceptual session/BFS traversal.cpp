#include<bits/stdc++.h>
using namespace std;

const int N = 1e5;
bool visited[N];
vector<int>adj[N];

void bfs(int s)
{
    cout<<s<<" ";
    queue<int>q;
    visited[s]=true;
    q.push(s);

    while(!q.empty())
        {
            int node = q.front();
            q.pop();
            for(int child : adj[node])
            {
                if(!visited[child])
                {
                    visited[child]=true;
                    q.push(child);
                    cout<<child<<" ";
                }

            }

        }

}

int main(){
    int n, e;
    cin>>n>>e;

    for(int i=0; i<e; i++)
    {
        int u, v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);


    }

    bfs(1);


//    for(int i=0; i<n; i++)
//    {
//        cout<<i<<" ->";
//        for(int child:adj[i])
//        {
//           cout<<child<<" ";
//        }
//        cout<<"\n";
//    }
    return 0;

}


/*
    5 7


    1 2
    2 3
    1 3
    4 5
    1 5
    2 4
    3 4


*/
