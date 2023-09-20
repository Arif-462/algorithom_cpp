/*
#include<bits/stdc++.h>
using namespace std;
//problem Link: https://atcoder.jp/contests/dp/tasks/dp_c

const int N = 1e5+5;

/*
        memorization/recursion method:

    -state: fun(n,x) -> maximum happines till day-n
                        if we pick task-x on day-n;

    - Recursion: fun(n,x) = max{fun(n-1, y) where x != y
                                + happiness[n][x]

    - base case: fun(1,x) = happiness[i][x]



int happiness[N][4], dp[N][4];
/*
int fun(int day, int current_task)
{
    //1. handle base case
    if(day==1)
    {
        return happiness[day][current_task];
    }

    //2. if answer is already calculted return it
    if(dp[day][current_task] != -1)
    {
        return dp[day][current_task];
    }

    //3. calculte the answer from smaller sub problem
    int max_profit = 0;
    for(int last_task=1; last_task<=3; last_task++)
    {
        if(last_task != current_task)
        {
            int candidate_profit = fun(day-1, last_task) +
                                   happiness[day][current_task];
            max_profit = max(max_profit, candidate_profit);
        }
    }
    dp[day][current_task] = max_profit;
    return max_profit;
}

int main()
{
    int n;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
//        int a,b,c;
//        cin<<a<<b<<c;
//
//        happiness[i][1] = a;
//        happiness[i][2] = b;
//        happiness[i][3] = c;
//              or

        for(int j=1; j<=3; j++)
        {
            cin>>happiness[i][j];
        }
    }

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=3; j++)
        {
            dp[i][j] = -1;
        }
    }

    int ans1 = fun(n, 1);
    int ans2 = fun(n, 2);
    int ans3 = fun(n, 3);

    cout<<max({ans1, ans2, ans3})<<endl;

    return 0;
}








/*
            iterative / tabulation Method

    -state: fun(n,x) -> maximum happines till day-n
                        if we pick task-x on day-n;

    - Recursion: fun(n,x) = max{fun(n-1, y) where x != y
                                + happiness[n][x]

    - base case: fun(1,x) = happiness[i][x]
*/



#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+5;

int happiness[N][4], dp[N][4];
int main()
{
    int n;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
//        int a,b,c;
//        cin<<a<<b<<c;
//
//        happiness[i][1] = a;
//        happiness[i][2] = b;
//        happiness[i][3] = c;
//              or

        for(int j=1; j<=3; j++)
        {
            cin>>happiness[i][j];
        }
    }

    //1. handle base case

    for(int task =1; task<=3; task++)
    {
        dp[1][task] = happiness[1][task];
    }

    //2. loop over the state
    int max_profit = 0;
    for(int day = 1; day <= n; day++)
    {
        for(int current_task = 1; current_task <= 3; current_task++)
        {
            int max_profit = 0;
            for(int last_task = 1; last_task<=3; last_task++)
            {
                if(last_task != current_task)
                {
                    int current_profit = dp[day-1][last_task] + happiness[day][current_task];
                    max_profit = max(max_profit, current_profit);
                }

            }
            dp[day][current_task] = max_profit;

        }
    }

    int ans = max({dp[n][1] , dp[n][2], dp[n][3]});

    cout<<ans<<endl;




}
