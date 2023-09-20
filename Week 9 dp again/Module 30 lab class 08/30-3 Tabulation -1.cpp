/*
            prefix formulation:

-dp state: LCS(i,j) = Longest common sequence of n and m string
- dp recurrence: LCS(i,j) => {
            if(i==s.size() 0r j==t.size())
                return 0;
            if(s[i] == t[i])
            {
                return 1+LCS(i+1, j+1);
            }
            else
            {
                return max(LCS(i+1, j), LCS(i, j+1))
            }
        }

-base LCS(i, n) =0
      LCS(n, j) =0
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
        dp[i][m] = 0;
    }
    // loop over the state

    for(int i= n-1; i>=0; i--)
    {
        for(int j=m-1; j>=0; j--)
        {
            // calculate result form smaller sub-problem
            if(s[i]==t[j])
            {
                dp[i][j] = 1 + dp[i+1][j+1];
            }
            else
            {
                dp[i][j] = max(dp[i+1][j], dp[i][j+1]);
            }
        }
    }


    cout<<dp[0][0]<<endl;

    return 0;
}

/*
axyb
abyxb




*/

