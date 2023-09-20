#include<bits/stdc++.h>
using namespace std;
//https://leetcode.com/problems/minimum-path-sum/

/*
-> state = f(n,m) -> Minimum cost from (0,0) to (n,m);
- recuurecez : f(n,m) = min((f(n-1,m) + ara[n,m]), f(n, m-1) + ara(n,m))
- base f(0,0) = ara[0][0];
*/

const int N = 201;
int grid[N][N];
int dp[N][N];

int MinPathSum(int n, int m)
{
    // base case
    if(n==0 && m == 0)
    {
        return 0;
    }

    if(dp[n][m] != -1)
    {
        return dp[n][m];
    }

    int ans1 = 0;
    int ans2 = 0;
    if(n > 0){
         ans1 = MinPathSum(n-1, m) + grid[n-1][m];
    }
    else if( m > 0){
         ans2 = MinPathSum(n, m-1) + grid[n][m-1];
    }



    int ans = min(ans1 , ans2);

    dp[n][m] = ans;

    return ans;
}

int main()
{
    int n, m;
    cin>>n>>m;

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin>>grid[i][j];
        }
    }

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<=m; j++)
        {
            dp[i][j] = -1;
        }
    }

    cout<<MinPathSum(n-1, m-1)<<endl;
}
