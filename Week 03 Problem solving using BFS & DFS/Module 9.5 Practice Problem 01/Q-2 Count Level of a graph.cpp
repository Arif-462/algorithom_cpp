#include<bits/stdc++.h>
using namespace std;

const int n = 1e5;
int visited[n];

int level[n];//newline

vector<int>adj_list[n];

void BFS(int src){


   queue<int>q;

   visited[src] = 1;
   level[src] = 0;// Newline
   q.push(src);

   while(!q.empty()){
    int head = q.front();
    q.pop();

    //cout<<head<<endl;// pause this line in sssp

    for(int adj_node: adj_list[head]){
        if(visited[adj_node] == 0){
            visited[adj_node] = 1;
            level[adj_node] = level[head]+ 1;// newline
            q.push(adj_node);
        }

    }
   }


}


int main()
{
    int nodes, edges;
    cin>>nodes>>edges;

    for(int i = 0; i < edges; i++)
    {
        int u, v;
        cin>>u>>v;
        adj_list[u].push_back(v);
        adj_list[v].push_back(u);

    }
    int src = 3;
    BFS(src);

    for(int i=0; i<nodes; i++)
    {
        cout<<"Node "<<i<<" level "<<level[i]<<endl;
    }


    return 0;

}
