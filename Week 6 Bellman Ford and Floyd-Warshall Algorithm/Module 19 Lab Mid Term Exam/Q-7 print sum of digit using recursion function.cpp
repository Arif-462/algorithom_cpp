#include<bits/stdc++.h>
using namespace std;

int SumOfDigit(int n)
{
    if(n == 0)
        return 0;

    return ((n % 10)  + SumOfDigit(n/10));

}

int main()
{
    int n;
    cin>>n;
    cout<<SumOfDigit(n)<<endl;
    return 0;
}
