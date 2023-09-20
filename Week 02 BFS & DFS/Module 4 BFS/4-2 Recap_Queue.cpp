#include<bits/stdc++.h>
using namespace std;

int main()
{
    queue<int>q;
    for(int i=1; i<=10; i++)
    {
        q.push(i); // tc = o(1) for single component
    }
    for(int i=0; i<10; i++)// sc = o(n) for all elements
    {
        cout<<q.front()<<" ";
        q.pop();
    }
    return 0;
}
