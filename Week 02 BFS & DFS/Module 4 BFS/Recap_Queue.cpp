#include<bits/stdc++.h>
using namespace std;

int main()
{
    //tc = O(1)
    //sc = O(n)
    queue<int>q;
    for(int i=0; i<10; i++)
    {
        q.push(i);
    }
    for(int i=0; i<10; i++)
    {
        cout<<q.front()<<" ";
        q.pop();
    }
    return 0;
}
