#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n,k;
    cin>>n>>k;
    long long a[n+5];
    a[0]=0;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    long long sum[n];
    sum[0]=0;
    for(int i=1;i<=n;i++)
    {
        if(a[i]%2!=0)
        {
            sum[i]=sum[i-1]+1;
        }
        else
        {
            sum[i]=sum[i-1];
        }
    }
    long long count=0;
    for(int i=1;i<n;i++)
    {
        for(int j=i;j<=n;j++)
        {
            if(sum[j]-sum[i-1]==k) count++;
        }
    }
    cout<<count;
    return 0;
}