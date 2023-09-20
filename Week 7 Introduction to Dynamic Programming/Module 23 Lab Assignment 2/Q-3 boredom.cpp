
#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+5;
long long int dp[N];
int point[N];



//Memorization Method###########

long long max_point( int n)
{
    if (n == 0)
    {
        return 0;
    }

    if (dp[n] != -1)
    {
        return dp[n];
    }

    long long ans = max(max_point( n-1), max_point( n - 2) + point[n]);
    dp[n] = ans;

    return ans;
}

int main() {
    int n;
    cin >> n;


    for (int i = 1; i <= n; i++) {
        cin >> point[i];
    }

    for(int i=1; i<=n; i++)
    {
        dp[i] = -1;
    }

    cout << max_point(n) << endl;

    return 0;
}





/*

// Tabulation method#####
#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+5;
long long int dp[N];
long long point[N];

int main() {
  int n;
  cin >> n;
  for (int i = 1; i <= n; i++) {
    cin >> point[i];
  }

  for (int i = 1; i <= n; i++) {
    dp[point[i]]++;
  }

  dp[0]=0;

  for(int i=2;i<=n; i++)
  {
      dp[i] = max(dp[i-1], dp[i-2] + dp[i]*i);
  }
  cout<<dp[n]<<endl;

  return 0;

}

//*/

