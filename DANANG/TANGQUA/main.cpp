#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    long long a[n+5];
    for(int i=1;i<=n;i++) cin>>a[i];
    vector<long long> dp(n+1,1);
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<i;j++)
        {
            if(a[j]<a[i]) dp[i]=max(dp[i], dp[j]+1); 
        }
    }
    cout<<n-dp[n];
    return 0;
}