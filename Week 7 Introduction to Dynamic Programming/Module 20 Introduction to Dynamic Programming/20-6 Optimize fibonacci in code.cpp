
#include<bits/stdc++.h>
using namespace std;

const int N = 1e5+5;
long long  ara[N];

long long fib(int n)  //Time complexity = O(n);
{
    if(n <= 2) return 1;

    // check if fib(n) is already calculated
    if(ara[n] != 0)
    {
        return ara[n];
    }

    ara[n] = fib(n-1) + fib(n-2);
    return ara[n];
}

int main()
{
    cout<<fib(3)<<endl;
    cout<<fib(5)<<endl;
    cout<<fib(50)<<endl;

    return 0;
}
