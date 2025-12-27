#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long m,n;
    cin>>m>>n;
    vector<long long> sum(n);
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            long long x;
            cin>>x;
            sum[j]+=x;
        }        
    }
    long long id=0;
    long long maxi=0;
    for(int i=0;i<sum.size();i++)
    {
        if(sum[i]>maxi)
        {
            maxi=sum[i];
            id=i;
        }
    }
    cout<<id+1<<" "<<maxi;
}