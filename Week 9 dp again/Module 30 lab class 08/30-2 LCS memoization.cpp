
/*
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

-base LCS(i,m) = 0 // all possibel i er jonno m is 0
      LCS(n,j) = 0 // all possible j er jonno n is 0
*/

#include<bits/stdc++.h>
using namespace std;

const int N = 3003;
int dp[N][N];
string s, t;
int n, m;

int LCS(int i, int j)
{
    //base case
    if(i == n || j == m)
    {
        return 0;
    }

    if(dp[i][j] != -1)
    {
        return dp[i][j];
    }

    if(s[i] == t[j])
    {
        int ans =  1 + LCS(i+1, j+1);
        dp[i][j] = ans;
        return ans;
    }

    else
    {
        int ans =  max(LCS(i+1, j), LCS(i, j+1));
        dp[i][j] = ans;
        return ans;
    }

}


int main()
{

    cin>>s>>t;

   n = s.size();
   m = t.size();

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            dp[i][j] = -1;
        }
    }


    cout<<LCS(0,0)<<endl;

    return 0;
}

/*
axyb
abyxb




*/

