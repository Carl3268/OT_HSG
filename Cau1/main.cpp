#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long a,b,c,d;
    cin>>a>>b>>c>>d;
    vector<long long> kq;
    kq.push_back(a);
    kq.push_back(b);
    kq.push_back(c);
    kq.push_back(d);
    sort(kq.begin(), kq.end());
    cout<<kq[0]*kq[2];
    return 0;
}