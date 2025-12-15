#include <bits/stdc++.h>
using namespace std;
long long sum(long long n)
{
    long long tong=0;
    while(n!=0)
    {
        tong+=n%10;
        n/=10;
    }
    return tong;
}
bool check(long long n)
{
    if(n<2) return false;
    for(int i=2;i<sqrt(n);i++) if(n%i==0) return false;
    return true;
}
int main()
{
    long long n;
    cin>>n;
    long long count=0;
    for(int i=0;i<n;i++)
    {
        long long x;
        cin>>x;
        if(check(x) and check(sum(x))) count++;
    }
    cout<<count;
    return 0;
}