#include <bits/stdc++.h>
using namespace std;
const long long m=1000005;
long long sang[m];
void sanguoc()
{
    for(int i=1;i<=m;i++)
    {
        for(int j=i;j<=m;j+=i)
        {
            sang[j]++;
        }
    }
}
int main()
{
    sanguoc();
    long long n;
    cin>>n;
    long long x=0;
    for(int i=2;i<=sqrt(n);i++)
    {
        for(int j=i+1;j<=n/2;j++)
        {
            if(sang[i]==2 and sang[j]==2 and i*j<=n)
            {
                x++;
            }
        }
    }
    cout<<x;
    return 0;
}