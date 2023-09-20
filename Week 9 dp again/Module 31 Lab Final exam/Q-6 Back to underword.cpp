
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const int N = 20005;
vector<int>graph[N];

int visited[N];

int bfs(int src)
{
    queue<int> q;
    ll vam = 0, lyk = 0;
    q.push(src);
    visited[src] = 1;
    vam++;

    while(!q.empty())
    {
        int u = q.front();
        q.pop();

        for(int i = 0;i<graph[u].size(); i++){
                int v = graph[u][i];
            if(visited[v] == 0){
                q.push(v);
                if(visited[u] == 1){
                    visited[v] = 2;
                    lyk++;
                }
                else
                {
                    visited[v] = 1;
                    vam++;
                }
            }
        }
    }
    return max(vam, lyk);
}

void clr()
{
    for(int i = 0;i<N;i++){
            graph[i].clear();
        }
}

int main()
{
    int t, tst=0;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        clr();

        for(int i = 0; i<n; i++){
            int u, v;
            cin>>u>>v;
            graph[u].push_back(v);
            graph[v].push_back(u);
        }
        ll sum = 0;
        memset(visited, 0, sizeof(visited));
        for(int i = 0; i < N; i++){
            if(visited[i] == 0 and !graph[i].empty())
                sum += bfs(i);
        }
        tst++;
        cout<<"Case "<<tst<<": "<<sum<<endl;
    }

    return 0;
}
