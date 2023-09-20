#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+5;

vector<int>adj_list[N];

int visited[N];

int n, m;

void bfs(int src)
{
    queue<int>q;
    q.push(src);
    visited[src] = 1;

    while(!q.empty())
    {
        int head = q.front();
        q.pop();


        for(int adj_node:adj_list[head])
        {
            if(visited[adj_node] == 0 )
            {
                visited[adj_node] = 1;
                q.push(adj_node);
            }
        }

    }

}

int main()
{
    cin>>n>>m;

    for(int i=1; i<=m; i++)
    {
        int a, b;
        cin>>a>>b;

        adj_list[a].push_back(b);
        adj_list[b].push_back(a);

    }

   int src = 1;
   bfs(src);
   int des_node = n;
   if(!visited[des_node])
   {
       cout<<"NO"<<'\n';
   }
   else
   {
       cout<<"YES"<<'\n';
   }


    return 0;
}
