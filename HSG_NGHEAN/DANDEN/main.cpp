#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n,k;
    cin>>n>>k;
    long long xanh=0;
    long long red=0;
    while(n--)
    {
        long long x;
        cin>>x;
        if(x==1) xanh++;
        if(x==0) red++;
    }
    if(red>=k) cout<<xanh+k;
    else cout<<xanh-(k-red);
    return 0;
}