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
    long long l,r;
    cin>>l>>r;
    long long count=0;
    for(int i=l;i<r;++i)
    {
        if(sang[i+(i+1)]==2) count++; 
    }
    cout<<count;
    return 0;
}