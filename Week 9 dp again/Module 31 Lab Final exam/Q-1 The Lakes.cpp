//https://codeforces.com/contest/1829/problem/E


#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

const int N = 1010;
int t, n, m, ans, res;
int graph[N][N];
int visited[N][N];

int dx[4] = {-1,0,1,0};
int dy[4] = {0,1,0,-1};

void bfs(int x, int y){
    if(visited[x][y]==0)
        return ;

    visited[x][y]=0;

    for(int i=0; i<4; i++){
        int new_x, new_y;
        new_x = x + dx[i], new_y = y + dy[i];
        if(new_x >= 0 && new_x < n && new_y >= 0 && new_y < m && visited[new_x][new_y]){
            res += graph[new_x][new_y];
            bfs(new_x,new_y);
        }
    }
}

int main(){
    cin>>t;
    while(t--){
        cin>>n>>m;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cin>>graph[i][j], visited[i][j] = graph[i][j];
            }
        }


        res = ans = 0;
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(visited[i][j]){
                    bfs(i, j);
                    ans = max(ans, res+graph[i][j]);
                    res = 0;
                }
            }
        }
        cout<<ans<<'\n';
    }
    return 0;
}


/*
#include<bits/stdc++.h>
using namespace std;

const int N = 1002;
long long  grid[N][N];
bool visited[N][N];

int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};

bool is_valid(int x, int y, long long n, long long  m)
{
    if( x >= 0 && x < n && y >= 0 && y < m && !visited[x][y] && grid[x][y] != 0 )
    {
        return true;
    }
    return false;
}

long long  dfs(int x, int y, long long n, long long  m)
{
    long long  ans = grid[x][y];

    visited[x][y] = true;

    for(int i=0; i<4; i++)
    {
        int new_x = x + dx[i];
        int new_y = y + dy[i];

        if(is_valid(new_x, new_y, n, m))
        {
            ans += dfs(new_x, new_y, n, m);
        }
    }
    return ans;


}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n, m;

        cin>>n>>m;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                cin>>grid[i][j];
                visited[i][j] = false;

            }

        }

        long long  ans = 0;

        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                ans = max(ans, dfs(i,j,n,m));
            }
        }

        cout<<ans<<endl;


    }

    return 0;
}
//*/
