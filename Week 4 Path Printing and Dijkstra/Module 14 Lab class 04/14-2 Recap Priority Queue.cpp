#include<bits/stdc++.h>
using namespace std;

int main()
{
    //priority_queue<int> pq;// boro theke choto number print kore

    priority_queue<int,vector<int>,greater<int>>pq; // choto theke boro print kore

    int n;
    cin>>n;
    for(int i=0; i<n; i++) // tc = O(log n)
    {
        int a;
        cin>>a;
        pq.push(a);
    }

    while(!pq.empty())
    {
        cout<<pq.top()<<" ";
        pq.pop();
    }
    return 0;
}
