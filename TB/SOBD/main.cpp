#include <bits/stdc++.h>
using namespace std;
bool check(long long n)
{
    if(n<2) return false;
    for(int i=2;i<=sqrt(n);i++) if(n%i==0) return false;
    return true;
}
int main()
{
    long long n;
    cin>>n;
    long long sum=0;
    while(n!=0)
    {
        sum+=n%10;
        n/=10;
    }
    if(check(sum)) cout<<"YES";
    else cout<<"NO";
    return 0;
}