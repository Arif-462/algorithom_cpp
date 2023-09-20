/*
            suffix dp formulation:

-dp state LCS(i,j) -> length of the longest common subsequence between string [0...i] and [0..j]


- dp recurrence LCS(i,j) -> 1+ LCS(i-1, j-1) if(s[i] == t[j])
                    esle max {LCS(i-1, j), LCS(i, j-1)};

-dp base LCS(i, 0) = 0
         LCS(0, j) = 0;


*/


#include<bits/stdc++.h>
using namespace std;

const int N = 303;
int dp[N][N];
string s, t;
int n, m;


int main()
{

   cin>>s>>t;

   n = s.size();
   m = t.size();

   //base case
    for(int i=0; i<=n; i++)
    {
        dp[i][0] = 0;
    }
    for(int j=0; j<=m; j++)
    {
        dp[0][j] = 0;
    }

    // loop over the state

    for(int i = 1; i <= n ; i++)
    {
        for(int j=1; j<= m; j++)
        {
            // calculate result form smaller sub-problem

            if(s[i-1]==t[j-1])
            {
                dp[i][j] = 1 + dp[i-1][j-1];
            }
            else
            {
                dp[i][j] = max(dp[i-1][j], dp[i][j-1]);
            }
        }
    }


    cout<<dp[n][m]<<endl;

    return 0;
}

/*
axyb
abyxb


*/

