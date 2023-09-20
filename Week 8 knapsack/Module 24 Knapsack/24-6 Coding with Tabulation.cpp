#include<bits/stdc++.h>
using namespace std;
const int N = 105;
const int M = 1e5+5;

/*
    1. state: knapsack(n, cap) -> maximum profit cnsidering objects 1 to n ans capasity - cap;

    2. recurence:

        knapsack(n, cap) -> max{val[n] + knapsack(n-1), cap-wt[n],
        or   knapsack(n-1, cap)}

    3. base case -> knapsack(0, x) = 0;

*/


int wt[N];
int val[N];
long long  dp[N][M];

// coding Tabulation


int main()
{
    int n, w;
    cin>>n>>w;

    for(int i=1; i<=n; i++)
    {
        cin>>wt[i]>>val[i];
    }

    //1. handle base case
    for(int i=1; i<=w; i++)
    {
        dp[0][i] = 0;
    }

    //2. loop over the state;
    for(int i=1; i<=n; i++)
    {
        for(int cap=1; cap<= w; cap++)
        {
            if(cap<wt[i])
            {
                dp[i][cap] = dp[i-1][cap];
            }
            else
            //2.1 calculate the result from smaller sub problem

            dp[i][cap] = max(val[i] + dp[i-1][cap-wt[i]], dp[i-1][cap]);
        }
    }


    cout<<dp[n][w]<<endl;


    return 0;
}
