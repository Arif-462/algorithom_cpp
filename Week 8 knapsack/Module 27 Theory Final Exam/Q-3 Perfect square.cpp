#include<bits/stdc++.h>
using namespace std;
//https://leetcode.com/problems/perfect-squares/

int perfect_sq_sum(int n,vector<int>& dp)
{
    //base case
    if (n == 0)
    {
        return 0;
    }
    //result already calculated return it
    if (dp[n] != -1) {
        return dp[n];
    }

    int ctn_sum = n;

    // calculate the result from smaller sub probem
    for (int i = 1; i*i <= n; i++)
    {
        ctn_sum = min(ctn_sum, perfect_sq_sum(n - i*i, dp) + 1);
    }

    dp[n] = ctn_sum;
    return dp[n];
}


int main() {
    int n;
    cin >> n;
    vector<int> dp(n + 1, -1);

    cout<<perfect_sq_sum(n , dp)<<endl;


    return 0;
}

