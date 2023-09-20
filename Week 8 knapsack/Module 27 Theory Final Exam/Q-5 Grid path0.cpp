#include<bits/stdc++.h>
using namespace std;
//https://cses.fi/problemset/task/1638

const int N = 1002;
const int mod = 1000000007;

char grid[N][N];
long long  dp[N][N];

long long  path(int n, int i, int j)
{
    //base case
    if(i == n-1 && j == n-1)
    {
        return 1;
    }
    if(grid[i][j] == '*')
    {
        return 0;
    }

    // if result already calculated then return it
    if(dp[i][j] != -1)
    {
        return dp[i][j];
    }

    //calculate the result from smaller sub problem
    long long ans = 0;

    if(i < n && grid[i][j] != '*')
    {
        ans += path(n,i+1, j)%mod ;
    }

    if(j < n && grid[i][j] != '*')
    {
        ans += path(n,i, j+1)%mod;
    }

    ans = ans % mod;


    dp[i][j] = ans;
    return ans;


}


int main()
{
    int n;
    cin>>n;

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin>>grid[i][j];
        }
    }

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            dp[i][j] = -1;
        }
    }

    cout<<path(n , 0 , 0)<<endl;

    return 0;


}

/*
 will be handle following case
    1
    *


    3
    . . .
    . . .
    . . *




    /*

long long path(int n , int m)
{
    //1. base case
    if(n == 0 && m == 0)
    {
        return 1;
    }

    //2. the result is already calculated return it.
    if(dp[n][m] != -1)
    {
        return dp[n][m];
    }

    // calculate result from smaller sub_problem.
    long long ans = 0;

    if(n > 0 && grid[n][m] != '*')
    {
        ans += path(n-1 , m) % 1000000007;
    }
    if(m > 0 && grid[n][m] != '*')
    {
        ans += path(n , m-1) % 1000000007;
    }

    dp[n][m] = ans % 1000000007;
    return ans;

}
*/
