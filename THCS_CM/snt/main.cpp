#include <bits/stdc++.h>
using namespace std;
const long long m=1000005;
long long sang[m];
void sanguoc()
{
    for(int i=1;i<=m;i++)
        for(int j=i;j<=m;j+=i)
            sang[j]++;
}
int main()
{
    sanguoc();
    vector<long long> sum(m);
    sum[0]=sum[1]=0;
    for(int i=0;i<=m;i++)
    {
        if(sang[i]==2) sum[i]=sum[i-1]+1;
        else
        {
            sum[i]=sum[i-1];
        }
    }
    long long n;
    cin>>n;
    while(n--)
    {
        long long l,r;
        cin>>l>>r;
        cout<<sum[r]-sum[l-1]<<endl;
    }
    return 0;
}