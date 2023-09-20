#include<bits/stdc++.h>
using namespace std;
//https://codeforces.com/problemset/problem/1033/A
const int N = 1005;
bool visited[N][N];
int dir [8][8];
int n;
int ax, ay;
int bx, by;
int cx, cy;


void bfs()
{
    queue<pair<int ,int>> q;
    q.push({bx, by});
    visited[bx][by] = true;

    while(!q.empty())
    {
        int x = q.front().first;
        int y = q.front().second;
        q.pop();

        for (int i = 0; i < 8; i++)
        {
            dir[i][0] =  1;
            dir[i][1] = -1;
        }


        for(int i=0; i<8; i++)
        {
            int nx = x + dir[i][0];
            int ny = y + dir[i][1];

            if(nx < 0 || nx >= n || ny < 0 || ny >= n)
            {
                continue;
            }

            visited[nx][ny] = true;
            q.push({nx, ny});

            if(nx == cx && ny == cy)
            {
                cout<<"YES"<<endl;
                return ;
            }

        }
    }
    cout<<"NO"<<endl;
}

void dfs(int x, int y) {
  if (x == cx && y == cy) {
   cout<<"YES"<<endl;
   return;
  }

  for (int i = 0; i < 8; i++)
  {
      dir[i][0] =  1;
      dir[i][1] = -1;
  }

  for (int i = 0; i < 8; i++) {
    int nx = x + dir[i][0];
    int ny = y + dir[i][1];

    if (nx < 0 || nx >= n || ny < 0 || ny >= n) {
      continue;
    }

    if (visited[nx][ny]) {
      continue;
    }

    visited[nx][ny] = true;
    dfs(nx, ny);
  }
}


int main()
{
    cin>>n;
    cin>>ax>>ay;
    cin>>bx>>by;
    cin>>cx>>cy;


    //bfs();

    dfs(bx, by);


    return 0;
}
