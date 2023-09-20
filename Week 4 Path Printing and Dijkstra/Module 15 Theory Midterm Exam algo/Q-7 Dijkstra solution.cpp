
#include<bits/stdc++.h>
using namespace std;


const int N = 1e5+5;
const int INF = 1e5;

vector<pair<char, int>> adj_list[N];
int dst[N];
int visited[N];
int parent[N];


int n, m;


void dijkstra(char src)
{
    for(int i=0; i< n; i++)
    {
        dst[i] = INF;
    }
    dst[src] = 0;

    priority_queue<pair<char, int>>pq;
    pq.push({0, src});

    while(!pq.empty())
    {
        pair<int, int>head = pq.top();
        pq.pop();

        int selected_node = head.second;

        visited[selected_node] = 1;

            for(auto adj_entry:adj_list[selected_node])
            {
                int adj_node = adj_entry.first;
                int edge_cost = adj_entry.second;

                if(dst[selected_node] + edge_cost < dst[adj_node])
                {
                    dst[adj_node] = dst[selected_node] + edge_cost;
                    parent[adj_node] = selected_node;
                    pq.push({-dst[adj_node], adj_node});
                }
        }
    }
}

int main()
{

    cin>>n>>m;

    for(int i=0;i<m; i++)
    {
        char u, v;
        int w;

        cin>>u>>v>>w;
        adj_list[u].push_back({v, w});
        adj_list[v].push_back({u, w});

    }

    char src = 'E';
    dijkstra(src);

    if(visited[n] == 0 )
    {
        cout<<-1<<endl;
        return 0;
    }

    int current_node = n;
    vector<int>path;

    while(true)
    {
        path.push_back(current_node);
        if(current_node == src)
        {
            break;
        }
        current_node = parent[current_node];
    }

    reverse(path.begin(), path.end());

    for(int node:path)
    {
        cout<<node<<" ";

    }
    for(int i=0; i<n; i++)
    {
        cout<<dst[i]<<" ";
    }
    cout<<'\n';



    return 0;
}


/*


    9 15

    A B 2
    A C 1
    B C 7
    C E 9
    B E 20
    E G 5
    F G 1
    B F 13
    F H 21
    B H 15
    H I 7
    I J 6
    B J 6
    A I 18
    A J 5



//*/
