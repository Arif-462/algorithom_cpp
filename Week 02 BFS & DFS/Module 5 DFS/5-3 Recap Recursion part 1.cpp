#include<bits/stdc++.h>
using namespace std;
//n th numbers sum
/*
    steps of palindrome:
    ------------------------
    1.-> can we solve smallest problem
    2-> can we solve the larger problem given the smaller problem
        is already solved?
    3-> Generalize the relation into an formula.
*/
int sum(int n)
{
    if(n == 1)
    {
        return 1;
    }
    return sum(n-1) + n;
}
int main()
{
    int n;
    cin>>n;
    cout<<sum(n);
    return 0;
}
