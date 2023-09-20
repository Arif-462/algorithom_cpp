#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
const int mod = 1e9+7;

int main()
{
        int n, x;
        cin>> n >> x;

        vector<ll>dp(x+1, 0);

        vector<int>coin(n);

        for(int i=0; i<n; i++)
        {
            cin>>coin[i];
        }

        //handle base case
        dp[0] = 1;

        for(int  i = 1; i <= x; i++)
        {
            for( int target = 0; target < n; target++ )
            {
                if(i-coin[target] >= 0){
                    dp[i] += dp[i-coin[target]];
                }

                dp[i] %= mod;
            }
        }


        cout<<dp[x]<<endl;

    return 0;
}
