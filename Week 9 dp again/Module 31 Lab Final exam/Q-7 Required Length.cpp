#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
const int INF = 1e8+5;
map<ll, ll>dp;
ll n, x;


ll solve(ll val) {

    if(dp.find(val) != dp.end())
    {
        return dp[val];
    }

    ll ans = 9*INF;

    string digits = to_string(val);

    if(digits.size() >= n)
    {
        return 0;
    }

    for(ll i=0; i< digits.size(); i++)
    {
        if((digits[i] - '0') > 1 )
        ans = min(ans, solve(val*(digits[i] - '0')));
    }
    if(ans != 9*INF)
    {
        ans++;
    }
    dp[val] = ans;
    return ans;


}

int main() {

    cin >> n >> x;

    ll ans = solve(x);
    if(ans == 9*INF)
    {
        ans = -1;
    }
    cout<<ans<<endl;

    return 0;
}
