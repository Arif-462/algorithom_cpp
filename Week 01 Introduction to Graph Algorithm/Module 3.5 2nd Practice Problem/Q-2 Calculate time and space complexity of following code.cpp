#include<bits/stdc++.h>
using namespace std;

//Time complexity = O(n^2)
// Space complexity = O(1)
int main()
{
    int N = 5;
    int a = 0;
    for (int i = 0; i < N; i++)
    {
        cout<<i<<" -> ";
        for (int j = N; j > i; j--)
        {
            a = a + i + j;
            cout<<a<<" ";
        }
        cout<<endl;
}

    return 0;
}
