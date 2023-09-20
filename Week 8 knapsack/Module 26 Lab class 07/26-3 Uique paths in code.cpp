/*
#include<bits/stdc++.h>
using namespace std;
/*
https://leetcode.com/problems/unique-paths/
- state : f(n, m) -> number of unique paths from (0,0) to (n,m);
- recusive : f(n,m) -> f(n-1, m)+ f(n,m-1);
- base case: f(0,0) = 1;




// Memoization method
const int N = 101;

int dp[N][N];
int uniquePaths(int n , int m)
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
    int ans = 0;

    if(n > 0)
    {
        ans += uniquePaths(n-1,m);
    }
    if(m > 0)
    {
        ans += uniquePaths(n, m-1);
    }

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
            dp[i][j] = -1;
        }
    }

    cout<<uniquePaths(n-1, m-1)<<endl;

    return 0;
}

*/
// Tabulation Method



#include<bits/stdc++.h>
using namespace std;
/*
https://leetcode.com/problems/unique-paths/
- state : f(n, m) -> number of unique paths from (0,0) to (n,m);
- recusive : f(n,m) -> f(n-1, m)+ f(n,m-1);
- base case: f(0,0) = 1;

*/

const int N = 101;

int dp[N][N];

int main()
{
    int n, m;
    cin>>n>>m;

    //1. handle base case
    dp[0][0] = 1;

    //2. loop over the state

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(i == 0 && j == 0)
            {
                continue;
            }
            int ans = 0;

            if(i > 0) ans += dp[i-1][j];
            if(j > 0) ans += dp[i][j-1];

            dp[i][j] = ans;
        }
    }

    cout<<dp[n-1][ m-1]<<endl;

    return 0;
}
