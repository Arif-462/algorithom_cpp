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

        for(int i=1; i<=n; i++)
        {
            for(int target =1; target<=k; target++ )
            {
                dp[i][target] = 0;
            }
        }


        //handle base case
        dp[0][0] = 1;



        // loop over thr state
        for(int i=1; i<=n; i++)
        {
            for(int target = 0; target <= k; target++)
            {
                // calculate the result from smaller sub-problem
                dp[i][target] = dp[i-1][target];

                for(int j=1; j<=limit[i]; j++)
                {
                    if(target < j*coin[i])
                    {
                        break;
                    }
                    int ret = dp[i-1][target - j * coin[i]];

                    dp[i][target] = (dp[i][target] + ret) % mod;
                }
            }
        }


        cout<<"case "<< ++tst<<" : "<<dp[n][k]<<endl;

    }

    return 0;
}
