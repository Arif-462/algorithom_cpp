#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+5;

const long long INF = 1e18;
long long dst[N];
int parent[N];
vector<pair<int, int>>adj_list[N];

int n, m;

int main()
{
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
   int last_updated = -1;

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
                   parent[v] = u;
                   if(i == n)
                   {
                       negative_cycle = true;
                       last_updated = v;

                   }
               }
           }
       }
   }

   if(negative_cycle == true)
   {
       cout<<"YES"<<"\n";

       int selected_node = last_updated;
       for(int i=1; i<=n-1; i++)
       {
           selected_node = parent[selected_node];
       }

       int first_node = selected_node;

       vector<int>cycle;
       cycle.push_back(selected_node);

       while(true)
       {
           selected_node = parent[selected_node];

           cycle.push_back(selected_node);
           if(selected_node == first_node)
           {
               break;
           }
       }
       reverse(cycle.begin(), cycle.end());

       for(int node:cycle)
       {
           cout<<node<<" ";
       }
       cout<<endl;
   }
   else
   {
       cout<<"NO"<<"\n";
   }


    return 0;

}
