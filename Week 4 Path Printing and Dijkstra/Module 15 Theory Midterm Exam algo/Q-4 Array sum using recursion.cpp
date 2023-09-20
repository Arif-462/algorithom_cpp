#include<bits/stdc++.h>
using namespace std;

int find_sum(int arr[], int n)
{
    if(n == 0) return 0;

    return arr[n-1] + find_sum(arr, n-1);
}

int main()
{
    int arr[1005];
    int n;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }

    int sumation = find_sum(arr, n);

    cout<<sumation<<endl;
    return 0;
}
