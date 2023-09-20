
#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+5;
long long  dp[N];
long long coins[N];


// memorization method#######

long long max_coins( int n)
{
    if(n==0)
    {
        return 0;
    }

    for (int i = 1; i <= n; i++)
    {
        if (i == 1)
        {
            dp[i] = coins[0];
        }
        else
        {
            dp[i] = max(dp[i - 1], dp[i - 2] + coins[i - 1]);
        }
    }

    return dp[n];
}


int main()
{
  int n,t;
  cin >> t;

  for (int i = 1; i <= t; i++)
  {
    cin >> n;

    for (int j = 0 ; j < n; j++)
    {
      cin >> coins[j];
    }

    cout << "Case " << i  << " : " << max_coins(n) << endl;
   }

  return 0;
}




/*
// Tabulation Method########

#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+5;
long long  dp[N];
long long coins[N];

int main()
{
    int n,t;
    cin>>t;
    for(int i=1; i<=t; i++)
    {
        cin>>n;

        for(int i=1; i<=n; i++)
        {
            cin>>coins[i];
        }

        dp[0] = 0;

        for(int i=1; i<=n; i++)
        {
            dp[i] = max(dp[i-1], dp[i-2] + coins[i]);
        }

        cout<<"case "<< i <<" : "<< dp[n]<<endl;
    }


    return 0;
}

//*/
