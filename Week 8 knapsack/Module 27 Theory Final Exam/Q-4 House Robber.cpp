#include<bits/stdc++.h>
using namespace std;
//https://leetcode.com/problems/house-robber-ii/description/

const int N = 1003;
int dp[N];

int fun(vector<int>nums, int n)
{
    //base case

    if(n <= 0)return 0;
    if(n == 1)return nums[0];
    if(n == 2)return max(nums[0], nums[1]);


    if(dp[n] != -1)
    {
       return dp[n];
    }

    int ans = 0;
    ans =  max(nums[n-1] + fun(nums, n-2),  fun(nums, n-1));


    dp[n] = ans;
    return ans;

}

int rob(vector<int>nums)
{
    int n = nums.size();
    return fun(nums, n);
}


int main() {
    vector<int> nums = {1,2,3,1};
    int n = nums.size();

    for(int i=1; i<=n; i++)
    {
        dp[i] = -1;
    }

    cout << fun(nums, n) << endl;
    cout<<rob(nums)<<endl;
    return 0;
}


/*

vector<int>rh = {2, 3, 2, 5};
    //handle the base case
    int n = rh.size();//sizeof(rh)/sizeof(rh[0]);
    cout<<n<<endl;
    dp[0] = rh[0];
    dp[1] = max(rh[0], rh[1]);

    // loop over the state
    for(int i = 2 ; i< rh.size(); i++)
    {

        dp[i] = max(dp[i-2] + rh[i], dp[i-1]);
    }

    cout<<dp[rh.size()-1];
    //cout<<rob(rh)  <<endl;
*/
