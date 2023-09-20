/*
# DP Steps:
+++++++++++

    -> Define State
    -> Identify the recursive equation from the smaller problems
    -> Define base cases



# Memorization - Method (Recursive)
===================================
fun(n, a , c......)
{
    // 1. Handle base case

    // 2. if current state is already solved, return the result.

    // 3. Calculate the result from smaller sub-problems.
}

# Tabulation - Method (Iteration)
==================================

main()
{
    // 1. Handle base case

    //2. Loop throw the states
        ->2.1. and calculate the answer from smaller sub-problems
}

*/







//#### Memorization Method---

/*
 State:

 - fib(n) -> calculate the nth fib number
 - fib(n) = fib(n-1)+fib(n-2)
 - fib(1) = 1, fib(2) = 1



*/

/*
#include<bits/stdc++.h>
using namespace std;


const int N = 1001;
int dp[N]; // dp array

int fib(int n)
{
    // 1. base case
    if(n<=2)return 1; // base case

    // 2. check if current state is already solved
    if(dp[n] != -1 )
    {
        return dp[n]; // check is current state is already solved
    }


    3. Calculte the result from smaller sub-problems
    int ans = fib(n-1)+fib(n-2);
    dp[n] = ans;

    return ans;

}


int main()
{
    int n;
    cin>>n;

    for(int i=1; i<=n; i++)
    {
        dp[i] = -1; // marks all state is unvisited;
    }

     //or memset(dp, -1, sizeof(dp));


    cout<<fib(n)<<endl;

    return 0;
}
*/












//##### Tabulation / Iteration method-----


/*
 State:

 - fib(n) -> calculate the nth fib number
 - fib(n) = fib(n-1)+fib(n-2)
 - fib(1) = 1, fib(2) = 1
*/

#include<bits/stdc++.h>
using namespace std;

const int N = 1001;
int dp[N]; // dp array

int main()
{
    int n;
    cin>>n;
    // 1. base case
    dp[1] = 1;
    dp[2] = 1;

    //2. loop throw the state
    for (int i=3; i<=n; i++)
    {
        //2.1. and calculate the answer from smaller sub-problems
        dp[i] = dp[i-1]+ dp[i-2];
    }

    cout<<dp[n]<<endl;

    return 0;
}
