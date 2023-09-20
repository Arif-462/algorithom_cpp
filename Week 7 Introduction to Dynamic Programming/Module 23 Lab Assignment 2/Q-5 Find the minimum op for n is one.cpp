
#include<bits/stdc++.h>
using namespace std;

const int N =1e5;
const int INF = 1e9;
int dp[N] ;


//Memorization #########

int count_op(int n)
{
    if (n == 1)
    {
        return 0;
    }

    if(dp[n] !=-1)
    {
        return dp[n];
    }

    else
    {
        int min_ops = INF;
        if (n % 2 == 0)
        {
            min_ops = min(min_ops, count_op(n / 2) + 1);
        }
        if (n % 3 == 0)
        {
            min_ops = min(min_ops, count_op(n / 3) + 1);
        }
        else
        {
            min_ops = min(min_ops, count_op(n - 1) + 1);
        }

        dp[N] = min_ops;

        return min_ops;
    }
}

int main() {
  int n;
  cin>>n;
  for(int i=1; i<=n; i++)
  {
      dp[i] = -1;
  }
  cout << count_op(n) << endl;
  return 0;
}






/*

  //Tabulation


#include<bits/stdc++.h>
using namespace std;

const int N =1e5;
const int INF = 1e9;
int dp[N] ;


int main()
{
    int n;
    cin>>n;

    dp[1] = 0;
    dp[2] = 1;
    dp[3] = 1;

    for (int i = 4; i <= n; i++)
    {

        dp[i] = dp[i - 1] + 1;


        if (i % 2 == 0)
            dp[i] = min(dp[i], dp[i / 2] + 1);


        if (i % 3 == 0)
            dp[i] = min(dp[i], dp[i / 3] + 1);
    }


    cout<<dp[n]<<"\n";


    return 0;
}


//*/
