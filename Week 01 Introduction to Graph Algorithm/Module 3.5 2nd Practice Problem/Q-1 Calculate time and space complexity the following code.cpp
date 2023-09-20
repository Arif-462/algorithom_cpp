#include<bits/stdc++.h>
using namespace std;
int main()
{
    //space complexity = O(n*m);
    // Time complexity = O(n) else O(M)
;    int a = 0, b = 0;
    int N = 4, M = 4;
    int matrix[N][M];
    for(int i=0; i<N; i++)
    {
        a = a+i;
        matrix[i][i] = a;
        cout<<matrix[i][i]<<" ";
    }
    cout<<endl;
    for(int j=0; j<M; j++)
    {
        b = b + 2 * j;
        cout<<b<<" ";
    }

    return 0;
}
