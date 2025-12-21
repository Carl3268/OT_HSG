#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long m,n;
    cin>>m>>n;
    vector<long long> kq(n+5);
    for(int i=0;i<m;i++)
    {    
        for(int j=0;j<n;j++)
            {
                long long a;
                cin>>a;
                kq[j]+=a;
            }
    }
    for(int i=0;i<n;i++) cout<<kq[i]<<" ";
    return 0;
}