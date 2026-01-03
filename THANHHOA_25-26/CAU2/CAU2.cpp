#include <bits/stdc++.h>
using namespace std;
bool check(long long n, vector<long long> b)
{
    for(int i=0;i<b.size();++i)
    {
        if(__gcd(n,b[i])>1) return false;
    }
    return true;
}
int main()
{
    ios::sync_with_stdio(false);
    long long n,m;
    cin>>n>>m;
    vector<long long> a,b;
    for(int i=0;i<n;i++)
    {
        long long x;
        cin>>x;
        a.push_back(x);
    }
    for(int i=0;i<m;i++)
    {
        long long x;
        cin>>x;
        b.push_back(x);
    }
    long long dem=0;
    for(int i=0;i<n;i++)
    {
        if(check(a[i], b)==true) dem++;
    }
    cout<<dem;
    return 0;   
}