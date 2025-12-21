#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;
    long long a[n+5];
    a[0]=0;
    for(int i=1;i<=n;i++) cin>>a[i];
    long long maxi=INT_MIN;
    long long sum[n+5];
    sum[0]=0;
    for(int i=1;i<=n;i++)
    {
        sum[i]=sum[i-1]+a[i];
    }

    for(int i=1;i<=n;i++)
    {
        for(int j=i;j<=n;j++)
        {
            if(sum[j]-sum[i-1]>maxi) maxi=sum[j]-sum[i-1];
        }
    }
    cout<<maxi;
    return 0;
}