#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    long long dp[n+5];
    for(int i=1;i<n;i++)
    {
        dp[i]=dp[i-1]*i;
    }
    cout<<dp[n];
    return 0;
}