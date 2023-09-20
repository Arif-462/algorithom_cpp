#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+5;

const int INF = 1e9;
int dst[N];
int parent[N];
vector<pair<int, int>>adj_list[N];



int main()
{
    int n, m;
    cin>>n>>m;

   for(int i=1; i<=n; i++)
   {
       dst[i]=INF;
   }

   for(int i=1; i<=m; i++)
   {
       int u,v,w;
       cin>>u>>v>>w;
       adj_list[u].push_back({v, w});

   }


   bool negative_cycle = false;

   for(int i=1; i<=n; i++)
   {
       for(int node = 1; node <= n; node++)
       {
           for(pair<int, int> adj_node:adj_list[node])
           {
               int u = node;
               int v = adj_node.first;
               int w = adj_node.second;

               if(dst[u] + w < dst[v])
               {
                   dst[v] = dst[u] + w;
                   if(i == n)
                   {
                       negative_cycle = true;
                   }
               }
           }
       }
   }

   if(negative_cycle == true)
   {
       cout<<"YES"<<"\n";
   }
   else
   {
       cout<<"NO"<<"\n";
   }

    return 0;
}

/*

5 7

1 2 3
2 3 1
1 3 2
2 4 -8
4 1 2
4 5 2
2 5 5

*/
