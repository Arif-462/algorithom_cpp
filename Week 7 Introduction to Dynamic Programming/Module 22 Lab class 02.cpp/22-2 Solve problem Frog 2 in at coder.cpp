//https://atcoder.jp/contests/dp/tasks/dp_b

#include<bits/stdc++.h>
using namespace std;


const int N = 1e5+5;
const int INF = 2e9;

int dp[N];
int h[N];

int n, k;

/*/ Tabulation Method:
int main()
{

    cin>>n>>k;

    dp[1] = 0;

    for(int i=1; i<=n; i++)
    {
        cin>>h[i];
    }

    for(int i=2; i<=n; i++)
    {
        dp[i] = INF;
        for(int j=1; j<=k; j++)
        {
            if(i-j <= 0)
            {
                break;
            }
           int ans = dp[i-j] + abs(h[i] - h[i-j]) ;
           dp[i] = min(dp[i], ans);
        }
    }


    cout<< dp[n] <<"\n";
    return 0;
}
*/



// Memorization Method


#include<bits/stdc++.h>
using namespace std;


const int N = 1e5+5;
const int INF = 2e9;

int dp[N];
int h[N];

int n, k;

int stone(int n)
{
    //1. base case

    if(n == 1)
    {
        return 0;
    }

    if(dp[n] != -1)
    {
        return dp[n];
    }

    int ans = INF;

    for(int i=1; i<=k; i++)
    {
        // corner case
        if(n-i <= 0)
        {
            break;
        }
        int candidate_ans = stone(n-i) + abs(h[n] - h[n-i]);
        ans = min(ans, candidate_ans);
    }
    dp[n] = ans;

    return ans;
}

int main()
{

    cin>>n>>k;
    for(int i=1; i<=n; i++ )
    {
       cin>>h[i];
    }

    for(int i=1; i<=n; i++)
    {
        dp[i] = -1;
    }

    cout<<stone(n)<<endl;


    return 0;
}
