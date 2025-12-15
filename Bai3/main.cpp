#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long m,n,s;
    cin>>m>>n>>s;
    long long maxi=-1;
    vector<long long> a(m*n);
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            long long x;
            cin>>x;
            a.push_back(x);
        }
    }
    sort(a.begin(), a.end());
    long long l=0;
    long long r=a.size()-1;
    while(l<r)
    {
        long long sum=a[l]+a[r];
        if(sum<=s)
        {
            if(sum>maxi) maxi=sum;
            l++;
        }
        else
        {
            r--;
        }
    }
    cout<<maxi;
    return 0;
}