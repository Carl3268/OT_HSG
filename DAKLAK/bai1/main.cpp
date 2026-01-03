#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    cin>>t;
    unsigned long long sum=0;
    vector<unsigned long long> kq(1000005,0);
    for(int i=1;i<1000005;i++)
    {
        sum+=i*(i+2);
        kq[i]=sum;
    }
    while(t--)
    {
        long long n;
        cin>>n;
        cout<<kq[n]<<endl;
    }
    return 0;
}