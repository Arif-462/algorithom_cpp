#include<bits/stdc++.h>
using namespace std;

int Calculate_power(int n, int m)
{
    int result = 1;
    if(m != 0)
    {
        return n*Calculate_power(n, m-1);
    }
    else
      return 1;


}

int main()
{
    int n, m;
    cin>>n>>m;
    cout<<Calculate_power(n,m)<<"\n";

    return 0;
}
