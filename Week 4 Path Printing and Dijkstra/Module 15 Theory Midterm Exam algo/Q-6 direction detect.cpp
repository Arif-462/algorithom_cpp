#include<bits/stdc++.h>
using namespace std;

const int N = 1500;
char grid[N][N];
bool visited[N][N];
pair<int, int>parent[N][N];

int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};

char dir[4] = {'D', 'R', 'U', 'L'};

void bfs(int x, int y, int n, int m)
{
    queue<pair<int, int>>q;
    q.push({x,y});
    visited[x][y] = true;
    parent[x][y]= {-1,-1};

    while(!q.empty())
    {

        pair<int, int>head = q.front();
        q.pop();

        for(int i=0; i<4; i++)
        {
            int new_dx, new_dy;

            new_dx = head.first + dx[i];
            new_dy = head.second + dy[i];

            if(!visited[new_dx][new_dy] && grid[new_dx][new_dy] != 'M' &&grid[new_dx][new_dy] != '#' &&
               new_dx >= 1 && new_dx <= n && new_dy >= 1 && new_dy <= m )
            {
                visited[new_dx][new_dy] = true;
                q.push({new_dx, new_dy});
                parent[new_dx][new_dy] = head;
            }

        }

    }
}

int main()
{
    int n, m;
    cin>>n >>m;

    int start_x, start_y, end_x, end_y;

    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j <= m; j++)
        {
            cin>>grid[i][j];

            if(grid[i][j] == 'A')
            {
                start_x = i;
                start_y = j;
            }

            if(grid[i][j] == '.')
            {
                end_x = i;
                end_y = j;
            }
        }
    }

    bfs(start_x, start_y, n, m);

    if(visited[end_x][end_y])
    {
       cout<<"YES"<<endl;


       vector<pair<int, int>>path;
       path.push_back({end_x,end_y});

       int x = end_x, y = end_y;

       while(parent[x][y] != make_pair(-1,-1))
       {
           pair<int, int> p = parent[x][y];
           x = p.first, y = p.second;
           path.push_back({x,y});
       }
       reverse(path.begin(), path.end());

       string ans;
       for(int i=0; i<path.size()-1; i++)
       {
           for(int j=0; j<4; j++)
           {
               int d_x , d_y;
               d_x = path[i].first+ dx[j];
               d_y = path[i].second + dy[j];

               if(d_x == path[i+1].first && d_y == path[i+1].second)
               {
                  ans.push_back(dir[j]);
                  break;
               }
           }
       }
       cout<<ans.size()<<"\n";
       cout<<ans<<"\n";

    }
    else
       {
           cout<<"NO"<<"\n";
       }



    return 0;
}

/*

5 8
..######
#M..A..#
#.#.M#.#
#M#..#..
..#.####

*/
