
#include<bits/stdc++.h>
using namespace std;

const int N=1e5+5;
int dp[N];


// memorization/recursion
int trib(int n)
{
    if(n <= 1)
    {
        return 0;
    }

    if(n == 3 || n==2)
    {
        return 1;
    }

    if(dp[n] != -1)
    {
        return dp[n];
    }

    int ans =  (trib(n-1) + trib(n-2) + trib(n-3));
    dp[n] = ans;

    return ans;

}

 int main()
{
    int n;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        dp[i] = -1;
    }
    cout<<trib(n)<<"\n";

    return 0;
}






/*
// tabulation/iterative

#include<bits/stdc++.h>
using namespace std;

const int N=1e5+5;
int dp[N];

int main()
{
    int n;
    cin>>n;

    dp[1] = 0;
    dp[2] = 1;
    dp[3] = 1;

    for(int i=4; i<=n; i++)
    {
        dp[i] = dp[i-1] + dp[i-2] + dp[i-3];
    }
    cout<<dp[n]<<"\n";

    return 0;
}
//*/
