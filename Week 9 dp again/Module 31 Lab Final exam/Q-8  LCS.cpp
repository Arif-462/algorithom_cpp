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

const int N = 3003;
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

  int i = n;
  int j = m;
  string str = " ";
  while (i > 0 && j > 0) {
    if (s[i - 1] == t[j - 1]) {
      str += s[i - 1];
      i -= 1;
      j -= 1;
    } else {
      if (dp[i - 1][j] > dp[i][j - 1]) {
        i -= 1;
      } else {
        j -= 1;
      }
    }
  }

  for(int i = str.size()-1; i>=0; i--)
    cout<<str[i];

    return 0;
}

/*
axyb
abyxb




*/
