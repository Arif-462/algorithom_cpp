//https://cses.fi/problemset/task/1745
#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+1;
vector<bool> dp(N);

int main() {
  int n;
  cin >> n;
  vector<int> coins(n);
  for (int i = 0; i < n; i++) {
    cin >> coins[i];
  }
  sort(coins.begin(), coins.end());

  dp[0] = 1;

  for(int i=0; i<n; i++)
  {
      for(int j = N-1; j>= coins[i]; j--)
      {
          if(dp[j-coins[i]])
          {
              dp[j] = 1;
          }
      }
  }

  vector<int>ans;
  for(int i=1; i<N; i++)
  {
      if(dp[i])
      {
          ans.push_back(i);
      }
  }

  cout<<ans.size()<<endl;
  for(int num:ans)
  {
      cout<<num<<" ";
  }


  return 0;
}
