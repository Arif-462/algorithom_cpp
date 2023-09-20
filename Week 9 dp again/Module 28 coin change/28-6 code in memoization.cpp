#include<bits/stdc++.h>
using namespace std;

/*
-dp state: f(n,k) = number ways to make sum== k such that we dont exit the limit of each coin.

-dp recurrence: f(n,k) = f(n-1, k)+ f(n-1, k-coin[n])
                        +f(n-1, k-2*coin[n])+
                        .......................
                        f(n-1, k- limit[n]*coin[n]);

-dp base case;
f(0,0) = 1;

*/

const int N = 60;
const int M = 1001;

const int mod = 100000007;

int dp[N][M];
int coin[N], limit[N];


int fun(int n, int k)
{
    // base case
    if(n==0 )
    {
        if(k==0)
        {
            return 1;
        }
        return 0;
    }

    // if result already calculated it return
    if(dp[n][k] != - 1)
    {
        return dp[n][k];
    }
    // calculate the result from smaller sub problems
    int ans = fun(n-1, k);

    for(int i = 1; i <= limit[n]; i++)
    {
        if(k - i * coin[n] < 0)
        {
            break;
        }

        int ret = fun(n-1 , k - i * coin[n]);

        ans = (ans + ret) % mod;
    }

    dp[n][k] = ans;

    return ans;
}


int main()
{
    int t, tst = 0;
    cin>>t;
    while(t--)
    {
        int n, k;
        cin>>n >>k;

        for(int i=1; i<=n; i++)
        {
            cin>>coin[i];
        }

        for(int i=1; i<=n; i++)
        {
            cin>>limit[i];
        }


        for(int i=0; i<=n; i++)
        {
            for(int j=0; j<=k; j++)
            {
                dp[i][j] = -1;
            }
        }

        cout<<"case "<<++tst<<" : "<<fun(n, k)<<endl;

    }

    return 0;
}
