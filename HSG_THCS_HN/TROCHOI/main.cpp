#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n,m;
    cin>>n>>m;
    vector<long long> tong;
    long long maxi=INT_MIN;
    while(n--)
    {
        long long a,b;
        cin>>a>>b;
        tong.push_back(a+b);
        if(b>maxi) maxi=b;
    }
    sort(tong.begin(), tong.end());
    reverse(tong.begin(),tong.end());
    long long kq=0;
    for(int i=0;i<tong.size();i++)
    {
        if(tong[i]>maxi)
        {
            kq+=tong[i];
            m--;
        }
    }
    if(m>0)
    {
        cout<<kq+m*maxi;
    }
    else cout<<kq;
    return 0;
}