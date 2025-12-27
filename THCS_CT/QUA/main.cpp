#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long n,k;
    cin>>n>>k;
    vector<long long> a;
    for(int i=0;i<n;i++)
    {
        long long x;
        cin>>x;
        a.push_back(x);
    }
    sort(a.begin(), a.end());
    reverse(a.begin(), a.end());
    long long sum=0;
    for(int i=0;i<k;i++) sum+=a[i];
    cout<<sum;     
    return 0;   
}