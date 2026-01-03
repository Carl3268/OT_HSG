#include <bits/stdc++.h>
using namespace std;
long long tong(long long n)
{
    long long ton1=0;
    while(n!=0)
    {
        ton1+=n%10;
        n/=10;
    }
    return ton1;
}
int main()
{
    long long n;
    cin>>n;
    for(long long i=n;i<10e12;i++)
    {
        long long y=tong(i);
        if(__gcd(i,y)>1)
        {
            cout<<i;
            break;
        }
    }
    return 0;
}