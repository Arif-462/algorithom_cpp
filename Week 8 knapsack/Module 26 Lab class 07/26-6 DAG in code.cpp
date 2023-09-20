#include<bits/stdc++.h>
using namespace std;
/*
    -state : f(n) -> Longest distance from root to node n;
    - rcurrence : f(n) -> max{f(p_1), f(p_2)....f(p_m)}
                    where p-i is and immediate parent of node n
    - base case : f(root) = 0;

*/
//Memoization method

const int N = 1e5+5;
int dp[N];
int root, target;

vector<int>parent_list[N];
int find_longest(int node)
{
    //base case
    if(node == root)
    {
        return 0;
    }

    //return result if already calculated
    if(dp[node] != -1)
    {
        return dp[node];
    }

    // calculate result from smaller sub problem
    int ans = 0;
    for(int parent: parent_list[node])
    {
        int parent_distance = find_longest(parent);
        ans = max(ans, parent_distance);
    }
    ans++;
    dp[node] = ans;
    return ans;

}

int main()
{
    int n, m;
    cin>>n>>m;
    for(int i=0; i<n; i++)
    {
        int u, v;
        cin>>u>>v;
        parent_list[v].push_back(u);
    }

    for(int i=1; i<=n;i++)
    {
        dp[i] = -1;
    }

    cin>> root >> target;

    cout<<find_longest(target)<<endl;

    return 0;
}

/*

4 4
1 3
3 4
1 4
4 2
1 2

*/




//Tabulation Method


int main()
{
    int n, m;
    cin>>n>>m;
    for(int i=0; i<n; i++)
    {
        int u, v;
        cin>>u>>v;
        parent_list[v].push_back(u);
    }

    cin>> root >> target;




    cout<<find_longest(target)<<endl;

    return 0;
}

