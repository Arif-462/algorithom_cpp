/*
#include<bits/stdc++.h>
using namespace std;

//problem Link :https://www.geeksforgeeks.org/subset-sum-problem-dp-25/
/*

- state -> fun(n, target) = returns 1 if it is possible to create subset from numbers
                            1 to n and from the sum "target";

- Recurrence -> fun(n, taget) = fun(n-1, target) //for yes  or
                                fun(n-1, taget-nums[n];//for No

- base case -> fun(0, target) = 1, if the target == 0;
                                    else 0;


/*
const int N = 101;
const int M = 1e5+5;

int nums[N];
int dp[N][M];


int fun(int n, int target)
{
    //1. base case
    if(n == 0)
    {
        if(target == 0) return 1;

        return 0;
    }

    //2 if result is already calculate just return it

    if(dp[n][target] != -1)
    {
        return dp[n][target];
    }

    //3. calculate result from smaller states;

    int ans1 = fun(n-1, target);
    if(target < nums[n])
    {
        dp[n][target] = ans1;
        return ans1;

    }

    int ans2 = fun(n-1, target - nums[n]);

    int ans = ans1 or ans2;

    dp[n][target] = ans;

    return ans;

}


int main()
{
    int n, target;
    cin>>n>>target;

    for(int i=1; i<=n; i++)
    {
        cin>>nums[i];
    }


    for(int i=0; i<=n; i++)
    {
        for(int j=0; j<=target; j++)
        {
            dp[i][j] = -1;
        }
    }
    cout<<fun(n, target)<<endl;

    return 0;
}

*/


#include<bits/stdc++.h>
using namespace std;

/*

- state -> fun(n, target) = returns 1 if it is possible to create subset from numbers
                            1 to n and from the sum "target";

- Recurrence -> fun(n, taget) = fun(n-1, target) //for yes  or
                                fun(n-1, taget-nums[n];//for No

- base case -> fun(0, target) = 1, if the target == 0;
                                    else 0;


*/
const int N = 100;
const int M = 1e5 + 5;

int nums[N];
int dp[N][M];

int main()
{
    int n, m;
    cin>>n>>m;

    for(int i=1; i<=n; i++)
    {
        cin>>nums[i];
    }

    //1. Handle the base case
    dp[0][0] = 1;

    for(int i=1; i<= m; i++)
    {
        dp[0][i] = 0;
    }

    //2. loop over the states
    for(int i= 1; i<= n; i++)
    {
        for(int target = 1; target <= m; target++)
        {
            //2.1 calculate ans from samaller sub problem
            int ans1 = dp[i-1][target];
            if(target < nums[i])
            {
                dp[i][target] = ans1;
            }
            else
            {
                int ans2 = dp[i-1][target - nums[i]];
                dp[i][target] = ans1 or ans2;
            }
        }

    }

    cout<<dp[n][m]<<endl;

    return 0;
}


/*
6 9
3 34 4 12 5 2

6 1
3 34 4 12 5 2

6 30
3 34 4 12 5 2

1 5
5

*/
