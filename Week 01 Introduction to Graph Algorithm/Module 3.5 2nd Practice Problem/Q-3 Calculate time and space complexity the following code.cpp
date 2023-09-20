#include<bits/stdc++.h>
using namespace std;
int main()
{
    //Time complexity = O(log n);
    //space complexity = O(n);
    int N = 100;
    int a = 0;
    int i = N;
    vector<int>vec;
    while(i>0)
    {
        a += i;
        i /= 2;
        //vec.push_back(a);
        cout<<i<<" ";
    }
    return 0;
}
