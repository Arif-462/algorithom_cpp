#include<bits/stdc++.h>
using namespace std;

const int N = 1001;
int dp[N];



    // Memorization Method:

int fib(int n)
{
    // base case
    if(n <= 2 )
    {
        return 1;
    }

    if(dp[n] != -1)
    {
        return dp[n];
    }
    int ans = fib(n-1) + fib(n-2);
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

    cout<< fib(n) <<endl;
    return 0;
}







    //Tabulation method:

/*

#include<bits/stdc++.h>
using namespace std;

const int N = 1001;
int dp[N];

int main()
{
    int n;
    cin>>n;
    // 1. base case
    dp[1] = 1;
    dp[2] = 1;

    for (int i=3; i<=n; i++)
    {
        dp[i] = dp[i-1] + dp[i-2];
    }

    cout<<dp[n]<<endl;

    return 0;
}

//*/

